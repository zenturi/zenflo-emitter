#!/bin/sh
rm -f zenflo-emitter.zip
zip -r zenflo-emitter.zip src *.hxml *.json *.md
haxelib submit zenflo-emitter.zip $HAXELIB_PWD --always