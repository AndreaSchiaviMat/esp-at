/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#if defined(CONFIG_AT_OTA_SUPPORT)
#define CONFIG_ESP_AT_OTA_TOKEN_DEFAULT       CONFIG_AT_OTA_TOKEN_KEY
#if defined(CONFIG_AT_OTA_SSL_SUPPORT)
#define CONFIG_ESP_AT_OTA_SSL_TOKEN_DEFAULT   CONFIG_AT_OTA_SSL_TOKEN_KEY
#else
#define CONFIG_ESP_AT_OTA_SSL_TOKEN_DEFAULT   CONFIG_AT_OTA_TOKEN_KEY
#endif
#else
#define CONFIG_ESP_AT_OTA_TOKEN_DEFAULT       NULL
#define CONFIG_ESP_AT_OTA_SSL_TOKEN_DEFAULT   NULL
#endif

#if defined(CONFIG_IDF_TARGET_ESP32)
#define CONFIG_ESP_AT_OTA_TOKEN_WROOM32        CONFIG_ESP_AT_OTA_TOKEN_DEFAULT
#define CONFIG_ESP_AT_OTA_TOKEN_WROVER32       CONFIG_ESP_AT_OTA_TOKEN_DEFAULT
#define CONFIG_ESP_AT_OTA_TOKEN_ESP32_PICO_D4  CONFIG_ESP_AT_OTA_TOKEN_DEFAULT
#define CONFIG_ESP_AT_OTA_TOKEN_ESP32_SOLO_1   CONFIG_ESP_AT_OTA_TOKEN_DEFAULT
#define CONFIG_ESP_AT_OTA_TOKEN_ESP32_MINI_1    CONFIG_ESP_AT_OTA_TOKEN_DEFAULT

#define CONFIG_ESP_AT_OTA_SSL_TOKEN_WROOM32        CONFIG_ESP_AT_OTA_SSL_TOKEN_DEFAULT
#define CONFIG_ESP_AT_OTA_SSL_TOKEN_WROVER32       CONFIG_ESP_AT_OTA_SSL_TOKEN_DEFAULT
#define CONFIG_ESP_AT_OTA_SSL_TOKEN_ESP32_PICO_D4  CONFIG_ESP_AT_OTA_SSL_TOKEN_DEFAULT
#define CONFIG_ESP_AT_OTA_SSL_TOKEN_ESP32_SOLO_1   CONFIG_ESP_AT_OTA_SSL_TOKEN_DEFAULT
#define CONFIG_ESP_AT_OTA_SSL_TOKEN_ESP32_MINI_1    CONFIG_ESP_AT_OTA_SSL_TOKEN_DEFAULT
#elif defined(CONFIG_IDF_TARGET_ESP32C3)
#define CONFIG_ESP_AT_OTA_TOKEN_ESP32C3_MINI            CONFIG_ESP_AT_OTA_TOKEN_DEFAULT
#define CONFIG_ESP_AT_OTA_SSL_TOKEN_ESP32C3_MINI        CONFIG_ESP_AT_OTA_SSL_TOKEN_DEFAULT
#elif defined(CONFIG_IDF_TARGET_ESP32C2)
#define CONFIG_ESP_AT_OTA_TOKEN_ESP32C2_2MB             CONFIG_ESP_AT_OTA_TOKEN_DEFAULT
#define CONFIG_ESP_AT_OTA_SSL_TOKEN_ESP32C2_2MB         CONFIG_ESP_AT_OTA_SSL_TOKEN_DEFAULT
#define CONFIG_ESP_AT_OTA_TOKEN_ESP32C2_4MB             CONFIG_ESP_AT_OTA_TOKEN_DEFAULT
#define CONFIG_ESP_AT_OTA_SSL_TOKEN_ESP32C2_4MB         CONFIG_ESP_AT_OTA_SSL_TOKEN_DEFAULT
#elif defined(CONFIG_IDF_TARGET_ESP32C6)
#define CONFIG_ESP_AT_OTA_TOKEN_ESP32C6_4MB             CONFIG_ESP_AT_OTA_TOKEN_DEFAULT
#define CONFIG_ESP_AT_OTA_SSL_TOKEN_ESP32C6_4MB         CONFIG_ESP_AT_OTA_SSL_TOKEN_DEFAULT
#elif defined(CONFIG_IDF_TARGET_ESP32S2)
#define CONFIG_ESP_AT_OTA_TOKEN_ESP32S2_4MB             CONFIG_ESP_AT_OTA_TOKEN_DEFAULT
#define CONFIG_ESP_AT_OTA_SSL_TOKEN_ESP32S2_4MB         CONFIG_ESP_AT_OTA_SSL_TOKEN_DEFAULT
#endif
