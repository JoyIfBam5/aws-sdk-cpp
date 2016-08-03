/*
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
#include <aws/s3/model/DeleteObjectsRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

DeleteObjectsRequest::DeleteObjectsRequest() : 
    m_bucketHasBeenSet(false),
    m_deleteHasBeenSet(false),
    m_mFAHasBeenSet(false),
    m_requestPayerHasBeenSet(false)
{
}

Aws::String DeleteObjectsRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("Delete");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://s3.amazonaws.com/doc/2006-03-01/");

  m_delete.AddToNode(parentNode);
  if(parentNode.HasChildren())
  {
    return payloadDoc.ConvertToString();
  }

  return "";
}


Aws::Http::HeaderValueCollection DeleteObjectsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_mFAHasBeenSet)
  {
    ss << m_mFA;
    headers.insert(Aws::Http::HeaderValuePair("x-amz-mfa", ss.str()));
    ss.str("");
  }

  if(m_requestPayerHasBeenSet)
  {
    headers.insert(Aws::Http::HeaderValuePair("x-amz-request-payer", RequestPayerMapper::GetNameForRequestPayer(m_requestPayer)));
  }

  return headers;
}
