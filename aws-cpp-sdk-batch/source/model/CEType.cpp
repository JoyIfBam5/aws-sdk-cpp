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

#include <aws/batch/model/CEType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Batch
  {
    namespace Model
    {
      namespace CETypeMapper
      {

        static const int MANAGED_HASH = HashingUtils::HashString("MANAGED");
        static const int UNMANAGED_HASH = HashingUtils::HashString("UNMANAGED");


        CEType GetCETypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MANAGED_HASH)
          {
            return CEType::MANAGED;
          }
          else if (hashCode == UNMANAGED_HASH)
          {
            return CEType::UNMANAGED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CEType>(hashCode);
          }

          return CEType::NOT_SET;
        }

        Aws::String GetNameForCEType(CEType enumValue)
        {
          switch(enumValue)
          {
          case CEType::MANAGED:
            return "MANAGED";
          case CEType::UNMANAGED:
            return "UNMANAGED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace CETypeMapper
    } // namespace Model
  } // namespace Batch
} // namespace Aws
