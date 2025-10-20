VIA_ENABLE = yes
VIAL_ENABLE = yes

# Reduce the size of the firmware by disabling features not needed for this keyboard
MOUSEKEY_ENABLE = no
# EXTRAKEY_ENABLE = no # Disable if not using media and system keys
CONSOLE_ENABLE = yes
QMK_SETTINGS = no
TAP_DANCE_ENABLE = no
KEY_OVERRIDE_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
# MAGIC_ENABLE = no
AVR_USE_MINIMAL_PRINTF = yes

# LTO makes the compiler work harder when optimizing your code, resulting in a smaller firmware size.
LTO_ENABLE = yes

# UNICODE_ENABLE = yes
UNICODEMAP_ENABLE = yes

OPT_DEFS += -fno-pie -fno-pic
LDFLAGS += -no-pie
