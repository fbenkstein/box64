#ifndef GO
#error Nope
#endif

GO("libc.musl-x86_64.so.1", libcmusl)
GO("libpthread.so.0", libpthread)
GO("librt.so.1", librt)
GO("libbsd.so.0", libbsd)
GO("libEGL.so.1", libegl)
GO("libGL.so.1", libgl)
GO("libGL.so", libgl)
GO("libOpenGL.so.0", libgl)
GO("libGLU.so.1", libglu)
GO("libGLX.so.0", libglx)
GO("libGLX.so", libglx)
GO("libX11.so.6", libx11)
GO("libasound.so.2", libasound)
GO("libasound.so", libasound)
GO("libSDL2-2.0.so.0", sdl2)
GO("libSDL2-2.0.so.1", sdl2)
GO("libSDL2.so", sdl2)
GO("libsdl2-2.0.so.0", sdl2)
GO("libSDL2_mixer-2.0.so.0", sdl2mixer)
GO("libSDL2_image-2.0.so.0", sdl2image)
GO("libSDL2_image.so", sdl2image)
GO("libSDL2_net-2.0.so.0", sdl2net)
GO("libSDL2_ttf-2.0.so.0", sdl2ttf)
GO("libSDL2_ttf.so", sdl2ttf)
GO("libSDL-1.2.so.0", sdl1)
GO("libSDL_image-1.2.so.0", sdl1image)
GO("libSDL_mixer-1.2.so.0", sdl1mixer)
GO("libSDL_net-1.2.so.0", sdl1net)
GO("libSDL_sound-1.0.so.1", sdl1sound)
GO("libSDL_ttf-2.0.so.0", sdl1ttf)
GO("libsmpeg-0.4.so.0", smpeg)
GO("libsmpeg2-2.0.so.0", smpeg2)
GO("libvorbisfile.so.3", vorbisfile)
GO("libvorbis.so.0", libvorbis)
GO("libogg.so.0", libogg)
GO("libFLAC.so.8", flac)
//GO("libpng12.so.0", png12)
GO("libXxf86vm.so.1", libxxf86vm)
GO("libXinerama.so.1", xinerama)
GO("libXrandr.so.2", libxrandr)
GO("libxrandr.so.2", libxrandr)
GO("libXext.so.6", libxext)
GO("libXfixes.so.3", libxfixes)
GO("libXcursor.so.1", libxcursor)
GO("libXrender.so.1", libxrender)
GO("libXft.so.2", libxft)
GO("libXi.so.6", libxi)
GO("libXss.so.1", libxss)
GO("libXpm.so.4", libxpm)
GO("libXau.so.6", libxau)
GO("libXdmcp.so.6", libxdmcp)
GO("libX11-xcb.so.1", libx11xcb)
GO("libxcb.so.1", libxcb)
GO("libxcb-cursor.so.0", libxcbcursor)
GO("libxcb-xfixes.so.0", libxcbxfixes)
GO("libxcb-shape.so.0", libxcbshape)
GO("libxcb-shm.so.0", libxcbshm)
GO("libxcb-randr.so.0", libxcbrandr)
GO("libxcb-present.so.0", libxcbpresent)
GO("libxcb-image.so.0", libxcbimage)
GO("libxcb-keysyms.so.1", libxcbkeysyms)
GO("libxcb-xtest.so.0", libxcbxtest)
GO("libxcb-glx.so.0", libxcbglx)
GO("libxcb-dri2.so.0", libxcbdri2)
GO("libxcb-dri3.so.0", libxcbdri3)
GO("libxcb-icccm.so.4", libxcbicccm)
GO("libxcb-util.so.1", libxcbutil)
GO("libxcb-render-util.so.0", libxcbrenderutil)
GO("libxcb-render.so.0", libxcbrender)
GO("libxcb-sync.so.1", libxcbsync)
GO("libxcb-xinerama.so.0", libxcbxinerama)
GO("libxcb-xkb.so.1", libxcbxkb)
//GO("libxcb-present.so.0", libxcbpresent)
GO("libXtst.so.6", libxtst)
GO("libXt.so.6", libxt)
GO("libXcomposite.so.1", libxcomposite)
GO("libXdamage.so.1", libxdamage)
GO("libXpresent.so.1", libxpresent)
GO("libXmu.so.6", libxmu)
GO("libxkbcommon.so.0", xkbcommon)
GO("libxkbcommon-x11.so.0", xkbcommonx11)
GO("libz.so.1", libz)
GO("libopenal.so.1", openal)
GO("libopenal.so.0", openal)
GO("libopenal.so", openal)
GO("openal.so", openal)
GO("libalut.so.0", alut)
GO("libalure.so.1", alure)
GO("libOpenCL.so.1", opencl)
//GO("libjpeg.so.8", libjpeg)
//GO("libjpeg.so.62", libjpeg62)
//GO("libturbojpeg.so.0", turbojpeg)
GO("libcurl.so.4", curl)
GO("libcurl-gnutls.so.4", curl)
GO("libcurl.so.3", curl)
GO("libudev.so.0", udev0)
GO("libudev.so.1", udev1)
GO("libudev.so", udev1)
GO("libdbus-1.so.3", dbus)
//GO("libiconv.so.2", iconv)
GO("libdrm.so.2", libdrm)
GO("libexpat.so.1", expat)
GO("libexpat.so", expat)
GO("libcrypto.so.1", crypto)
GO("libssl.so.1", libssl)
GO("libcrypto.so.3", crypto3)
GO("libssl.so.3", libssl3)
GO("libcrypt.so.1", libcrypt)
GO("libgcrypt.so.20", gcrypt)
GO("libutil.so.1", util)
GO("libuuid.so.1", libuuid)
GO("libresolv.so.2", libresolv)
GO("libresolv.so", libresolv)
GO("libpulse-simple.so.0", pulsesimple)
GO("libpulse.so.0", pulse)
GO("libsndfile.so.1", libsndfile)
GO("libgtk-x11-2.0.so.0", gtkx112)
GO("libgdk-x11-2.0.so.0", gdkx112)
GO("libgtk-3.so.0", gtk3)
GO("libgdk-3.so.0", gdk3)
GO("libgdk_pixbuf-2.0.so.0", gdkpixbuf2)
GO("libgconf-2.so.4", gconf2)
GO("libgio-2.0.so.0", gio2)
GO("libgmodule-2.0.so.0", gmodule2)
GO("libnotify.so.4", notify)
GO("libgobject-2.0.so.0", gobject2)
GO("libglib-2.0.so.0", glib2)
GO("libgthread-2.0.so.0", gthread2)
//GO("libgstreamer-0.10.so.0", gstreamer010)
//GO("libgstinterfaces-0.10.so.0", gstinterfaces010)
//GO("libdbusmenu-gtk.so.4", dbusmenugtk)
GO("libdbusmenu-glib.so.4", dbusmenuglib)
GO("libdbus-glib-1.so.2", dbusglib1)
//GO("libgudev-1.0.so.0", gudev1)
//GO("libappindicator.so.1", appindicator)
GO("libayatana-appindicator3.so.1", ayatanaappindicator3)
GO("libatk-1.0.so.0", atk)
GO("libatk-bridge-2.0.so.0", atkbridge)
GO("libatspi.so.0", atspi)
GO("libpangoft2-1.0.so", pangoft2)
GO("libpangoft2-1.0.so.0", pangoft2)
GO("libpangocairo-1.0.so.0", pangocairo)
GO("libcairo.so.2", cairo)
GO("libcairo.so", cairo)
GO("libcairo-gobject.so.2", cairogobject)
GO("libpango-1.0.so.0", pango)
GO("libpango-1.0.so", pango)
//GO("libnm.so.0", libnm)
//GO("libnm-glib.so.4", libnm)
//GO("libnm-util.so.2", libnm)
GO("libibus-1.0.so.5", libibus)
GO("libfontconfig.so.1", fontconfig)
GO("libharfbuzz.so.0", libharfbuzz)
GO("libbz2.so.1", bz2)
GO("liblzma.so.5", lzma)
GO("libSM.so.6", libsm)
GO("libICE.so.6", libice)
GO("libusb-1.0.so.0", libusb1)
GO("libncursesw.so.5", libncursesw)
GO("libncursesw.so.6", libncursesw6)
GO("libform.so.5", libform)
GO("libformw.so.5", libformw)
GO("libformw.so.6", libformw6)
GO("libncurses.so.5", libncurses)
GO("libtinfo.so.5", libtinfo)
GO("libpanel.so.5", libpanel)
GO("libncurses.so.6", libncurses6)
GO("libtinfo.so.6", libtinfo6)
GO("libtbbmalloc.so.2", tbbmalloc)
GO("libtbbmalloc_proxy.so.2", tbbmallocproxy)
GO("libtbbbind_2_5.so", tbbbind)
GO("libtcmalloc_minimal.so.0", tcmallocminimal)
GO("libtcmalloc_minimal.so.4", tcmallocminimal)
GO("libpcre.so.3", libpcre)
GO("libvulkan.so.1", vulkan)
GO("libvulkan.so", vulkan)
//GO("libwayland-client.so.0", waylandclient)
GO("libgbm.so.1", gbm)
GO("libgomp.so.1", gomp)
GO("libcap.so.2", cap)
//GO("libnsl.so.1", nsl)
GO("libkrb5.so.3", krb5)
GO("libgssapi_krb5.so.2", gssapikrb5)
GO("libgssapi.so.3", gssapi)
GO("libfuse.so.2", libfuse)
GO("libnss3.so", nss3)
GO("libnssutil3.so", nssutil3)
GO("libsmime3.so", smime3)
GO("libnspr4.so", nspr4)
GO("libplds4.so", plds4)
GO("libplc4.so", plc4)
GO("libssl3.so", ssl3)
GO("libfreebl3.so", freebl3)
GO("libnsl.so.1", nsl)
GO("libselinux.so.1", selinux)
GO("libsecret-1.so.0", secret1)
GO("libpci.so.3", libpci)
GO("libgmp.so.10", gmp)
GO("libFAudio.so.0", faudio)
GO("libgstallocators-1.0.so.0", gstallocators)
GO("libgstapp-1.0.so.0", gstapp)
GO("libgstaudio-1.0.so.0", gstaudio)
GO("libgstbase-1.0.so.0", gstbase)
GO("libgstcheck-1.0.so.0", gstcheck)
GO("libgstcontroller-1.0.so.0", gstcontroller)
GO("libgstfft-1.0.so.0", gstfft)
GO("libgstgl-1.0.so.0", gstgl)
GO("libgstnet-1.0.so.0", gstnet)
GO("libgstpbutils-1.0.so.0", gstpbutils)
GO("libgstreamer-1.0.so.0", gstreamer)
GO("libgstriff-1.0.so.0", gstriff)
GO("libgstrtp-1.0.so.0", gstrtp)
GO("libgstrtsp-1.0.so.0", gstrtsp)
GO("libgstsdp-1.0.so.0", gstsdp)
GO("libgsttag-1.0.so.0", gsttag)
GO("libgstvideo-1.0.so.0", gstvideo)
GO("libxshmfence.so.1", xshmfence)
GO("libatomic.so.1", atomic)
GO("liblcms2.so.2", lcms2)
GO("libevent-2.1.so.7", event21)
GO("libsoftokn3.so", softokn3)
GO("libwayland-egl.so.1", waylandegl)
GO("libwayland-client.so.0", waylandclient)
GO("libwayland-cursor.so.0", waylandcursor)
GO("libva.so.2", libva)
GO("libva-drm.so.2", libvadrm)
GO("libva-x11.so.2", libvax11)
GO("libva-wayland.so.2", libvawayland)
GO("libvdpau.so.1", libvdpau)
GO("libnuma.so.1", libnuma)
GO("libnuma.so", libnuma)
GO("d3dadapter9.so.1", d3dadapter9)
GO("libicuuc.so.66", icuuc66)
GO("libicui18n.so.66", icui18n66)
GO("libicuuc.so.67", icuuc67)
GO("libicui18n.so.67", icui18n67)
GO("libicuuc.so.72", icuuc72)
GO("libicui18n.so.72", icui18n72)
GO("libicuuc.so.74", icuuc74)
GO("libicui18n.so.74", icui18n74)
GO("libidn2.so.0", idn2)

#ifdef ANDROID
GO("libc.so", libc)
GO("libm.so", libm)
GO("libbsd.so", libbsd)
GO("libdl.so", libdl)
GO("libcups.so", libcups)
GO("liblber-2.4.so", lber)
GO("libldap_r-2.4.so", ldapr)
GO("libpng16.so", png16)
GO("libxslt.so", xslt)
GO("libfreetype.so", freetype)
GO("libgnutls.so", gnutls)
//GO("liblcms2.so", lcms2)
GO("libmpg123.so", mpg123)
//GO("libtiff.so", libtiff)
GO("libxml2.so", xml2)
GO("libX11.so", libx11)
GO("libXext.so", libxext)
GO("libxcb.so", libxcb)
GO("libXau.so", libxau)
GO("libXxf86vm.so", libxxf86vm)
GO("libXinerama.so", xinerama)
GO("libXrandr.so", libxrandr)
GO("libxrandr.so", libxrandr)
GO("libXext.so", libxext)
GO("libXfixes.so", libxfixes)
GO("libXcursor.so", libxcursor)
GO("libXrender.so", libxrender)
GO("libXft.so", libxft)
GO("libXi.so", libxi)
GO("libXss.so", libxss)
GO("libXpm.so", libxpm)
GO("libXau.so", libxau)
GO("libXdmcp.so", libxdmcp)
GO("libX11-xcb.so", libx11xcb)
GO("libxcb.so", libxcb)
GO("libxcb-xfixes.so", libxcbxfixes)
GO("libxcb-shape.so", libxcbshape)
GO("libxcb-shm.so", libxcbshm)
GO("libxcb-randr.so", libxcbrandr)
GO("libxcb-present.so", libxcbpresent)
GO("libxcb-image.so", libxcbimage)
GO("libxcb-keysyms.so", libxcbkeysyms)
GO("libxcb-xtest.so", libxcbxtest)
GO("libxcb-glx.so", libxcbglx)
GO("libxcb-dri2.so", libxcbdri2)
GO("libxcb-dri3.so", libxcbdri3)
GO("libxcb-icccm.so", libxcbicccm)
GO("libxcb-util.so", libxcbutil)
GO("libxcb-render-util.so", libxcbrenderutil)
GO("libxcb-render.so", libxcbrender)
GO("libxcb-sync.so", libxcbsync)
GO("libxcb-xinerama.so", libxcbxinerama)
GO("libxcb-xkb.so", libxcbxkb)
//GO("libxcb-present.so", libxcbpresent)
GO("libXtst.so", libxtst)
GO("libXt.so", libxt)
GO("libXcomposite.so", libxcomposite)
GO("libXdamage.so", libxdamage)
GO("libXpresent.so", libxpresent)
GO("libXmu.so", libxmu)
GO("libxkbcommon.so", xkbcommon)
GO("libxkbcommon-x11.so", xkbcommonx11)
GO("libpulse-simple.so", pulsesimple)
GO("libpulse.so", pulse)
GO("libsndfile.so", libsndfile)
GO("libgstallocators-1.0.so", gstallocators)
GO("libgstapp-1.0.so", gstapp)
GO("libgstaudio-1.0.so", gstaudio)
GO("libgstbase-1.0.so", gstbase)
GO("libgstcheck-1.0.so", gstcheck)
GO("libgstcontroller-1.0.so", gstcontroller)
GO("libgstfft-1.0.so", gstfft)
GO("libgstgl-1.0.so", gstgl)
GO("libgstnet-1.0.so", gstnet)
GO("libgstpbutils-1.0.so", gstpbutils)
GO("libgstreamer-1.0.so", gstreamer)
GO("libgstriff-1.0.so", gstriff)
GO("libgstrtp-1.0.so", gstrtp)
GO("libgstrtsp-1.0.so", gstrtsp)
GO("libgstsdp-1.0.so", gstsdp)
GO("libgsttag-1.0.so", gsttag)
GO("libgstvideo-1.0.so", gstvideo)
GO("libxshmfence.so", xshmfence)
GO("libusb-1.0.so", libusb1)
GO("libvorbisfile.so", vorbisfile)
GO("libvorbis.so", libvorbis)
GO("libogg.so", libogg)
GO("libFLAC.so", flac)
GO("libz.so", libz)
GO("libandroid-shmem.so", androidshmem)
#else
GO("libc.so.6", libc)
GO("libm.so.6", libm)
GO("libdl.so.2", libdl)
GO("libcups.so.2", libcups)
GO("liblber-2.4.so.2", lber)
GO("libldap_r-2.4.so.2", ldapr)
GO("libpng16.so.16", png16)
GO("libxslt.so.1", xslt)
GO("libfreetype.so.6", freetype)
GO("libgnutls.so.30", gnutls)
//GO("liblcms2.so.2", lcms2)
GO("libmpg123.so.0", mpg123)
//GO("libtiff.so.5", libtiff)
GO("libxml2.so.2", xml2)
#endif
#ifdef TERMUX
GO("libiconv.so", iconv)
GO("libtermux-exec.so", termuxexec)
GO("libandroid-support.so", androidsupport)
#endif

GO("ld-linux-x86-64.so.2", ldlinux)

//GO("libunwind.so.8", unwind)
GO("crashhandler.so", crashhandler)
