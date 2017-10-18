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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{
  class AWS_GREENGRASS_API DisassociateServiceRoleFromAccountResult
  {
  public:
    DisassociateServiceRoleFromAccountResult();
    DisassociateServiceRoleFromAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DisassociateServiceRoleFromAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Time when the service role was disassociated from the account.
     */
    inline const Aws::String& GetDisassociatedAt() const{ return m_disassociatedAt; }

    /**
     * Time when the service role was disassociated from the account.
     */
    inline void SetDisassociatedAt(const Aws::String& value) { m_disassociatedAt = value; }

    /**
     * Time when the service role was disassociated from the account.
     */
    inline void SetDisassociatedAt(Aws::String&& value) { m_disassociatedAt = std::move(value); }

    /**
     * Time when the service role was disassociated from the account.
     */
    inline void SetDisassociatedAt(const char* value) { m_disassociatedAt.assign(value); }

    /**
     * Time when the service role was disassociated from the account.
     */
    inline DisassociateServiceRoleFromAccountResult& WithDisassociatedAt(const Aws::String& value) { SetDisassociatedAt(value); return *this;}

    /**
     * Time when the service role was disassociated from the account.
     */
    inline DisassociateServiceRoleFromAccountResult& WithDisassociatedAt(Aws::String&& value) { SetDisassociatedAt(std::move(value)); return *this;}

    /**
     * Time when the service role was disassociated from the account.
     */
    inline DisassociateServiceRoleFromAccountResult& WithDisassociatedAt(const char* value) { SetDisassociatedAt(value); return *this;}

  private:

    Aws::String m_disassociatedAt;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
