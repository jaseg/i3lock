DO NOT USE!
===========

Since working on this project, I have come to the conclusion that using anything but xscreensaver is a very unwise decision ([details](http://www.jwz.org/xscreensaver/toolkits.html)). I am no longer updating this project and strongly advise against its use (or the use of the upstream branch). If you want nice scaled lockscreen images, just use xscreensaver with xv, feh or any other program capable of displaying images on an X11 root window.

Thanks for checking out anyway!

jaseg

i3lock - improved screen locker
===============================
i3lock is a simple screen locker like slock. After starting it, you will
see a white screen (you can configure the color/an image). You can return
to your screen by entering your password.

Many little improvements have been made to i3lock over time:

- i3lock forks, so you can combine it with an alias to suspend to RAM
  (run "i3lock && echo mem > /sys/power/state" to get a locked screen
   after waking up your computer from suspend to RAM)

- You can specify either a background color or a PNG image which will be
  displayed while your screen is locked.

- You can specify whether i3lock should bell upon a wrong password.

- i3lock uses PAM and therefore is compatible with LDAP etc.

- You can specify whether the background image should be tiled, centered per
  screen, scaled to fill each screen or scaled to fit each screen.

Requirements
------------
- pkg-config
- libxcb
- libxcb-util
- libpam-dev
- libcairo-dev
- libxcb-xinerama
- libev
- libx11-dev
- libx11-xcb-dev
- libxkbfile-dev
- libxkbcommon >= 0.2.0

Running i3lock
-------------
Simply invoke the 'i3lock' command. To get out of it, enter your password and
press enter.

Upstream
--------
This is my fork of i3lock, the main repo is at https://github.com/jaseg/i3lock
The difference to the "official" i3lock is that this one handles background
image scaling and centering on multiple monitors in a sane way.
