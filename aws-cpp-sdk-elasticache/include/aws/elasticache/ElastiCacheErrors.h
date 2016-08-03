/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once

#include <aws/core/client/CoreErrors.h>
#include <aws/elasticache/ElastiCache_EXPORTS.h>

namespace Aws
{
namespace ElastiCache
{
enum class ElastiCacheErrors
{
  //From Core//
  //////////////////////////////////////////////////////////////////////////////////////////
  INCOMPLETE_SIGNATURE = 0,
  INTERNAL_FAILURE = 1,
  INVALID_ACTION = 2,
  INVALID_CLIENT_TOKEN_ID = 3,
  INVALID_PARAMETER_COMBINATION = 4,
  INVALID_QUERY_PARAMETER = 5,
  INVALID_PARAMETER_VALUE = 6,
  MISSING_ACTION = 7, // SDK should never allow
  MISSING_AUTHENTICATION_TOKEN = 8, // SDK should never allow
  MISSING_PARAMETER = 9, // SDK should never allow
  OPT_IN_REQUIRED = 10,
  REQUEST_EXPIRED = 11,
  SERVICE_UNAVAILABLE = 12,
  THROTTLING = 13,
  VALIDATION = 14,
  ACCESS_DENIED = 15,
  RESOURCE_NOT_FOUND = 16,
  UNRECOGNIZED_CLIENT = 17,
  MALFORMED_QUERY_STRING = 18,
  NETWORK_CONNECTION = 99,
  UNKNOWN = 100,
  ///////////////////////////////////////////////////////////////////////////////////////////

  AUTHORIZATION_ALREADY_EXISTS_FAULT= static_cast<int>(Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  AUTHORIZATION_NOT_FOUND_FAULT,
  CACHE_CLUSTER_ALREADY_EXISTS_FAULT,
  CACHE_CLUSTER_NOT_FOUND_FAULT,
  CACHE_PARAMETER_GROUP_ALREADY_EXISTS_FAULT,
  CACHE_PARAMETER_GROUP_NOT_FOUND_FAULT,
  CACHE_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT,
  CACHE_SECURITY_GROUP_ALREADY_EXISTS_FAULT,
  CACHE_SECURITY_GROUP_NOT_FOUND_FAULT,
  CACHE_SECURITY_GROUP_QUOTA_EXCEEDED_FAULT,
  CACHE_SUBNET_GROUP_ALREADY_EXISTS_FAULT,
  CACHE_SUBNET_GROUP_IN_USE,
  CACHE_SUBNET_GROUP_NOT_FOUND_FAULT,
  CACHE_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT,
  CACHE_SUBNET_QUOTA_EXCEEDED_FAULT,
  CLUSTER_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT,
  INSUFFICIENT_CACHE_CLUSTER_CAPACITY_FAULT,
  INVALID_A_R_N_FAULT,
  INVALID_CACHE_CLUSTER_STATE_FAULT,
  INVALID_CACHE_PARAMETER_GROUP_STATE_FAULT,
  INVALID_CACHE_SECURITY_GROUP_STATE_FAULT,
  INVALID_REPLICATION_GROUP_STATE_FAULT,
  INVALID_SNAPSHOT_STATE_FAULT,
  INVALID_SUBNET,
  INVALID_V_P_C_NETWORK_STATE_FAULT,
  NODE_QUOTA_FOR_CLUSTER_EXCEEDED_FAULT,
  NODE_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT,
  REPLICATION_GROUP_ALREADY_EXISTS_FAULT,
  REPLICATION_GROUP_NOT_FOUND_FAULT,
  RESERVED_CACHE_NODES_OFFERING_NOT_FOUND_FAULT,
  RESERVED_CACHE_NODE_ALREADY_EXISTS_FAULT,
  RESERVED_CACHE_NODE_NOT_FOUND_FAULT,
  RESERVED_CACHE_NODE_QUOTA_EXCEEDED_FAULT,
  SNAPSHOT_ALREADY_EXISTS_FAULT,
  SNAPSHOT_FEATURE_NOT_SUPPORTED_FAULT,
  SNAPSHOT_NOT_FOUND_FAULT,
  SNAPSHOT_QUOTA_EXCEEDED_FAULT,
  SUBNET_IN_USE,
  TAG_NOT_FOUND_FAULT,
  TAG_QUOTA_PER_RESOURCE_EXCEEDED
};
namespace ElastiCacheErrorMapper
{
  AWS_ELASTICACHE_API Client::AWSError<Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace ElastiCache
} // namespace Aws