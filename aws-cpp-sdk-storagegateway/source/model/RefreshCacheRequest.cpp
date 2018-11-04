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

#include <aws/storagegateway/model/RefreshCacheRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RefreshCacheRequest::RefreshCacheRequest() : 
    m_fileShareARNHasBeenSet(false),
    m_folderListHasBeenSet(false),
    m_recursive(false),
    m_recursiveHasBeenSet(false)
{
}

Aws::String RefreshCacheRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fileShareARNHasBeenSet)
  {
   payload.WithString("FileShareARN", m_fileShareARN);

  }

  if(m_folderListHasBeenSet)
  {
   Array<JsonValue> folderListJsonList(m_folderList.size());
   for(unsigned folderListIndex = 0; folderListIndex < folderListJsonList.GetLength(); ++folderListIndex)
   {
     folderListJsonList[folderListIndex].AsString(m_folderList[folderListIndex]);
   }
   payload.WithArray("FolderList", std::move(folderListJsonList));

  }

  if(m_recursiveHasBeenSet)
  {
   payload.WithBool("Recursive", m_recursive);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RefreshCacheRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.RefreshCache"));
  return headers;

}




