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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters of ModifyIdFormat.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyIdFormatRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ModifyIdFormatRequest : public EC2Request
  {
  public:
    ModifyIdFormatRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyIdFormat"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The type of resource: <code>instance</code> | <code>reservation</code> |
     * <code>snapshot</code> | <code>volume</code> </p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The type of resource: <code>instance</code> | <code>reservation</code> |
     * <code>snapshot</code> | <code>volume</code> </p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The type of resource: <code>instance</code> | <code>reservation</code> |
     * <code>snapshot</code> | <code>volume</code> </p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The type of resource: <code>instance</code> | <code>reservation</code> |
     * <code>snapshot</code> | <code>volume</code> </p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The type of resource: <code>instance</code> | <code>reservation</code> |
     * <code>snapshot</code> | <code>volume</code> </p>
     */
    inline ModifyIdFormatRequest& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The type of resource: <code>instance</code> | <code>reservation</code> |
     * <code>snapshot</code> | <code>volume</code> </p>
     */
    inline ModifyIdFormatRequest& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The type of resource: <code>instance</code> | <code>reservation</code> |
     * <code>snapshot</code> | <code>volume</code> </p>
     */
    inline ModifyIdFormatRequest& WithResource(const char* value) { SetResource(value); return *this;}


    /**
     * <p>Indicate whether the resource should use longer IDs (17-character IDs).</p>
     */
    inline bool GetUseLongIds() const{ return m_useLongIds; }

    /**
     * <p>Indicate whether the resource should use longer IDs (17-character IDs).</p>
     */
    inline void SetUseLongIds(bool value) { m_useLongIdsHasBeenSet = true; m_useLongIds = value; }

    /**
     * <p>Indicate whether the resource should use longer IDs (17-character IDs).</p>
     */
    inline ModifyIdFormatRequest& WithUseLongIds(bool value) { SetUseLongIds(value); return *this;}

  private:

    Aws::String m_resource;
    bool m_resourceHasBeenSet;

    bool m_useLongIds;
    bool m_useLongIdsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
