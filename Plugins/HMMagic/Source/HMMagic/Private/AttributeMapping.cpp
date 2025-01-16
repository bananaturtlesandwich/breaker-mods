#include "AttributeMapping.h"

FAttributeMapping::FAttributeMapping() {
    this->Type = EAttributeType::Limited;
    this->InitialValue = 0.00f;
    this->ReplicationType = ENetworkReplicationType::Unreliable;
    this->ReplicationAuthority = ENetworkReplicationAuthority::Server;
}

