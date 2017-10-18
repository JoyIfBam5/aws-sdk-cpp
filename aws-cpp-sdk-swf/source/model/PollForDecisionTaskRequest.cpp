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

#include <aws/swf/model/PollForDecisionTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PollForDecisionTaskRequest::PollForDecisionTaskRequest() : 
    m_domainHasBeenSet(false),
    m_taskListHasBeenSet(false),
    m_identityHasBeenSet(false),
    m_nextPageTokenHasBeenSet(false),
    m_maximumPageSize(0),
    m_maximumPageSizeHasBeenSet(false),
    m_reverseOrder(false),
    m_reverseOrderHasBeenSet(false)
{
}

Aws::String PollForDecisionTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", m_domain);

  }

  if(m_taskListHasBeenSet)
  {
   payload.WithObject("taskList", m_taskList.Jsonize());

  }

  if(m_identityHasBeenSet)
  {
   payload.WithString("identity", m_identity);

  }

  if(m_nextPageTokenHasBeenSet)
  {
   payload.WithString("nextPageToken", m_nextPageToken);

  }

  if(m_maximumPageSizeHasBeenSet)
  {
   payload.WithInteger("maximumPageSize", m_maximumPageSize);

  }

  if(m_reverseOrderHasBeenSet)
  {
   payload.WithBool("reverseOrder", m_reverseOrder);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection PollForDecisionTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SimpleWorkflowService.PollForDecisionTask"));
  return headers;

}




