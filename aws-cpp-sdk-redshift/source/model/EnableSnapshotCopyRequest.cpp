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

#include <aws/redshift/model/EnableSnapshotCopyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

EnableSnapshotCopyRequest::EnableSnapshotCopyRequest() : 
    m_clusterIdentifierHasBeenSet(false),
    m_destinationRegionHasBeenSet(false),
    m_retentionPeriod(0),
    m_retentionPeriodHasBeenSet(false),
    m_snapshotCopyGrantNameHasBeenSet(false)
{
}

Aws::String EnableSnapshotCopyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=EnableSnapshotCopy&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_destinationRegionHasBeenSet)
  {
    ss << "DestinationRegion=" << StringUtils::URLEncode(m_destinationRegion.c_str()) << "&";
  }

  if(m_retentionPeriodHasBeenSet)
  {
    ss << "RetentionPeriod=" << m_retentionPeriod << "&";
  }

  if(m_snapshotCopyGrantNameHasBeenSet)
  {
    ss << "SnapshotCopyGrantName=" << StringUtils::URLEncode(m_snapshotCopyGrantName.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  EnableSnapshotCopyRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
