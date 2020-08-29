# Bash scripts

I use this stuff mostly for xinitrc on my second main computer. 

Brightness settings using dwm on my T460 did not initially work. 

I decided to try some arch wiki "standard" approaches, but xinit would either not launch or it would crash.

I then wrote the brightness scripts and bound them to the default T460 function keys in dwm's config.h, which you can find in the Templates repository. These are fairly idiot-proof since all they do is go into the settings and change the brightness.

randomWallpaper is its own repository, which contains the call to pywal. The version under this folder does not include pywal calls. Instead it sets the wallpaper using feh. It also launches st. For some reason the wallpaper does not spawn on launch with dwm until I open a terminal.

I haven't gotten around to getting pywal to work with st, although there are ways to do this and some people's repos have those configs.


