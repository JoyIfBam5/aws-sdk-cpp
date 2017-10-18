﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::MarketplaceEntitlementService;
using namespace Aws::Utils;

namespace Aws
{
namespace MarketplaceEntitlementService
{
namespace MarketplaceEntitlementServiceErrorMapper
{

static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int INTERNAL_SERVICE_ERROR_HASH = HashingUtils::HashString("InternalServiceErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceEntitlementServiceErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == INTERNAL_SERVICE_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceEntitlementServiceErrors::INTERNAL_SERVICE_ERROR), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MarketplaceEntitlementServiceErrorMapper
} // namespace MarketplaceEntitlementService
} // namespace Aws
