#include "Attribute.h"

FAttribute::FAttribute() {
    this->Type = EAttributeType::Limited;
    this->CurrentValue = 0.00f;
    this->DefaultValue = 0.00f;
    this->ReplicationType = ENetworkReplicationType::Unreliable;
    this->ReplicationAuthority = ENetworkReplicationAuthority::Server;
}

