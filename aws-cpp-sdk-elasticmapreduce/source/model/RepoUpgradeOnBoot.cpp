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

#include <aws/elasticmapreduce/model/RepoUpgradeOnBoot.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace RepoUpgradeOnBootMapper
      {

        static const int SECURITY_HASH = HashingUtils::HashString("SECURITY");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        RepoUpgradeOnBoot GetRepoUpgradeOnBootForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SECURITY_HASH)
          {
            return RepoUpgradeOnBoot::SECURITY;
          }
          else if (hashCode == NONE_HASH)
          {
            return RepoUpgradeOnBoot::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RepoUpgradeOnBoot>(hashCode);
          }

          return RepoUpgradeOnBoot::NOT_SET;
        }

        Aws::String GetNameForRepoUpgradeOnBoot(RepoUpgradeOnBoot enumValue)
        {
          switch(enumValue)
          {
          case RepoUpgradeOnBoot::SECURITY:
            return "SECURITY";
          case RepoUpgradeOnBoot::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace RepoUpgradeOnBootMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
