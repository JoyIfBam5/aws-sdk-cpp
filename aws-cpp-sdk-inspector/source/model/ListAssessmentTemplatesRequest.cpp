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

#include <aws/inspector/model/ListAssessmentTemplatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListAssessmentTemplatesRequest::ListAssessmentTemplatesRequest() : 
    m_assessmentTargetArnsHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListAssessmentTemplatesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assessmentTargetArnsHasBeenSet)
  {
   Array<JsonValue> assessmentTargetArnsJsonList(m_assessmentTargetArns.size());
   for(unsigned assessmentTargetArnsIndex = 0; assessmentTargetArnsIndex < assessmentTargetArnsJsonList.GetLength(); ++assessmentTargetArnsIndex)
   {
     assessmentTargetArnsJsonList[assessmentTargetArnsIndex].AsString(m_assessmentTargetArns[assessmentTargetArnsIndex]);
   }
   payload.WithArray("assessmentTargetArns", std::move(assessmentTargetArnsJsonList));

  }

  if(m_filterHasBeenSet)
  {
   payload.WithObject("filter", m_filter.Jsonize());

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ListAssessmentTemplatesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.ListAssessmentTemplates"));
  return headers;

}




