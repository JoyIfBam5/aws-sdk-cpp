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
#include <aws/cognito-sync/model/RecordPatch.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoSync
{
namespace Model
{

RecordPatch::RecordPatch() : 
    m_op(Operation::NOT_SET),
    m_opHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_syncCount(0),
    m_syncCountHasBeenSet(false),
    m_deviceLastModifiedDateHasBeenSet(false)
{
}

RecordPatch::RecordPatch(const JsonValue& jsonValue) : 
    m_op(Operation::NOT_SET),
    m_opHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_syncCount(0),
    m_syncCountHasBeenSet(false),
    m_deviceLastModifiedDateHasBeenSet(false)
{
  *this = jsonValue;
}

RecordPatch& RecordPatch::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Op"))
  {
    m_op = OperationMapper::GetOperationForName(jsonValue.GetString("Op"));

    m_opHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SyncCount"))
  {
    m_syncCount = jsonValue.GetInt64("SyncCount");

    m_syncCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceLastModifiedDate"))
  {
    m_deviceLastModifiedDate = jsonValue.GetDouble("DeviceLastModifiedDate");

    m_deviceLastModifiedDateHasBeenSet = true;
  }

  return *this;
}

JsonValue RecordPatch::Jsonize() const
{
  JsonValue payload;

  if(m_opHasBeenSet)
  {
   payload.WithString("Op", OperationMapper::GetNameForOperation(m_op));
  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_syncCountHasBeenSet)
  {
   payload.WithInt64("SyncCount", m_syncCount);

  }

  if(m_deviceLastModifiedDateHasBeenSet)
  {
   payload.WithDouble("DeviceLastModifiedDate", m_deviceLastModifiedDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CognitoSync
} // namespace Aws