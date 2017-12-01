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

#include <aws/cognito-idp/model/AdminSetUserMFAPreferenceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AdminSetUserMFAPreferenceRequest::AdminSetUserMFAPreferenceRequest() : 
    m_sMSMfaSettingsHasBeenSet(false),
    m_softwareTokenMfaSettingsHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_userPoolIdHasBeenSet(false)
{
}

Aws::String AdminSetUserMFAPreferenceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sMSMfaSettingsHasBeenSet)
  {
   payload.WithObject("SMSMfaSettings", m_sMSMfaSettings.Jsonize());

  }

  if(m_softwareTokenMfaSettingsHasBeenSet)
  {
   payload.WithObject("SoftwareTokenMfaSettings", m_softwareTokenMfaSettings.Jsonize());

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection AdminSetUserMFAPreferenceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.AdminSetUserMFAPreference"));
  return headers;

}




