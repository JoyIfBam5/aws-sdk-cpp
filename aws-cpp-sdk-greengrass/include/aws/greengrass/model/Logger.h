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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/model/LoggerComponent.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/LoggerLevel.h>
#include <aws/greengrass/model/LoggerType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{

  /**
   * Information on the Logger<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/Logger">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API Logger
  {
  public:
    Logger();
    Logger(const Aws::Utils::Json::JsonValue& jsonValue);
    Logger& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The component that will be subject to logs
     */
    inline const LoggerComponent& GetComponent() const{ return m_component; }

    /**
     * The component that will be subject to logs
     */
    inline void SetComponent(const LoggerComponent& value) { m_componentHasBeenSet = true; m_component = value; }

    /**
     * The component that will be subject to logs
     */
    inline void SetComponent(LoggerComponent&& value) { m_componentHasBeenSet = true; m_component = std::move(value); }

    /**
     * The component that will be subject to logs
     */
    inline Logger& WithComponent(const LoggerComponent& value) { SetComponent(value); return *this;}

    /**
     * The component that will be subject to logs
     */
    inline Logger& WithComponent(LoggerComponent&& value) { SetComponent(std::move(value)); return *this;}


    /**
     * Element Id for this entry in the list.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * Element Id for this entry in the list.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * Element Id for this entry in the list.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * Element Id for this entry in the list.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * Element Id for this entry in the list.
     */
    inline Logger& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * Element Id for this entry in the list.
     */
    inline Logger& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * Element Id for this entry in the list.
     */
    inline Logger& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The level of the logs
     */
    inline const LoggerLevel& GetLevel() const{ return m_level; }

    /**
     * The level of the logs
     */
    inline void SetLevel(const LoggerLevel& value) { m_levelHasBeenSet = true; m_level = value; }

    /**
     * The level of the logs
     */
    inline void SetLevel(LoggerLevel&& value) { m_levelHasBeenSet = true; m_level = std::move(value); }

    /**
     * The level of the logs
     */
    inline Logger& WithLevel(const LoggerLevel& value) { SetLevel(value); return *this;}

    /**
     * The level of the logs
     */
    inline Logger& WithLevel(LoggerLevel&& value) { SetLevel(std::move(value)); return *this;}


    /**
     * Amount of hardware space, in KB, to use if file system is used for logging
     * purposes.
     */
    inline int GetSpace() const{ return m_space; }

    /**
     * Amount of hardware space, in KB, to use if file system is used for logging
     * purposes.
     */
    inline void SetSpace(int value) { m_spaceHasBeenSet = true; m_space = value; }

    /**
     * Amount of hardware space, in KB, to use if file system is used for logging
     * purposes.
     */
    inline Logger& WithSpace(int value) { SetSpace(value); return *this;}


    /**
     * The type which will be use for log output
     */
    inline const LoggerType& GetType() const{ return m_type; }

    /**
     * The type which will be use for log output
     */
    inline void SetType(const LoggerType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * The type which will be use for log output
     */
    inline void SetType(LoggerType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * The type which will be use for log output
     */
    inline Logger& WithType(const LoggerType& value) { SetType(value); return *this;}

    /**
     * The type which will be use for log output
     */
    inline Logger& WithType(LoggerType&& value) { SetType(std::move(value)); return *this;}

  private:

    LoggerComponent m_component;
    bool m_componentHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    LoggerLevel m_level;
    bool m_levelHasBeenSet;

    int m_space;
    bool m_spaceHasBeenSet;

    LoggerType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
