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

#include <aws/codecommit/model/PostCommentForPullRequestResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PostCommentForPullRequestResult::PostCommentForPullRequestResult()
{
}

PostCommentForPullRequestResult::PostCommentForPullRequestResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PostCommentForPullRequestResult& PostCommentForPullRequestResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

  }

  if(jsonValue.ValueExists("pullRequestId"))
  {
    m_pullRequestId = jsonValue.GetString("pullRequestId");

  }

  if(jsonValue.ValueExists("beforeCommitId"))
  {
    m_beforeCommitId = jsonValue.GetString("beforeCommitId");

  }

  if(jsonValue.ValueExists("afterCommitId"))
  {
    m_afterCommitId = jsonValue.GetString("afterCommitId");

  }

  if(jsonValue.ValueExists("beforeBlobId"))
  {
    m_beforeBlobId = jsonValue.GetString("beforeBlobId");

  }

  if(jsonValue.ValueExists("afterBlobId"))
  {
    m_afterBlobId = jsonValue.GetString("afterBlobId");

  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");

  }

  if(jsonValue.ValueExists("comment"))
  {
    m_comment = jsonValue.GetObject("comment");

  }



  return *this;
}
