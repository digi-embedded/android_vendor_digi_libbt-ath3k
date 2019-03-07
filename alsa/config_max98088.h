/*
 * Copyright (C) 2011 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/* Copyright 2019, Digi International Inc. */

#ifndef ANDROID_INCLUDE_IMX_CONFIG_MAX98088_H
#define ANDROID_INCLUDE_IMX_CONFIG_MAX98088_H

#include "audio_hardware.h"

static struct route_setting defaults_max98088[] = {
    {
        .ctl_name = "Headphone Volume",
        .intval = 18,
    },
    {
        .ctl_name = "Speaker Volume",
        .intval = 16,
    },
    {
        .ctl_name = "Receiver Volume",
        .intval = 16,
    },
    {
        .ctl_name = "Headphone Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Speaker Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Receiver Switch",
        .intval = 1,
    },
    {
        .ctl_name = "MIC1 Volume",
        .intval = 0,
    },
    {
        .ctl_name = "MIC2 Volume",
        .intval = 15,
    },
    {
        .ctl_name = "MIC1 Boost Volume",
        .intval = 0,
    },
    {
        .ctl_name = "MIC2 Boost Volume",
        .intval = 1,
    },
    {
        .ctl_name = "INA Volume",
        .intval = 4,
    },
    {
        .ctl_name = "INB Volume",
        .intval = 4,
    },
    {
        .ctl_name = "ADCL Volume",
        .intval = 0,
    },
    {
        .ctl_name = "ADCR Volume",
        .intval = 0,
    },
    {
        .ctl_name = "ADCL Boost Volume",
        .intval = 0,
    },
    {
        .ctl_name = "ADCR Boost Volume",
        .intval = 0,
    },
    {
        .ctl_name = "EQ1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "EQ2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "EX Limiter Mode",
        .intval = 0,
    },
    {
        .ctl_name = "EX Limiter Threshold",
        .strval = "0.6",
    },
    {
        .ctl_name = "DAI1 Filter Mode",
        .strval = "Music",
    },
    {
        .ctl_name = "DAI1 DAC Filter",
        .strval = "Off",
    },
    {
        .ctl_name = "DAI1 ADC Filter",
        .strval = "Off",
    },
    {
        .ctl_name = "DAI2 DC Block Switch",
        .intval = 0,
    },
    {
        .ctl_name = "ALC Switch",
        .intval = 0,
    },
    {
        .ctl_name = "ALC Threshold",
        .intval = 0,
    },
    {
        .ctl_name = "ALC Multiband",
        .intval = 0,
    },
    {
        .ctl_name = "ALC Release Time",
        .intval = 0,
    },
    {
        .ctl_name = "PWR Limiter Threshold",
        .intval = 0,
    },
    {
        .ctl_name = "PWR Limiter Weight",
        .intval = 0,
    },
    {
        .ctl_name = "PWR Limiter Time1",
        .intval = 0,
    },
    {
        .ctl_name = "PWR Limiter Time2",
        .intval = 0,
    },
    {
        .ctl_name = "THD Limiter Threshold",
        .intval = 0,
    },
    {
        .ctl_name = "THD Limiter Time",
        .intval = 0,
    },
    {
        .ctl_name = "REC Output Mode",
        .intval = 1,
    },
    {
        .ctl_name = "Right ADC Mixer MIC1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right ADC Mixer MIC2 Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Right ADC Mixer INA1 Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Right ADC Mixer INA2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right ADC Mixer INB1 Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Right ADC Mixer INB2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left ADC Mixer MIC1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left ADC Mixer MIC2 Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Left ADC Mixer INA1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left ADC Mixer INA2 Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Left ADC Mixer INB1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left ADC Mixer INB2 Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Right REC Mixer Left DAC1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right REC Mixer Right DAC1 Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Right REC Mixer Left DAC2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right REC Mixer Right DAC2 Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Right REC Mixer MIC1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right REC Mixer MIC2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right REC Mixer INA1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right REC Mixer INA2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right REC Mixer INB1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right REC Mixer INB2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left REC Mixer Left DAC1 Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Left REC Mixer Right DAC1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left REC Mixer Left DAC2 Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Left REC Mixer Right DAC2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left REC Mixer MIC1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left REC Mixer MIC2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left REC Mixer INA1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left REC Mixer INA2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left REC Mixer INB1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left REC Mixer INB2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right SPK Mixer Left DAC1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right SPK Mixer Right DAC1 Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Right SPK Mixer Left DAC2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right SPK Mixer Right DAC2 Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Right SPK Mixer MIC1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right SPK Mixer MIC2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right SPK Mixer INA1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right SPK Mixer INA2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right SPK Mixer INB1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right SPK Mixer INB2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left SPK Mixer Left DAC1 Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Left SPK Mixer Right DAC1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left SPK Mixer Left DAC2 Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Left SPK Mixer Right DAC2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left SPK Mixer MIC1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left SPK Mixer MIC2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left SPK Mixer INA1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left SPK Mixer INA2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left SPK Mixer INB1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left SPK Mixer INB2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right HP Mixer Left DAC1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right HP Mixer Right DAC1 Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Right HP Mixer Left DAC2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right HP Mixer Right DAC2 Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Right HP Mixer MIC1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right HP Mixer MIC2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right HP Mixer INA1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right HP Mixer INA2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right HP Mixer INB1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Right HP Mixer INB2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left HP Mixer Left DAC1 Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Left HP Mixer Right DAC1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left HP Mixer Left DAC2 Switch",
        .intval = 1,
    },
    {
        .ctl_name = "Left HP Mixer Right DAC2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left HP Mixer MIC1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left HP Mixer MIC2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left HP Mixer INA1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left HP Mixer INA2 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left HP Mixer INB1 Switch",
        .intval = 0,
    },
    {
        .ctl_name = "Left HP Mixer INB2 Switch",
        .intval = 0,
    },
	    {
        .ctl_name = NULL,
    }
};

/* ALSA cards for IMX, these must be defined according different board / kernel
 * config*/
static struct audio_card max98088_card = {
    .name = "imx-max98088",
    .driver_name = "imx-max98088",
    .supported_out_devices = (
            AUDIO_DEVICE_OUT_SPEAKER |
            AUDIO_DEVICE_OUT_WIRED_HEADPHONE |
            AUDIO_DEVICE_OUT_AUX_DIGITAL |
            AUDIO_DEVICE_OUT_DEFAULT ),
    .supported_in_devices = (
            AUDIO_DEVICE_IN_BUILTIN_MIC |
            AUDIO_DEVICE_IN_BACK_MIC |
            AUDIO_DEVICE_IN_DEFAULT),
    .defaults = defaults_max98088,
    .bt_output = NULL,
    .speaker_output = NULL,
    .hs_output = NULL,
    .earpiece_output = NULL,
    .vx_hs_mic_input = NULL,
    .mm_main_mic_input = NULL,
    .vx_main_mic_input = NULL,
    .mm_hs_mic_input = NULL,
    .vx_bt_mic_input = NULL,
    .mm_bt_mic_input = NULL,
    .card = 0,
    .out_rate = 0,
    .out_channels = 0,
    .out_format = 0,
    .in_rate = 0,
    .in_channels = 0,
    .in_format = 0,
};

#endif /* ANDROID_INCLUDE_IMX_CONFIG_MAX98088_H */
