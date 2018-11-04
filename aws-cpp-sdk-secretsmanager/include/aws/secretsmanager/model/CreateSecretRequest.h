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

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/secretsmanager/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

  /**
   */
  class AWS_SECRETSMANAGER_API CreateSecretRequest : public SecretsManagerRequest
  {
  public:
    CreateSecretRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSecret"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the friendly name of the new secret.</p> <p>The secret name must be
     * ASCII letters, digits, or the following characters : /_+=.@-</p> <note> <p>Don't
     * end your secret name with a hyphen followed by six characters. If you do so, you
     * risk confusion and unexpected results when searching for a secret by partial
     * ARN. This is because Secrets Manager automatically adds a hyphen and six random
     * characters at the end of the ARN.</p> </note>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Specifies the friendly name of the new secret.</p> <p>The secret name must be
     * ASCII letters, digits, or the following characters : /_+=.@-</p> <note> <p>Don't
     * end your secret name with a hyphen followed by six characters. If you do so, you
     * risk confusion and unexpected results when searching for a secret by partial
     * ARN. This is because Secrets Manager automatically adds a hyphen and six random
     * characters at the end of the ARN.</p> </note>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies the friendly name of the new secret.</p> <p>The secret name must be
     * ASCII letters, digits, or the following characters : /_+=.@-</p> <note> <p>Don't
     * end your secret name with a hyphen followed by six characters. If you do so, you
     * risk confusion and unexpected results when searching for a secret by partial
     * ARN. This is because Secrets Manager automatically adds a hyphen and six random
     * characters at the end of the ARN.</p> </note>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specifies the friendly name of the new secret.</p> <p>The secret name must be
     * ASCII letters, digits, or the following characters : /_+=.@-</p> <note> <p>Don't
     * end your secret name with a hyphen followed by six characters. If you do so, you
     * risk confusion and unexpected results when searching for a secret by partial
     * ARN. This is because Secrets Manager automatically adds a hyphen and six random
     * characters at the end of the ARN.</p> </note>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Specifies the friendly name of the new secret.</p> <p>The secret name must be
     * ASCII letters, digits, or the following characters : /_+=.@-</p> <note> <p>Don't
     * end your secret name with a hyphen followed by six characters. If you do so, you
     * risk confusion and unexpected results when searching for a secret by partial
     * ARN. This is because Secrets Manager automatically adds a hyphen and six random
     * characters at the end of the ARN.</p> </note>
     */
    inline CreateSecretRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Specifies the friendly name of the new secret.</p> <p>The secret name must be
     * ASCII letters, digits, or the following characters : /_+=.@-</p> <note> <p>Don't
     * end your secret name with a hyphen followed by six characters. If you do so, you
     * risk confusion and unexpected results when searching for a secret by partial
     * ARN. This is because Secrets Manager automatically adds a hyphen and six random
     * characters at the end of the ARN.</p> </note>
     */
    inline CreateSecretRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Specifies the friendly name of the new secret.</p> <p>The secret name must be
     * ASCII letters, digits, or the following characters : /_+=.@-</p> <note> <p>Don't
     * end your secret name with a hyphen followed by six characters. If you do so, you
     * risk confusion and unexpected results when searching for a secret by partial
     * ARN. This is because Secrets Manager automatically adds a hyphen and six random
     * characters at the end of the ARN.</p> </note>
     */
    inline CreateSecretRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>(Optional) If you include <code>SecretString</code> or
     * <code>SecretBinary</code>, then an initial version is created as part of the
     * secret, and this parameter specifies a unique identifier for the new version.
     * </p> <note> <p>If you use the AWS CLI or one of the AWS SDK to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes it as the value for this parameter in the
     * request. If you don't use the SDK and instead generate a raw HTTP request to the
     * Secrets Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> yourself for the new version and include that
     * value in the request.</p> </note> <p>This value helps ensure idempotency.
     * Secrets Manager uses this value to prevent the accidental creation of duplicate
     * versions if there are failures and retries during a rotation. We recommend that
     * you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness of your versions within the specified secret. </p>
     * <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't already
     * associated with a version of the secret then a new version of the secret is
     * created. </p> </li> <li> <p>If a version with this value already exists and that
     * version's <code>SecretString</code> and <code>SecretBinary</code> values are the
     * same as those in the request, then the request is ignored (the operation is
     * idempotent).</p> </li> <li> <p>If a version with this value already exists and
     * that version's <code>SecretString</code> and <code>SecretBinary</code> values
     * are different from those in the request then the request fails because you
     * cannot modify an existing version. Instead, use <a>PutSecretValue</a> to create
     * a new version.</p> </li> </ul> <p>This value becomes the <code>VersionId</code>
     * of the new version.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>(Optional) If you include <code>SecretString</code> or
     * <code>SecretBinary</code>, then an initial version is created as part of the
     * secret, and this parameter specifies a unique identifier for the new version.
     * </p> <note> <p>If you use the AWS CLI or one of the AWS SDK to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes it as the value for this parameter in the
     * request. If you don't use the SDK and instead generate a raw HTTP request to the
     * Secrets Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> yourself for the new version and include that
     * value in the request.</p> </note> <p>This value helps ensure idempotency.
     * Secrets Manager uses this value to prevent the accidental creation of duplicate
     * versions if there are failures and retries during a rotation. We recommend that
     * you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness of your versions within the specified secret. </p>
     * <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't already
     * associated with a version of the secret then a new version of the secret is
     * created. </p> </li> <li> <p>If a version with this value already exists and that
     * version's <code>SecretString</code> and <code>SecretBinary</code> values are the
     * same as those in the request, then the request is ignored (the operation is
     * idempotent).</p> </li> <li> <p>If a version with this value already exists and
     * that version's <code>SecretString</code> and <code>SecretBinary</code> values
     * are different from those in the request then the request fails because you
     * cannot modify an existing version. Instead, use <a>PutSecretValue</a> to create
     * a new version.</p> </li> </ul> <p>This value becomes the <code>VersionId</code>
     * of the new version.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>(Optional) If you include <code>SecretString</code> or
     * <code>SecretBinary</code>, then an initial version is created as part of the
     * secret, and this parameter specifies a unique identifier for the new version.
     * </p> <note> <p>If you use the AWS CLI or one of the AWS SDK to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes it as the value for this parameter in the
     * request. If you don't use the SDK and instead generate a raw HTTP request to the
     * Secrets Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> yourself for the new version and include that
     * value in the request.</p> </note> <p>This value helps ensure idempotency.
     * Secrets Manager uses this value to prevent the accidental creation of duplicate
     * versions if there are failures and retries during a rotation. We recommend that
     * you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness of your versions within the specified secret. </p>
     * <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't already
     * associated with a version of the secret then a new version of the secret is
     * created. </p> </li> <li> <p>If a version with this value already exists and that
     * version's <code>SecretString</code> and <code>SecretBinary</code> values are the
     * same as those in the request, then the request is ignored (the operation is
     * idempotent).</p> </li> <li> <p>If a version with this value already exists and
     * that version's <code>SecretString</code> and <code>SecretBinary</code> values
     * are different from those in the request then the request fails because you
     * cannot modify an existing version. Instead, use <a>PutSecretValue</a> to create
     * a new version.</p> </li> </ul> <p>This value becomes the <code>VersionId</code>
     * of the new version.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>(Optional) If you include <code>SecretString</code> or
     * <code>SecretBinary</code>, then an initial version is created as part of the
     * secret, and this parameter specifies a unique identifier for the new version.
     * </p> <note> <p>If you use the AWS CLI or one of the AWS SDK to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes it as the value for this parameter in the
     * request. If you don't use the SDK and instead generate a raw HTTP request to the
     * Secrets Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> yourself for the new version and include that
     * value in the request.</p> </note> <p>This value helps ensure idempotency.
     * Secrets Manager uses this value to prevent the accidental creation of duplicate
     * versions if there are failures and retries during a rotation. We recommend that
     * you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness of your versions within the specified secret. </p>
     * <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't already
     * associated with a version of the secret then a new version of the secret is
     * created. </p> </li> <li> <p>If a version with this value already exists and that
     * version's <code>SecretString</code> and <code>SecretBinary</code> values are the
     * same as those in the request, then the request is ignored (the operation is
     * idempotent).</p> </li> <li> <p>If a version with this value already exists and
     * that version's <code>SecretString</code> and <code>SecretBinary</code> values
     * are different from those in the request then the request fails because you
     * cannot modify an existing version. Instead, use <a>PutSecretValue</a> to create
     * a new version.</p> </li> </ul> <p>This value becomes the <code>VersionId</code>
     * of the new version.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>(Optional) If you include <code>SecretString</code> or
     * <code>SecretBinary</code>, then an initial version is created as part of the
     * secret, and this parameter specifies a unique identifier for the new version.
     * </p> <note> <p>If you use the AWS CLI or one of the AWS SDK to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes it as the value for this parameter in the
     * request. If you don't use the SDK and instead generate a raw HTTP request to the
     * Secrets Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> yourself for the new version and include that
     * value in the request.</p> </note> <p>This value helps ensure idempotency.
     * Secrets Manager uses this value to prevent the accidental creation of duplicate
     * versions if there are failures and retries during a rotation. We recommend that
     * you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness of your versions within the specified secret. </p>
     * <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't already
     * associated with a version of the secret then a new version of the secret is
     * created. </p> </li> <li> <p>If a version with this value already exists and that
     * version's <code>SecretString</code> and <code>SecretBinary</code> values are the
     * same as those in the request, then the request is ignored (the operation is
     * idempotent).</p> </li> <li> <p>If a version with this value already exists and
     * that version's <code>SecretString</code> and <code>SecretBinary</code> values
     * are different from those in the request then the request fails because you
     * cannot modify an existing version. Instead, use <a>PutSecretValue</a> to create
     * a new version.</p> </li> </ul> <p>This value becomes the <code>VersionId</code>
     * of the new version.</p>
     */
    inline CreateSecretRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>(Optional) If you include <code>SecretString</code> or
     * <code>SecretBinary</code>, then an initial version is created as part of the
     * secret, and this parameter specifies a unique identifier for the new version.
     * </p> <note> <p>If you use the AWS CLI or one of the AWS SDK to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes it as the value for this parameter in the
     * request. If you don't use the SDK and instead generate a raw HTTP request to the
     * Secrets Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> yourself for the new version and include that
     * value in the request.</p> </note> <p>This value helps ensure idempotency.
     * Secrets Manager uses this value to prevent the accidental creation of duplicate
     * versions if there are failures and retries during a rotation. We recommend that
     * you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness of your versions within the specified secret. </p>
     * <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't already
     * associated with a version of the secret then a new version of the secret is
     * created. </p> </li> <li> <p>If a version with this value already exists and that
     * version's <code>SecretString</code> and <code>SecretBinary</code> values are the
     * same as those in the request, then the request is ignored (the operation is
     * idempotent).</p> </li> <li> <p>If a version with this value already exists and
     * that version's <code>SecretString</code> and <code>SecretBinary</code> values
     * are different from those in the request then the request fails because you
     * cannot modify an existing version. Instead, use <a>PutSecretValue</a> to create
     * a new version.</p> </li> </ul> <p>This value becomes the <code>VersionId</code>
     * of the new version.</p>
     */
    inline CreateSecretRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) If you include <code>SecretString</code> or
     * <code>SecretBinary</code>, then an initial version is created as part of the
     * secret, and this parameter specifies a unique identifier for the new version.
     * </p> <note> <p>If you use the AWS CLI or one of the AWS SDK to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes it as the value for this parameter in the
     * request. If you don't use the SDK and instead generate a raw HTTP request to the
     * Secrets Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> yourself for the new version and include that
     * value in the request.</p> </note> <p>This value helps ensure idempotency.
     * Secrets Manager uses this value to prevent the accidental creation of duplicate
     * versions if there are failures and retries during a rotation. We recommend that
     * you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness of your versions within the specified secret. </p>
     * <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't already
     * associated with a version of the secret then a new version of the secret is
     * created. </p> </li> <li> <p>If a version with this value already exists and that
     * version's <code>SecretString</code> and <code>SecretBinary</code> values are the
     * same as those in the request, then the request is ignored (the operation is
     * idempotent).</p> </li> <li> <p>If a version with this value already exists and
     * that version's <code>SecretString</code> and <code>SecretBinary</code> values
     * are different from those in the request then the request fails because you
     * cannot modify an existing version. Instead, use <a>PutSecretValue</a> to create
     * a new version.</p> </li> </ul> <p>This value becomes the <code>VersionId</code>
     * of the new version.</p>
     */
    inline CreateSecretRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>(Optional) Specifies a user-provided description of the secret.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>(Optional) Specifies a user-provided description of the secret.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>(Optional) Specifies a user-provided description of the secret.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>(Optional) Specifies a user-provided description of the secret.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>(Optional) Specifies a user-provided description of the secret.</p>
     */
    inline CreateSecretRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>(Optional) Specifies a user-provided description of the secret.</p>
     */
    inline CreateSecretRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>(Optional) Specifies a user-provided description of the secret.</p>
     */
    inline CreateSecretRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>(Optional) Specifies the ARN, Key ID, or alias of the AWS KMS customer master
     * key (CMK) to be used to encrypt the <code>SecretString</code> or
     * <code>SecretBinary</code> values in the versions stored in this secret.</p>
     * <p>You can specify any of the supported ways to identify a AWS KMS key ID. If
     * you need to reference a CMK in a different account, you can use only the key ARN
     * or the alias ARN.</p> <p>If you don't specify this value, then Secrets Manager
     * defaults to using the AWS account's default CMK (the one named
     * <code>aws/secretsmanager</code>). If a AWS KMS CMK with that name doesn't yet
     * exist, then Secrets Manager creates it for you automatically the first time it
     * needs to encrypt a version's <code>SecretString</code> or
     * <code>SecretBinary</code> fields.</p> <important> <p>You can use the account's
     * default CMK to encrypt and decrypt only if you call this operation using
     * credentials from the same account that owns the secret. If the secret is in a
     * different account, then you must create a custom CMK and specify the ARN in this
     * field. </p> </important>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>(Optional) Specifies the ARN, Key ID, or alias of the AWS KMS customer master
     * key (CMK) to be used to encrypt the <code>SecretString</code> or
     * <code>SecretBinary</code> values in the versions stored in this secret.</p>
     * <p>You can specify any of the supported ways to identify a AWS KMS key ID. If
     * you need to reference a CMK in a different account, you can use only the key ARN
     * or the alias ARN.</p> <p>If you don't specify this value, then Secrets Manager
     * defaults to using the AWS account's default CMK (the one named
     * <code>aws/secretsmanager</code>). If a AWS KMS CMK with that name doesn't yet
     * exist, then Secrets Manager creates it for you automatically the first time it
     * needs to encrypt a version's <code>SecretString</code> or
     * <code>SecretBinary</code> fields.</p> <important> <p>You can use the account's
     * default CMK to encrypt and decrypt only if you call this operation using
     * credentials from the same account that owns the secret. If the secret is in a
     * different account, then you must create a custom CMK and specify the ARN in this
     * field. </p> </important>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>(Optional) Specifies the ARN, Key ID, or alias of the AWS KMS customer master
     * key (CMK) to be used to encrypt the <code>SecretString</code> or
     * <code>SecretBinary</code> values in the versions stored in this secret.</p>
     * <p>You can specify any of the supported ways to identify a AWS KMS key ID. If
     * you need to reference a CMK in a different account, you can use only the key ARN
     * or the alias ARN.</p> <p>If you don't specify this value, then Secrets Manager
     * defaults to using the AWS account's default CMK (the one named
     * <code>aws/secretsmanager</code>). If a AWS KMS CMK with that name doesn't yet
     * exist, then Secrets Manager creates it for you automatically the first time it
     * needs to encrypt a version's <code>SecretString</code> or
     * <code>SecretBinary</code> fields.</p> <important> <p>You can use the account's
     * default CMK to encrypt and decrypt only if you call this operation using
     * credentials from the same account that owns the secret. If the secret is in a
     * different account, then you must create a custom CMK and specify the ARN in this
     * field. </p> </important>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>(Optional) Specifies the ARN, Key ID, or alias of the AWS KMS customer master
     * key (CMK) to be used to encrypt the <code>SecretString</code> or
     * <code>SecretBinary</code> values in the versions stored in this secret.</p>
     * <p>You can specify any of the supported ways to identify a AWS KMS key ID. If
     * you need to reference a CMK in a different account, you can use only the key ARN
     * or the alias ARN.</p> <p>If you don't specify this value, then Secrets Manager
     * defaults to using the AWS account's default CMK (the one named
     * <code>aws/secretsmanager</code>). If a AWS KMS CMK with that name doesn't yet
     * exist, then Secrets Manager creates it for you automatically the first time it
     * needs to encrypt a version's <code>SecretString</code> or
     * <code>SecretBinary</code> fields.</p> <important> <p>You can use the account's
     * default CMK to encrypt and decrypt only if you call this operation using
     * credentials from the same account that owns the secret. If the secret is in a
     * different account, then you must create a custom CMK and specify the ARN in this
     * field. </p> </important>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>(Optional) Specifies the ARN, Key ID, or alias of the AWS KMS customer master
     * key (CMK) to be used to encrypt the <code>SecretString</code> or
     * <code>SecretBinary</code> values in the versions stored in this secret.</p>
     * <p>You can specify any of the supported ways to identify a AWS KMS key ID. If
     * you need to reference a CMK in a different account, you can use only the key ARN
     * or the alias ARN.</p> <p>If you don't specify this value, then Secrets Manager
     * defaults to using the AWS account's default CMK (the one named
     * <code>aws/secretsmanager</code>). If a AWS KMS CMK with that name doesn't yet
     * exist, then Secrets Manager creates it for you automatically the first time it
     * needs to encrypt a version's <code>SecretString</code> or
     * <code>SecretBinary</code> fields.</p> <important> <p>You can use the account's
     * default CMK to encrypt and decrypt only if you call this operation using
     * credentials from the same account that owns the secret. If the secret is in a
     * different account, then you must create a custom CMK and specify the ARN in this
     * field. </p> </important>
     */
    inline CreateSecretRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>(Optional) Specifies the ARN, Key ID, or alias of the AWS KMS customer master
     * key (CMK) to be used to encrypt the <code>SecretString</code> or
     * <code>SecretBinary</code> values in the versions stored in this secret.</p>
     * <p>You can specify any of the supported ways to identify a AWS KMS key ID. If
     * you need to reference a CMK in a different account, you can use only the key ARN
     * or the alias ARN.</p> <p>If you don't specify this value, then Secrets Manager
     * defaults to using the AWS account's default CMK (the one named
     * <code>aws/secretsmanager</code>). If a AWS KMS CMK with that name doesn't yet
     * exist, then Secrets Manager creates it for you automatically the first time it
     * needs to encrypt a version's <code>SecretString</code> or
     * <code>SecretBinary</code> fields.</p> <important> <p>You can use the account's
     * default CMK to encrypt and decrypt only if you call this operation using
     * credentials from the same account that owns the secret. If the secret is in a
     * different account, then you must create a custom CMK and specify the ARN in this
     * field. </p> </important>
     */
    inline CreateSecretRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>(Optional) Specifies the ARN, Key ID, or alias of the AWS KMS customer master
     * key (CMK) to be used to encrypt the <code>SecretString</code> or
     * <code>SecretBinary</code> values in the versions stored in this secret.</p>
     * <p>You can specify any of the supported ways to identify a AWS KMS key ID. If
     * you need to reference a CMK in a different account, you can use only the key ARN
     * or the alias ARN.</p> <p>If you don't specify this value, then Secrets Manager
     * defaults to using the AWS account's default CMK (the one named
     * <code>aws/secretsmanager</code>). If a AWS KMS CMK with that name doesn't yet
     * exist, then Secrets Manager creates it for you automatically the first time it
     * needs to encrypt a version's <code>SecretString</code> or
     * <code>SecretBinary</code> fields.</p> <important> <p>You can use the account's
     * default CMK to encrypt and decrypt only if you call this operation using
     * credentials from the same account that owns the secret. If the secret is in a
     * different account, then you must create a custom CMK and specify the ARN in this
     * field. </p> </important>
     */
    inline CreateSecretRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>(Optional) Specifies binary data that you want to encrypt and store in the
     * new version of the secret. To use this parameter in the command-line tools, we
     * recommend that you store your binary data in a file and then use the appropriate
     * technique for your tool to pass the contents of the file as a parameter.</p>
     * <p>Either <code>SecretString</code> or <code>SecretBinary</code> must have a
     * value, but not both. They cannot both be empty.</p> <p>This parameter is not
     * available using the Secrets Manager console. It can be accessed only by using
     * the AWS CLI or one of the AWS SDKs.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetSecretBinary() const{ return m_secretBinary; }

    /**
     * <p>(Optional) Specifies binary data that you want to encrypt and store in the
     * new version of the secret. To use this parameter in the command-line tools, we
     * recommend that you store your binary data in a file and then use the appropriate
     * technique for your tool to pass the contents of the file as a parameter.</p>
     * <p>Either <code>SecretString</code> or <code>SecretBinary</code> must have a
     * value, but not both. They cannot both be empty.</p> <p>This parameter is not
     * available using the Secrets Manager console. It can be accessed only by using
     * the AWS CLI or one of the AWS SDKs.</p>
     */
    inline void SetSecretBinary(const Aws::Utils::ByteBuffer& value) { m_secretBinaryHasBeenSet = true; m_secretBinary = value; }

    /**
     * <p>(Optional) Specifies binary data that you want to encrypt and store in the
     * new version of the secret. To use this parameter in the command-line tools, we
     * recommend that you store your binary data in a file and then use the appropriate
     * technique for your tool to pass the contents of the file as a parameter.</p>
     * <p>Either <code>SecretString</code> or <code>SecretBinary</code> must have a
     * value, but not both. They cannot both be empty.</p> <p>This parameter is not
     * available using the Secrets Manager console. It can be accessed only by using
     * the AWS CLI or one of the AWS SDKs.</p>
     */
    inline void SetSecretBinary(Aws::Utils::ByteBuffer&& value) { m_secretBinaryHasBeenSet = true; m_secretBinary = std::move(value); }

    /**
     * <p>(Optional) Specifies binary data that you want to encrypt and store in the
     * new version of the secret. To use this parameter in the command-line tools, we
     * recommend that you store your binary data in a file and then use the appropriate
     * technique for your tool to pass the contents of the file as a parameter.</p>
     * <p>Either <code>SecretString</code> or <code>SecretBinary</code> must have a
     * value, but not both. They cannot both be empty.</p> <p>This parameter is not
     * available using the Secrets Manager console. It can be accessed only by using
     * the AWS CLI or one of the AWS SDKs.</p>
     */
    inline CreateSecretRequest& WithSecretBinary(const Aws::Utils::ByteBuffer& value) { SetSecretBinary(value); return *this;}

    /**
     * <p>(Optional) Specifies binary data that you want to encrypt and store in the
     * new version of the secret. To use this parameter in the command-line tools, we
     * recommend that you store your binary data in a file and then use the appropriate
     * technique for your tool to pass the contents of the file as a parameter.</p>
     * <p>Either <code>SecretString</code> or <code>SecretBinary</code> must have a
     * value, but not both. They cannot both be empty.</p> <p>This parameter is not
     * available using the Secrets Manager console. It can be accessed only by using
     * the AWS CLI or one of the AWS SDKs.</p>
     */
    inline CreateSecretRequest& WithSecretBinary(Aws::Utils::ByteBuffer&& value) { SetSecretBinary(std::move(value)); return *this;}


    /**
     * <p>(Optional) Specifies text data that you want to encrypt and store in this new
     * version of the secret.</p> <p>Either <code>SecretString</code> or
     * <code>SecretBinary</code> must have a value, but not both. They cannot both be
     * empty.</p> <p>If you create a secret by using the Secrets Manager console then
     * Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that the Lambda rotation
     * function knows how to parse.</p> <p>For storing multiple values, we recommend
     * that you use a JSON text string argument and specify key/value pairs. For
     * information on how to format a JSON parameter for the various command line tool
     * environments, see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. For example:</p> <p>
     * <code>[{"username":"bob"},{"password":"abc123xyz456"}]</code> </p> <p>If your
     * command-line tool or SDK requires quotation marks around the parameter, you
     * should use single quotes to avoid confusion with the double quotes required in
     * the JSON text. </p>
     */
    inline const Aws::String& GetSecretString() const{ return m_secretString; }

    /**
     * <p>(Optional) Specifies text data that you want to encrypt and store in this new
     * version of the secret.</p> <p>Either <code>SecretString</code> or
     * <code>SecretBinary</code> must have a value, but not both. They cannot both be
     * empty.</p> <p>If you create a secret by using the Secrets Manager console then
     * Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that the Lambda rotation
     * function knows how to parse.</p> <p>For storing multiple values, we recommend
     * that you use a JSON text string argument and specify key/value pairs. For
     * information on how to format a JSON parameter for the various command line tool
     * environments, see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. For example:</p> <p>
     * <code>[{"username":"bob"},{"password":"abc123xyz456"}]</code> </p> <p>If your
     * command-line tool or SDK requires quotation marks around the parameter, you
     * should use single quotes to avoid confusion with the double quotes required in
     * the JSON text. </p>
     */
    inline void SetSecretString(const Aws::String& value) { m_secretStringHasBeenSet = true; m_secretString = value; }

    /**
     * <p>(Optional) Specifies text data that you want to encrypt and store in this new
     * version of the secret.</p> <p>Either <code>SecretString</code> or
     * <code>SecretBinary</code> must have a value, but not both. They cannot both be
     * empty.</p> <p>If you create a secret by using the Secrets Manager console then
     * Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that the Lambda rotation
     * function knows how to parse.</p> <p>For storing multiple values, we recommend
     * that you use a JSON text string argument and specify key/value pairs. For
     * information on how to format a JSON parameter for the various command line tool
     * environments, see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. For example:</p> <p>
     * <code>[{"username":"bob"},{"password":"abc123xyz456"}]</code> </p> <p>If your
     * command-line tool or SDK requires quotation marks around the parameter, you
     * should use single quotes to avoid confusion with the double quotes required in
     * the JSON text. </p>
     */
    inline void SetSecretString(Aws::String&& value) { m_secretStringHasBeenSet = true; m_secretString = std::move(value); }

    /**
     * <p>(Optional) Specifies text data that you want to encrypt and store in this new
     * version of the secret.</p> <p>Either <code>SecretString</code> or
     * <code>SecretBinary</code> must have a value, but not both. They cannot both be
     * empty.</p> <p>If you create a secret by using the Secrets Manager console then
     * Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that the Lambda rotation
     * function knows how to parse.</p> <p>For storing multiple values, we recommend
     * that you use a JSON text string argument and specify key/value pairs. For
     * information on how to format a JSON parameter for the various command line tool
     * environments, see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. For example:</p> <p>
     * <code>[{"username":"bob"},{"password":"abc123xyz456"}]</code> </p> <p>If your
     * command-line tool or SDK requires quotation marks around the parameter, you
     * should use single quotes to avoid confusion with the double quotes required in
     * the JSON text. </p>
     */
    inline void SetSecretString(const char* value) { m_secretStringHasBeenSet = true; m_secretString.assign(value); }

    /**
     * <p>(Optional) Specifies text data that you want to encrypt and store in this new
     * version of the secret.</p> <p>Either <code>SecretString</code> or
     * <code>SecretBinary</code> must have a value, but not both. They cannot both be
     * empty.</p> <p>If you create a secret by using the Secrets Manager console then
     * Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that the Lambda rotation
     * function knows how to parse.</p> <p>For storing multiple values, we recommend
     * that you use a JSON text string argument and specify key/value pairs. For
     * information on how to format a JSON parameter for the various command line tool
     * environments, see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. For example:</p> <p>
     * <code>[{"username":"bob"},{"password":"abc123xyz456"}]</code> </p> <p>If your
     * command-line tool or SDK requires quotation marks around the parameter, you
     * should use single quotes to avoid confusion with the double quotes required in
     * the JSON text. </p>
     */
    inline CreateSecretRequest& WithSecretString(const Aws::String& value) { SetSecretString(value); return *this;}

    /**
     * <p>(Optional) Specifies text data that you want to encrypt and store in this new
     * version of the secret.</p> <p>Either <code>SecretString</code> or
     * <code>SecretBinary</code> must have a value, but not both. They cannot both be
     * empty.</p> <p>If you create a secret by using the Secrets Manager console then
     * Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that the Lambda rotation
     * function knows how to parse.</p> <p>For storing multiple values, we recommend
     * that you use a JSON text string argument and specify key/value pairs. For
     * information on how to format a JSON parameter for the various command line tool
     * environments, see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. For example:</p> <p>
     * <code>[{"username":"bob"},{"password":"abc123xyz456"}]</code> </p> <p>If your
     * command-line tool or SDK requires quotation marks around the parameter, you
     * should use single quotes to avoid confusion with the double quotes required in
     * the JSON text. </p>
     */
    inline CreateSecretRequest& WithSecretString(Aws::String&& value) { SetSecretString(std::move(value)); return *this;}

    /**
     * <p>(Optional) Specifies text data that you want to encrypt and store in this new
     * version of the secret.</p> <p>Either <code>SecretString</code> or
     * <code>SecretBinary</code> must have a value, but not both. They cannot both be
     * empty.</p> <p>If you create a secret by using the Secrets Manager console then
     * Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that the Lambda rotation
     * function knows how to parse.</p> <p>For storing multiple values, we recommend
     * that you use a JSON text string argument and specify key/value pairs. For
     * information on how to format a JSON parameter for the various command line tool
     * environments, see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. For example:</p> <p>
     * <code>[{"username":"bob"},{"password":"abc123xyz456"}]</code> </p> <p>If your
     * command-line tool or SDK requires quotation marks around the parameter, you
     * should use single quotes to avoid confusion with the double quotes required in
     * the JSON text. </p>
     */
    inline CreateSecretRequest& WithSecretString(const char* value) { SetSecretString(value); return *this;}


    /**
     * <p>(Optional) Specifies a list of user-defined tags that are attached to the
     * secret. Each tag is a "Key" and "Value" pair of strings. This operation only
     * appends tags to the existing list of tags. To remove tags, you must use
     * <a>UntagResource</a>.</p> <important> <ul> <li> <p>Secrets Manager tag key names
     * are case sensitive. A tag with the key "ABC" is a different tag from one with
     * key "abc".</p> </li> <li> <p>If you check tags in IAM policy
     * <code>Condition</code> elements as part of your security strategy, then adding
     * or removing a tag can change permissions. If the successful completion of this
     * operation would result in you losing your permissions for this secret, then this
     * operation is blocked and returns an <code>Access Denied</code> error.</p> </li>
     * </ul> </important> <p>This parameter requires a JSON text string argument. For
     * information on how to format a JSON parameter for the various command line tool
     * environments, see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. For example:</p> <p>
     * <code>[{"Key":"CostCenter","Value":"12345"},{"Key":"environment","Value":"production"}]</code>
     * </p> <p>If your command-line tool or SDK requires quotation marks around the
     * parameter, you should use single quotes to avoid confusion with the double
     * quotes required in the JSON text. </p> <p>The following basic restrictions apply
     * to tags:</p> <ul> <li> <p>Maximum number of tags per secret—50</p> </li> <li>
     * <p>Maximum key length—127 Unicode characters in UTF-8</p> </li> <li> <p>Maximum
     * value length—255 Unicode characters in UTF-8</p> </li> <li> <p>Tag keys and
     * values are case sensitive.</p> </li> <li> <p>Do not use the <code>aws:</code>
     * prefix in your tag names or values because it is reserved for AWS use. You can't
     * edit or delete tag names or values with this prefix. Tags with this prefix do
     * not count against your tags per secret limit.</p> </li> <li> <p>If your tagging
     * schema will be used across multiple services and resources, remember that other
     * services might have restrictions on allowed characters. Generally allowed
     * characters are: letters, spaces, and numbers representable in UTF-8, plus the
     * following special characters: + - = . _ : / @.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>(Optional) Specifies a list of user-defined tags that are attached to the
     * secret. Each tag is a "Key" and "Value" pair of strings. This operation only
     * appends tags to the existing list of tags. To remove tags, you must use
     * <a>UntagResource</a>.</p> <important> <ul> <li> <p>Secrets Manager tag key names
     * are case sensitive. A tag with the key "ABC" is a different tag from one with
     * key "abc".</p> </li> <li> <p>If you check tags in IAM policy
     * <code>Condition</code> elements as part of your security strategy, then adding
     * or removing a tag can change permissions. If the successful completion of this
     * operation would result in you losing your permissions for this secret, then this
     * operation is blocked and returns an <code>Access Denied</code> error.</p> </li>
     * </ul> </important> <p>This parameter requires a JSON text string argument. For
     * information on how to format a JSON parameter for the various command line tool
     * environments, see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. For example:</p> <p>
     * <code>[{"Key":"CostCenter","Value":"12345"},{"Key":"environment","Value":"production"}]</code>
     * </p> <p>If your command-line tool or SDK requires quotation marks around the
     * parameter, you should use single quotes to avoid confusion with the double
     * quotes required in the JSON text. </p> <p>The following basic restrictions apply
     * to tags:</p> <ul> <li> <p>Maximum number of tags per secret—50</p> </li> <li>
     * <p>Maximum key length—127 Unicode characters in UTF-8</p> </li> <li> <p>Maximum
     * value length—255 Unicode characters in UTF-8</p> </li> <li> <p>Tag keys and
     * values are case sensitive.</p> </li> <li> <p>Do not use the <code>aws:</code>
     * prefix in your tag names or values because it is reserved for AWS use. You can't
     * edit or delete tag names or values with this prefix. Tags with this prefix do
     * not count against your tags per secret limit.</p> </li> <li> <p>If your tagging
     * schema will be used across multiple services and resources, remember that other
     * services might have restrictions on allowed characters. Generally allowed
     * characters are: letters, spaces, and numbers representable in UTF-8, plus the
     * following special characters: + - = . _ : / @.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>(Optional) Specifies a list of user-defined tags that are attached to the
     * secret. Each tag is a "Key" and "Value" pair of strings. This operation only
     * appends tags to the existing list of tags. To remove tags, you must use
     * <a>UntagResource</a>.</p> <important> <ul> <li> <p>Secrets Manager tag key names
     * are case sensitive. A tag with the key "ABC" is a different tag from one with
     * key "abc".</p> </li> <li> <p>If you check tags in IAM policy
     * <code>Condition</code> elements as part of your security strategy, then adding
     * or removing a tag can change permissions. If the successful completion of this
     * operation would result in you losing your permissions for this secret, then this
     * operation is blocked and returns an <code>Access Denied</code> error.</p> </li>
     * </ul> </important> <p>This parameter requires a JSON text string argument. For
     * information on how to format a JSON parameter for the various command line tool
     * environments, see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. For example:</p> <p>
     * <code>[{"Key":"CostCenter","Value":"12345"},{"Key":"environment","Value":"production"}]</code>
     * </p> <p>If your command-line tool or SDK requires quotation marks around the
     * parameter, you should use single quotes to avoid confusion with the double
     * quotes required in the JSON text. </p> <p>The following basic restrictions apply
     * to tags:</p> <ul> <li> <p>Maximum number of tags per secret—50</p> </li> <li>
     * <p>Maximum key length—127 Unicode characters in UTF-8</p> </li> <li> <p>Maximum
     * value length—255 Unicode characters in UTF-8</p> </li> <li> <p>Tag keys and
     * values are case sensitive.</p> </li> <li> <p>Do not use the <code>aws:</code>
     * prefix in your tag names or values because it is reserved for AWS use. You can't
     * edit or delete tag names or values with this prefix. Tags with this prefix do
     * not count against your tags per secret limit.</p> </li> <li> <p>If your tagging
     * schema will be used across multiple services and resources, remember that other
     * services might have restrictions on allowed characters. Generally allowed
     * characters are: letters, spaces, and numbers representable in UTF-8, plus the
     * following special characters: + - = . _ : / @.</p> </li> </ul>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>(Optional) Specifies a list of user-defined tags that are attached to the
     * secret. Each tag is a "Key" and "Value" pair of strings. This operation only
     * appends tags to the existing list of tags. To remove tags, you must use
     * <a>UntagResource</a>.</p> <important> <ul> <li> <p>Secrets Manager tag key names
     * are case sensitive. A tag with the key "ABC" is a different tag from one with
     * key "abc".</p> </li> <li> <p>If you check tags in IAM policy
     * <code>Condition</code> elements as part of your security strategy, then adding
     * or removing a tag can change permissions. If the successful completion of this
     * operation would result in you losing your permissions for this secret, then this
     * operation is blocked and returns an <code>Access Denied</code> error.</p> </li>
     * </ul> </important> <p>This parameter requires a JSON text string argument. For
     * information on how to format a JSON parameter for the various command line tool
     * environments, see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. For example:</p> <p>
     * <code>[{"Key":"CostCenter","Value":"12345"},{"Key":"environment","Value":"production"}]</code>
     * </p> <p>If your command-line tool or SDK requires quotation marks around the
     * parameter, you should use single quotes to avoid confusion with the double
     * quotes required in the JSON text. </p> <p>The following basic restrictions apply
     * to tags:</p> <ul> <li> <p>Maximum number of tags per secret—50</p> </li> <li>
     * <p>Maximum key length—127 Unicode characters in UTF-8</p> </li> <li> <p>Maximum
     * value length—255 Unicode characters in UTF-8</p> </li> <li> <p>Tag keys and
     * values are case sensitive.</p> </li> <li> <p>Do not use the <code>aws:</code>
     * prefix in your tag names or values because it is reserved for AWS use. You can't
     * edit or delete tag names or values with this prefix. Tags with this prefix do
     * not count against your tags per secret limit.</p> </li> <li> <p>If your tagging
     * schema will be used across multiple services and resources, remember that other
     * services might have restrictions on allowed characters. Generally allowed
     * characters are: letters, spaces, and numbers representable in UTF-8, plus the
     * following special characters: + - = . _ : / @.</p> </li> </ul>
     */
    inline CreateSecretRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>(Optional) Specifies a list of user-defined tags that are attached to the
     * secret. Each tag is a "Key" and "Value" pair of strings. This operation only
     * appends tags to the existing list of tags. To remove tags, you must use
     * <a>UntagResource</a>.</p> <important> <ul> <li> <p>Secrets Manager tag key names
     * are case sensitive. A tag with the key "ABC" is a different tag from one with
     * key "abc".</p> </li> <li> <p>If you check tags in IAM policy
     * <code>Condition</code> elements as part of your security strategy, then adding
     * or removing a tag can change permissions. If the successful completion of this
     * operation would result in you losing your permissions for this secret, then this
     * operation is blocked and returns an <code>Access Denied</code> error.</p> </li>
     * </ul> </important> <p>This parameter requires a JSON text string argument. For
     * information on how to format a JSON parameter for the various command line tool
     * environments, see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. For example:</p> <p>
     * <code>[{"Key":"CostCenter","Value":"12345"},{"Key":"environment","Value":"production"}]</code>
     * </p> <p>If your command-line tool or SDK requires quotation marks around the
     * parameter, you should use single quotes to avoid confusion with the double
     * quotes required in the JSON text. </p> <p>The following basic restrictions apply
     * to tags:</p> <ul> <li> <p>Maximum number of tags per secret—50</p> </li> <li>
     * <p>Maximum key length—127 Unicode characters in UTF-8</p> </li> <li> <p>Maximum
     * value length—255 Unicode characters in UTF-8</p> </li> <li> <p>Tag keys and
     * values are case sensitive.</p> </li> <li> <p>Do not use the <code>aws:</code>
     * prefix in your tag names or values because it is reserved for AWS use. You can't
     * edit or delete tag names or values with this prefix. Tags with this prefix do
     * not count against your tags per secret limit.</p> </li> <li> <p>If your tagging
     * schema will be used across multiple services and resources, remember that other
     * services might have restrictions on allowed characters. Generally allowed
     * characters are: letters, spaces, and numbers representable in UTF-8, plus the
     * following special characters: + - = . _ : / @.</p> </li> </ul>
     */
    inline CreateSecretRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>(Optional) Specifies a list of user-defined tags that are attached to the
     * secret. Each tag is a "Key" and "Value" pair of strings. This operation only
     * appends tags to the existing list of tags. To remove tags, you must use
     * <a>UntagResource</a>.</p> <important> <ul> <li> <p>Secrets Manager tag key names
     * are case sensitive. A tag with the key "ABC" is a different tag from one with
     * key "abc".</p> </li> <li> <p>If you check tags in IAM policy
     * <code>Condition</code> elements as part of your security strategy, then adding
     * or removing a tag can change permissions. If the successful completion of this
     * operation would result in you losing your permissions for this secret, then this
     * operation is blocked and returns an <code>Access Denied</code> error.</p> </li>
     * </ul> </important> <p>This parameter requires a JSON text string argument. For
     * information on how to format a JSON parameter for the various command line tool
     * environments, see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. For example:</p> <p>
     * <code>[{"Key":"CostCenter","Value":"12345"},{"Key":"environment","Value":"production"}]</code>
     * </p> <p>If your command-line tool or SDK requires quotation marks around the
     * parameter, you should use single quotes to avoid confusion with the double
     * quotes required in the JSON text. </p> <p>The following basic restrictions apply
     * to tags:</p> <ul> <li> <p>Maximum number of tags per secret—50</p> </li> <li>
     * <p>Maximum key length—127 Unicode characters in UTF-8</p> </li> <li> <p>Maximum
     * value length—255 Unicode characters in UTF-8</p> </li> <li> <p>Tag keys and
     * values are case sensitive.</p> </li> <li> <p>Do not use the <code>aws:</code>
     * prefix in your tag names or values because it is reserved for AWS use. You can't
     * edit or delete tag names or values with this prefix. Tags with this prefix do
     * not count against your tags per secret limit.</p> </li> <li> <p>If your tagging
     * schema will be used across multiple services and resources, remember that other
     * services might have restrictions on allowed characters. Generally allowed
     * characters are: letters, spaces, and numbers representable in UTF-8, plus the
     * following special characters: + - = . _ : / @.</p> </li> </ul>
     */
    inline CreateSecretRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>(Optional) Specifies a list of user-defined tags that are attached to the
     * secret. Each tag is a "Key" and "Value" pair of strings. This operation only
     * appends tags to the existing list of tags. To remove tags, you must use
     * <a>UntagResource</a>.</p> <important> <ul> <li> <p>Secrets Manager tag key names
     * are case sensitive. A tag with the key "ABC" is a different tag from one with
     * key "abc".</p> </li> <li> <p>If you check tags in IAM policy
     * <code>Condition</code> elements as part of your security strategy, then adding
     * or removing a tag can change permissions. If the successful completion of this
     * operation would result in you losing your permissions for this secret, then this
     * operation is blocked and returns an <code>Access Denied</code> error.</p> </li>
     * </ul> </important> <p>This parameter requires a JSON text string argument. For
     * information on how to format a JSON parameter for the various command line tool
     * environments, see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. For example:</p> <p>
     * <code>[{"Key":"CostCenter","Value":"12345"},{"Key":"environment","Value":"production"}]</code>
     * </p> <p>If your command-line tool or SDK requires quotation marks around the
     * parameter, you should use single quotes to avoid confusion with the double
     * quotes required in the JSON text. </p> <p>The following basic restrictions apply
     * to tags:</p> <ul> <li> <p>Maximum number of tags per secret—50</p> </li> <li>
     * <p>Maximum key length—127 Unicode characters in UTF-8</p> </li> <li> <p>Maximum
     * value length—255 Unicode characters in UTF-8</p> </li> <li> <p>Tag keys and
     * values are case sensitive.</p> </li> <li> <p>Do not use the <code>aws:</code>
     * prefix in your tag names or values because it is reserved for AWS use. You can't
     * edit or delete tag names or values with this prefix. Tags with this prefix do
     * not count against your tags per secret limit.</p> </li> <li> <p>If your tagging
     * schema will be used across multiple services and resources, remember that other
     * services might have restrictions on allowed characters. Generally allowed
     * characters are: letters, spaces, and numbers representable in UTF-8, plus the
     * following special characters: + - = . _ : / @.</p> </li> </ul>
     */
    inline CreateSecretRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::Utils::ByteBuffer m_secretBinary;
    bool m_secretBinaryHasBeenSet;

    Aws::String m_secretString;
    bool m_secretStringHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
