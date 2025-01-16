#include "NetworkPeer.h"

UNetworkPeer::UNetworkPeer() {
    this->PingMs = 0;
    this->bIsFriend = false;
}

bool UNetworkPeer::IsPlayingThisGame() {
    return false;
}

bool UNetworkPeer::IsPlaying() {
    return false;
}

bool UNetworkPeer::IsOnline() {
    return false;
}


