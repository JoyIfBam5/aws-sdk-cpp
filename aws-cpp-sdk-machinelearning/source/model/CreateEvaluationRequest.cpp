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

#include <aws/machinelearning/model/CreateEvaluationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MachineLearning::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEvaluationRequest::CreateEvaluationRequest() : 
    m_evaluationIdHasBeenSet(false),
    m_evaluationNameHasBeenSet(false),
    m_mLModelIdHasBeenSet(false),
    m_evaluationDataSourceIdHasBeenSet(false)
{
}

Aws::String CreateEvaluationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_evaluationIdHasBeenSet)
  {
   payload.WithString("EvaluationId", m_evaluationId);

  }

  if(m_evaluationNameHasBeenSet)
  {
   payload.WithString("EvaluationName", m_evaluationName);

  }

  if(m_mLModelIdHasBeenSet)
  {
   payload.WithString("MLModelId", m_mLModelId);

  }

  if(m_evaluationDataSourceIdHasBeenSet)
  {
   payload.WithString("EvaluationDataSourceId", m_evaluationDataSourceId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateEvaluationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonML_20141212.CreateEvaluation"));
  return headers;

}




