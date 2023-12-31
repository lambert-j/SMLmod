﻿// Copyright Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Online/OnlineError.h"
#include "Online/Connectivity.h"

#include "OnlineIntegrationTypes.generated.h"

namespace UE::Online
{
enum class ELoginStatus : uint8;
enum class EPrivilegeResults : uint32;
enum class EUserPrivileges : uint8;
using IAuthPtr = TSharedPtr<class IAuth>;
using IOnlineServicesPtr = TSharedPtr<class IOnlineServices>;
template <typename OpType>
class TOnlineResult;
struct FAuthLogin;
struct FConnectionStatusChanged;
struct FExternalUIShowLoginUI;
struct FAuthLoginStatusChanged;
struct FQueryUserPrivilege;
struct FAccountInfo;
}

using FOnlineErrorType = UE::Online::FOnlineError;
using ELoginStatusType = UE::Online::ELoginStatus;

/** Enum specifying where and how to run online queries */
UENUM(BlueprintType)
enum class EOnlineIntegrationMappedContext : uint8
{
	/** Called from game code, this uses the default system but with special handling that could merge results from multiple contexts */
	Game,

	/** Service context. This will be the context responsible for session creation and lookup.  */
	Session,

	/** Invalid system */
	Invalid
};

UENUM(BlueprintType)
enum class EOnlineIntegrationUnmappedContext: uint8
{
	/** The platform context. It must always exist. */
	Platform,

	/** The external, or service, context. It's existence will depend on the platform and the user preferences. */
	External,

	/** Invalid value */
	Invalid
};

/** Enum describing the state of initialization for a specific user */
UENUM(BlueprintType)
enum class ECommonUserInitializationState : uint8
{
	/** User has not started login process */
	Unknown,

	/** Player is in the process of acquiring a user id with local login */
	DoingInitialLogin,

	/** Player is performing the network login, they have already logged in locally */
	DoingNetworkLogin,

	/** Player failed to log in at all */
	FailedtoLogin,


	/** Player is logged in and has access to online functionality */
	LoggedInOnline,

	/** Player is logged in locally (either guest or real user), but cannot perform online actions */
	LoggedInLocalOnly,


	/** Invalid state or user */
	Invalid,
};

/** Enum specifying different privileges and capabilities available to a user */
UENUM(BlueprintType)
enum class ECommonUserPrivilege : uint8
{
	/** Whether the user can play at all, online or offline */
	CanPlay,

	/** Whether the user can play in online modes */
	CanPlayOnline,

	/** Whether the user can use text chat */
	CanCommunicateViaTextOnline,

	/** Whether the user can use voice chat */
	CanCommunicateViaVoiceOnline,

	/** Whether the user can access content generated by other users */
	CanUseUserGeneratedContent,

	/** Whether the user can ever participate in cross-play */
	CanUseCrossPlay,

	/** Invalid privilege (also the count of valid ones) */
	Invalid_Count UMETA(Hidden)
};

/** Enum specifying the general availability of a feature or privilege, this combines information from multiple sources */
UENUM(BlueprintType)
enum class ECommonUserPrivilegeAvailability : uint8
{
	/** State is completely unknown and needs to be queried */
	Unknown,

	/** This feature is fully available for use right now */
	NowAvailable,

	/** This might be available after the completion of normal login procedures */
	PossiblyAvailable,

	/** This feature is not available now because of something like network connectivity but may be available in the future */
	CurrentlyUnavailable,

	/** This feature will never be available for the rest of this session due to hard account or platform restrictions */
	AlwaysUnavailable,

	/** Invalid feature */
	Invalid,
};

/** Enum giving specific reasons why a user may or may not use a certain privilege */
UENUM(BlueprintType)
enum class ECommonUserPrivilegeResult : uint8
{
	/** State is unknown and needs to be queried */
	Unknown,

	/** This privilege is fully available for use */
	Available,

	/** User has not fully logged in */
	UserNotLoggedIn,

	/** User does not own the game or content */
	LicenseInvalid,

	/** The game needs to be updated or patched before this will be available */
	VersionOutdated,

	/** No network connection, this may be resolved by reconnecting */
	NetworkConnectionUnavailable,

	/** Parental control failure */
	AgeRestricted,

	/** Account does not have a required subscription or account type */
	AccountTypeRestricted,

	/** Another account/user restriction such as being banned by the service */
	AccountUseRestricted,

	/** Other platform-specific failure */
	PlatformFailure,
};

/** Specifies the online features and connectivity that should be used for a game session */
UENUM(BlueprintType)
enum class ECommonSessionOnlineMode : uint8
{
	/**
	 * @brief No multiplayer enabled.
	 */
	Offline,
	/**
	 * @brief LAN Session. Can only be joined from within the local network
	 */
	LAN,
	/**
	 * @brief Raw IP session. Can be joined by IP address by anyone. Might require NAT rules. 
	 */
	IP,
	/**
	 * @brief Online session. Creates a P2P session. Handles NAT. 
	 */
	Online
};

/**
 * The joining policy of an online session. Only relevant for sessions whose mode is Online
 */
UENUM(BlueprintType)
enum class ECommonSessionJoinPolicy: uint8
{
	/**
	 * @brief Session can be searched for online and joined by anyone
	 */
	Public,

	/**
	 * @brief Session can be joined by presence - can be thought as friends only
	 */
	FriendsOnly,

	/**
	 * @brief Session can be joined by direct invitation only
	 */
	InviteOnly,
};

/** Used to track the progress of different asynchronous operations */
enum class ECommonUserAsyncTaskState : uint8
{
	/** The task has not been started */
	NotStarted,
	/** The task is currently being processed */
	InProgress,
	/** The task has completed successfully */
	Done,
	/** The task failed to complete */
	Failed
};

/** Detailed information about the online error. Effectively a wrapper for FOnlineError. */
USTRUCT(BlueprintType)
struct FOnlineResultInformation
{
	GENERATED_BODY()

	/** Whether the operation was successful or not. If it was successful, the error fields of this struct will not contain extra information. */
	UPROPERTY(BlueprintReadOnly)
	bool bWasSuccessful = true;

	/** The unique error id. Can be used to compare against specific handled errors. */
	UPROPERTY(BlueprintReadOnly)
	FString ErrorId;

	/** Error text to display to the user. */
	UPROPERTY(BlueprintReadOnly)
	FText ErrorText;

	/**
	 * Initialize this from an FOnlineErrorType
	 * @param InOnlineError the online error to initialize from
	 */
	void ONLINEINTEGRATION_API FromOnlineError(const FOnlineErrorType& InOnlineError);
};

UENUM(BlueprintType)
enum class ECommonUserOnlineLoginResult: uint8
{
	Success,
	DifferentAccountsLinked,
	ContinuationRequired,
	OtherError
};

UENUM(BlueprintType)
enum class ECommonUserNATType: uint8
{
	Unknown,
	Open,
	Moderate,
	Strict
};

UENUM(BlueprintType)
enum class ECommonUserLoginStatus: uint8
{
	/** Player has not logged in or chosen a local profile. */
	NotLoggedIn,
	/** Player is using a local profile but is not logged in. */
	UsingLocalProfile,
	/** Player is logged in but may have reduced functionality with online services. */
	LoggedInReducedFunctionality,
	/** Player has been validated by the platform specific authentication service. */
	LoggedIn
};

/** Blueprint enabled partial mirror of UE::Online::EOnlineServices */
UENUM(BlueprintType)
enum class EOnlineIntegrationPlatform: uint8
{
	Null,
	Epic,
	Xbox,
	PSN,
	Nintendo,
	Stadia,
	Steam,
	Google,
	GooglePlay,
	Apple,
	AppleGameKit,
	Samsung,
	Oculus,
	Tencent
};

UENUM(BlueprintType)
enum class EOnlineIntegrationMode: uint8
{
	Undefined,
	PlatformOnly,
	LimitedCrossPlay,
	FullCrossPlay
};


USTRUCT(BlueprintType)
struct ONLINEINTEGRATION_API FPlayerAvatar
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UTexture2D> Texture2D;

	bool operator==(const FPlayerAvatar& Other) const
	{
		return Texture2D == Other.Texture2D;
	}
};

struct FInitializeLocalUser
{
	static constexpr TCHAR Name[] = TEXT("GetConnectionStatus");

	struct Params
	{
		// Not used (yet?)
	};

	struct Result
	{
		/** Connection status */
		TSharedPtr<UE::Online::FAccountInfo> AccountInfo;
		const class ULocalUserInfo* UserInfo = nullptr;
	};
};

struct FOnlineIntegrationInternalAccessKey;