## CP - caccia piccioni

![](https://img.shields.io/badge/Sinho_softworks-A04000?style=for-the-badge&logo=&logoColor=white&labelColor=990042)
[![](https://img.shields.io/badge/GitHub_repository-000000?style=for-the-badge&logo=github&logoColor=white)](https://github.com/mrsinho/caccia-piccioni)

> **Scritto per necessità, pubblicato per goliardia. È scaricabile anche la guida in versione pdf per chi volesse (non dice nulla di diverso da quello che è già scritto su questa pagina).**

[TOC]

[CP](https://github.com/mrsinho/caccia-piccioni) sono le iniziali di "Caccia Piccioni". Non voglio la loro cacca sul mio balcone. 

## Hardware

| Component                                                                                                                     |
|-------------------------------------------------------------------------------------------------------------------------------|
| [Raspberry Pi Pico](https://www.raspberrypi.com/products/raspberry-pi-pico/)                                                  |
| [Microwave Motion Sensor](http://www.cqrobot.wiki/index.php/10.525GHz_Doppler_Effect_Microwave_Motion_Sensor_SKU:_CQRSENWB01) | 

## Clone Github repository

```bash
git clone https://github.com/mrsinho/caccia-piccioni
cd caccia-piccioni
```

## Build for rp2040 (Raspberry Pi Pico and Pico W)


```bash
mkdir rp2040
mkdir rp2040/build
cd rp2040/build
cmake ../../ -G"MinGW Makefiles" -DCP_PICO_SDK_PATH="D:/lib/pico-sdk" -DPICO_TOOLCHAIN_PATH="D:/bin/gnu-arm-toolchain"
cmake --build .
```

## Build html guide and documentation (doxygen required)

```bash
cmake --build . --target docs-cp 
```

## CMake targets

| Target                                          | type           | dependencies                       |
|-------------------------------------------------|----------------|------------------------------------|
| [cp](https://github.com/mrsinho/shserial)       | `UF2` executable | pico_stdio, pico_stdlib, pico_time |

## License 

The project was written and is still currently maintained by [MrSinho](https://github.com/mrsinho). It is licensed under the [GNU General Public License v3.0](https://www.gnu.org/licenses/gpl-3.0.html). 


![](https://img.shields.io/badge/Sinho_softworks-A04000?style=for-the-badge&logo=&logoColor=white&labelColor=990042)
