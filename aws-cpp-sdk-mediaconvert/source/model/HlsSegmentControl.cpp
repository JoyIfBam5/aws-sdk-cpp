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

#include <aws/mediaconvert/model/HlsSegmentControl.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace HlsSegmentControlMapper
      {

        static const int SINGLE_FILE_HASH = HashingUtils::HashString("SINGLE_FILE");
        static const int SEGMENTED_FILES_HASH = HashingUtils::HashString("SEGMENTED_FILES");


        HlsSegmentControl GetHlsSegmentControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_FILE_HASH)
          {
            return HlsSegmentControl::SINGLE_FILE;
          }
          else if (hashCode == SEGMENTED_FILES_HASH)
          {
            return HlsSegmentControl::SEGMENTED_FILES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsSegmentControl>(hashCode);
          }

          return HlsSegmentControl::NOT_SET;
        }

        Aws::String GetNameForHlsSegmentControl(HlsSegmentControl enumValue)
        {
          switch(enumValue)
          {
          case HlsSegmentControl::SINGLE_FILE:
            return "SINGLE_FILE";
          case HlsSegmentControl::SEGMENTED_FILES:
            return "SEGMENTED_FILES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace HlsSegmentControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
