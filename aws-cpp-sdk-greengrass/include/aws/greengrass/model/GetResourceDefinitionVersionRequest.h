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
  class AWS_GREENGRASS_API GetResourceDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    GetResourceDefinitionVersionRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceDefinitionVersion"; }

    Aws::String SerializePayload() const override;


    /**
     * Resource definition Id.
     */
    inline const Aws::String& GetResourceDefinitionId() const{ return m_resourceDefinitionId; }

    /**
     * Resource definition Id.
     */
    inline void SetResourceDefinitionId(const Aws::String& value) { m_resourceDefinitionIdHasBeenSet = true; m_resourceDefinitionId = value; }

    /**
     * Resource definition Id.
     */
    inline void SetResourceDefinitionId(Aws::String&& value) { m_resourceDefinitionIdHasBeenSet = true; m_resourceDefinitionId = std::move(value); }

    /**
     * Resource definition Id.
     */
    inline void SetResourceDefinitionId(const char* value) { m_resourceDefinitionIdHasBeenSet = true; m_resourceDefinitionId.assign(value); }

    /**
     * Resource definition Id.
     */
    inline GetResourceDefinitionVersionRequest& WithResourceDefinitionId(const Aws::String& value) { SetResourceDefinitionId(value); return *this;}

    /**
     * Resource definition Id.
     */
    inline GetResourceDefinitionVersionRequest& WithResourceDefinitionId(Aws::String&& value) { SetResourceDefinitionId(std::move(value)); return *this;}

    /**
     * Resource definition Id.
     */
    inline GetResourceDefinitionVersionRequest& WithResourceDefinitionId(const char* value) { SetResourceDefinitionId(value); return *this;}


    /**
     * Resource definition version Id.
     */
    inline const Aws::String& GetResourceDefinitionVersionId() const{ return m_resourceDefinitionVersionId; }

    /**
     * Resource definition version Id.
     */
    inline void SetResourceDefinitionVersionId(const Aws::String& value) { m_resourceDefinitionVersionIdHasBeenSet = true; m_resourceDefinitionVersionId = value; }

    /**
     * Resource definition version Id.
     */
    inline void SetResourceDefinitionVersionId(Aws::String&& value) { m_resourceDefinitionVersionIdHasBeenSet = true; m_resourceDefinitionVersionId = std::move(value); }

    /**
     * Resource definition version Id.
     */
    inline void SetResourceDefinitionVersionId(const char* value) { m_resourceDefinitionVersionIdHasBeenSet = true; m_resourceDefinitionVersionId.assign(value); }

    /**
     * Resource definition version Id.
     */
    inline GetResourceDefinitionVersionRequest& WithResourceDefinitionVersionId(const Aws::String& value) { SetResourceDefinitionVersionId(value); return *this;}

    /**
     * Resource definition version Id.
     */
    inline GetResourceDefinitionVersionRequest& WithResourceDefinitionVersionId(Aws::String&& value) { SetResourceDefinitionVersionId(std::move(value)); return *this;}

    /**
     * Resource definition version Id.
     */
    inline GetResourceDefinitionVersionRequest& WithResourceDefinitionVersionId(const char* value) { SetResourceDefinitionVersionId(value); return *this;}

  private:

    Aws::String m_resourceDefinitionId;
    bool m_resourceDefinitionIdHasBeenSet;

    Aws::String m_resourceDefinitionVersionId;
    bool m_resourceDefinitionVersionIdHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
