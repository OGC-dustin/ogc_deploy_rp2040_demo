make_minimum_required( VERSION 3.13 )

# initialize pico-sdk from submodule
# note: this must happen before project()
include( firmware/pico-sdk/pico_sdk_init.cmake )

project( demo_project )

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

# rest of your project
