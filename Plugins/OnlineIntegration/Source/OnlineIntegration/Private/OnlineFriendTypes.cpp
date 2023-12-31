// This file has been automatically generated by the Unreal Header Implementation tool

#include "OnlineFriendTypes.h"

bool UOnlineFriend::IsEffectivelyOnline() const{ return bool(); }
bool UOnlineFriend::IsPlayingThisGame() const{ return bool(); }
ECommonUserNATType UOnlineFriend::GetAdvertisedNATType() const{ return ECommonUserNATType(); }
bool UOnlineFriend::IsPresenceJoinable() const{ return bool(); }
UCommonUserSubsystem* UOnlineFriend::GetSubsystem() const{ return nullptr; }
ULocalUserInfo* UOnlineFriend::GetLocalUserInfo() const{ return nullptr; }
void UOnlineFriend::InviteToSession(){ }
void UOnlineFriend::AcceptGameInvite(){ }
void UOnlineFriend::RejectGameInvite(){ }
void UOnlineFriend::JoinGame(){ }
UOnlineUserPresence* UOnlineFriend::GetPresence() const{ return nullptr; }
void UOnlineFriend::SetAccountId(const UE::Online::FAccountId& AccountId, FOnlineIntegrationInternalAccessKey&&){ }
void UOnlineFriend::SetDisplayName(const FString& DisplayName, FOnlineIntegrationInternalAccessKey&&){ }
void UOnlineFriend::SetNickname(const FString& Nickname, FOnlineIntegrationInternalAccessKey&&){ }
void UOnlineFriend::SetRelationship(const EOnlineRelationship Relationship, FOnlineIntegrationInternalAccessKey&&){ }
void UOnlineFriend::SetContext(const EOnlineIntegrationUnmappedContext Context, FOnlineIntegrationInternalAccessKey&&){ }
void UOnlineFriend::SetGameSession(const FCommonSession& GameSession, FOnlineIntegrationInternalAccessKey&&){ }
void UOnlineFriend::SetAvatar(UTexture2D* InAvatar, FOnlineIntegrationInternalAccessKey&&){ }
void UOnlineFriend::SetHasIncomingInvite(const bool bHasIncomingInvite, FOnlineIntegrationInternalAccessKey&&){ }
void UOnlineFriend::PostInitProperties(){ Super::PostInitProperties(); }
void UOnlineFriendList::SetSearchTerm(const FString& InSearchTerm){ }
void UOnlineFriendList::MakeContextRelevant(EOnlineIntegrationUnmappedContext Context){ }
bool UOnlineFriendList::MatchesFilters(UOnlineFriend* Friend) const{ return bool(); }
FDelegateHandle UOnlineFriendList::AddOnFriendListSortedDelegate(FOnOnlineFriendListSortedNative::FDelegate&& Delegate){ return FDelegateHandle(); }
void UOnlineFriendList::RemoveOnFriendListSortedDelegate(FDelegateHandle DelegateHandle){ }
void UOnlineFriendList::FriendAdded(UOnlineFriend* Friend){ }
void UOnlineFriendList::FriendRemoved(UOnlineFriend* Friend){ }
void UOnlineFriendList::RebuildFilteredArray(){ }
void UOnlineFriendList::NotifySorted() const{ }
