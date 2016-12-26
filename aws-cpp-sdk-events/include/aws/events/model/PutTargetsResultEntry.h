﻿/*
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
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>A PutTargetsResult contains a list of PutTargetsResultEntry.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutTargetsResultEntry">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHEVENTS_API PutTargetsResultEntry
  {
  public:
    PutTargetsResultEntry();
    PutTargetsResultEntry(const Aws::Utils::Json::JsonValue& jsonValue);
    PutTargetsResultEntry& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ID of the target submitted to Amazon CloudWatch Events.</p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <p>The ID of the target submitted to Amazon CloudWatch Events.</p>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <p>The ID of the target submitted to Amazon CloudWatch Events.</p>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <p>The ID of the target submitted to Amazon CloudWatch Events.</p>
     */
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }

    /**
     * <p>The ID of the target submitted to Amazon CloudWatch Events.</p>
     */
    inline PutTargetsResultEntry& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}

    /**
     * <p>The ID of the target submitted to Amazon CloudWatch Events.</p>
     */
    inline PutTargetsResultEntry& WithTargetId(Aws::String&& value) { SetTargetId(value); return *this;}

    /**
     * <p>The ID of the target submitted to Amazon CloudWatch Events.</p>
     */
    inline PutTargetsResultEntry& WithTargetId(const char* value) { SetTargetId(value); return *this;}

    /**
     * <p>The error code representing why the target submission failed on this
     * entry.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code representing why the target submission failed on this
     * entry.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code representing why the target submission failed on this
     * entry.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code representing why the target submission failed on this
     * entry.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code representing why the target submission failed on this
     * entry.</p>
     */
    inline PutTargetsResultEntry& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code representing why the target submission failed on this
     * entry.</p>
     */
    inline PutTargetsResultEntry& WithErrorCode(Aws::String&& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code representing why the target submission failed on this
     * entry.</p>
     */
    inline PutTargetsResultEntry& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error message explaining why the target submission failed on this
     * entry.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message explaining why the target submission failed on this
     * entry.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message explaining why the target submission failed on this
     * entry.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message explaining why the target submission failed on this
     * entry.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message explaining why the target submission failed on this
     * entry.</p>
     */
    inline PutTargetsResultEntry& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message explaining why the target submission failed on this
     * entry.</p>
     */
    inline PutTargetsResultEntry& WithErrorMessage(Aws::String&& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message explaining why the target submission failed on this
     * entry.</p>
     */
    inline PutTargetsResultEntry& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:
    Aws::String m_targetId;
    bool m_targetIdHasBeenSet;
    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet;
    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
