# Miryoku Modified (Totem)

This repo is a close fork of the excellent Miryopku layout system by Manna Harbour see their repository [here](https://github.com/manna-harbour/miryoku) for more details, including overall philosophy and options.

## Modifications
There are minor modifications to support some extra behaviours and then a personalised configuration using these. The noteworthy behaviours are:

* Timeless homerow mods
    * Based on then personal ZMK config by [Urob](https://github.com/urob/zmk-config/)
    * This has been modified to use default ZMK behaviour syntax as it was easier than trying to integrate the helpers and their modules.
    * Intended to be as close as possible to urobs implementation
* 'Magic' Shift
    * Again inspired by Urob but I had no need for the repeat key.
    * My implementation on tap produces a sticky shift (like a One-Shot in QMK), on hold acts as shift and on double tap it calls Miryoku's Capsword functionality.
* Thumb Cluster personalisation
    * Just done to my liking and integrates the magic shift as well as a meh (Shift+Ctrl+Alt) as a mod-tap on the tab key.
