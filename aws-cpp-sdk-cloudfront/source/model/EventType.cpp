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

#include <aws/cloudfront/model/EventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFront
  {
    namespace Model
    {
      namespace EventTypeMapper
      {

        static const int viewer_request_HASH = HashingUtils::HashString("viewer-request");
        static const int viewer_response_HASH = HashingUtils::HashString("viewer-response");
        static const int origin_request_HASH = HashingUtils::HashString("origin-request");
        static const int origin_response_HASH = HashingUtils::HashString("origin-response");


        EventType GetEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == viewer_request_HASH)
          {
            return EventType::viewer_request;
          }
          else if (hashCode == viewer_response_HASH)
          {
            return EventType::viewer_response;
          }
          else if (hashCode == origin_request_HASH)
          {
            return EventType::origin_request;
          }
          else if (hashCode == origin_response_HASH)
          {
            return EventType::origin_response;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventType>(hashCode);
          }

          return EventType::NOT_SET;
        }

        Aws::String GetNameForEventType(EventType enumValue)
        {
          switch(enumValue)
          {
          case EventType::viewer_request:
            return "viewer-request";
          case EventType::viewer_response:
            return "viewer-response";
          case EventType::origin_request:
            return "origin-request";
          case EventType::origin_response:
            return "origin-response";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace EventTypeMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
