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

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class AWS_GREENGRASS_API GetSubscriptionDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    GetSubscriptionDefinitionVersionRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSubscriptionDefinitionVersion"; }

    Aws::String SerializePayload() const override;


    /**
     * subscription definition Id
     */
    inline const Aws::String& GetSubscriptionDefinitionId() const{ return m_subscriptionDefinitionId; }

    /**
     * subscription definition Id
     */
    inline void SetSubscriptionDefinitionId(const Aws::String& value) { m_subscriptionDefinitionIdHasBeenSet = true; m_subscriptionDefinitionId = value; }

    /**
     * subscription definition Id
     */
    inline void SetSubscriptionDefinitionId(Aws::String&& value) { m_subscriptionDefinitionIdHasBeenSet = true; m_subscriptionDefinitionId = std::move(value); }

    /**
     * subscription definition Id
     */
    inline void SetSubscriptionDefinitionId(const char* value) { m_subscriptionDefinitionIdHasBeenSet = true; m_subscriptionDefinitionId.assign(value); }

    /**
     * subscription definition Id
     */
    inline GetSubscriptionDefinitionVersionRequest& WithSubscriptionDefinitionId(const Aws::String& value) { SetSubscriptionDefinitionId(value); return *this;}

    /**
     * subscription definition Id
     */
    inline GetSubscriptionDefinitionVersionRequest& WithSubscriptionDefinitionId(Aws::String&& value) { SetSubscriptionDefinitionId(std::move(value)); return *this;}

    /**
     * subscription definition Id
     */
    inline GetSubscriptionDefinitionVersionRequest& WithSubscriptionDefinitionId(const char* value) { SetSubscriptionDefinitionId(value); return *this;}


    /**
     * subscription definition version Id
     */
    inline const Aws::String& GetSubscriptionDefinitionVersionId() const{ return m_subscriptionDefinitionVersionId; }

    /**
     * subscription definition version Id
     */
    inline void SetSubscriptionDefinitionVersionId(const Aws::String& value) { m_subscriptionDefinitionVersionIdHasBeenSet = true; m_subscriptionDefinitionVersionId = value; }

    /**
     * subscription definition version Id
     */
    inline void SetSubscriptionDefinitionVersionId(Aws::String&& value) { m_subscriptionDefinitionVersionIdHasBeenSet = true; m_subscriptionDefinitionVersionId = std::move(value); }

    /**
     * subscription definition version Id
     */
    inline void SetSubscriptionDefinitionVersionId(const char* value) { m_subscriptionDefinitionVersionIdHasBeenSet = true; m_subscriptionDefinitionVersionId.assign(value); }

    /**
     * subscription definition version Id
     */
    inline GetSubscriptionDefinitionVersionRequest& WithSubscriptionDefinitionVersionId(const Aws::String& value) { SetSubscriptionDefinitionVersionId(value); return *this;}

    /**
     * subscription definition version Id
     */
    inline GetSubscriptionDefinitionVersionRequest& WithSubscriptionDefinitionVersionId(Aws::String&& value) { SetSubscriptionDefinitionVersionId(std::move(value)); return *this;}

    /**
     * subscription definition version Id
     */
    inline GetSubscriptionDefinitionVersionRequest& WithSubscriptionDefinitionVersionId(const char* value) { SetSubscriptionDefinitionVersionId(value); return *this;}

  private:

    Aws::String m_subscriptionDefinitionId;
    bool m_subscriptionDefinitionIdHasBeenSet;

    Aws::String m_subscriptionDefinitionVersionId;
    bool m_subscriptionDefinitionVersionIdHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
