﻿/*
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
#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/SslPolicy.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{
  /**
   * <p>Contains the output of DescribeSSLPolicies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeSSLPoliciesOutput">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API DescribeSSLPoliciesResult
  {
  public:
    DescribeSSLPoliciesResult();
    DescribeSSLPoliciesResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeSSLPoliciesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Information about the policies.</p>
     */
    inline const Aws::Vector<SslPolicy>& GetSslPolicies() const{ return m_sslPolicies; }

    /**
     * <p>Information about the policies.</p>
     */
    inline void SetSslPolicies(const Aws::Vector<SslPolicy>& value) { m_sslPolicies = value; }

    /**
     * <p>Information about the policies.</p>
     */
    inline void SetSslPolicies(Aws::Vector<SslPolicy>&& value) { m_sslPolicies = value; }

    /**
     * <p>Information about the policies.</p>
     */
    inline DescribeSSLPoliciesResult& WithSslPolicies(const Aws::Vector<SslPolicy>& value) { SetSslPolicies(value); return *this;}

    /**
     * <p>Information about the policies.</p>
     */
    inline DescribeSSLPoliciesResult& WithSslPolicies(Aws::Vector<SslPolicy>&& value) { SetSslPolicies(value); return *this;}

    /**
     * <p>Information about the policies.</p>
     */
    inline DescribeSSLPoliciesResult& AddSslPolicies(const SslPolicy& value) { m_sslPolicies.push_back(value); return *this; }

    /**
     * <p>Information about the policies.</p>
     */
    inline DescribeSSLPoliciesResult& AddSslPolicies(SslPolicy&& value) { m_sslPolicies.push_back(value); return *this; }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = value; }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline DescribeSSLPoliciesResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline DescribeSSLPoliciesResult& WithNextMarker(Aws::String&& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline DescribeSSLPoliciesResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeSSLPoliciesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeSSLPoliciesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<SslPolicy> m_sslPolicies;
    Aws::String m_nextMarker;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws