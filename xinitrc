VBoxClient --display
VBoxClient --clipboard
xrandr --output VGA-1 --mode 1920x1080
setxkbmap be
unclutter -jitter 2 -noevents -root &
exec dwm
