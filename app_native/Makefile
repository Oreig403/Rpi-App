apps += rpi::App
app_headers += apps/sample/app.h

app_rpi_src = $(addprefix apps/rpi/,\
  app.cpp \
  rpi_controller.cpp \
  rpi_view.cpp \
)

apps_src += $(app_rpi_src)

app_images += apps/rpi/rpi_icon.png

i18n_files += $(call i18n_without_universal_for,rpi/base)

$(eval $(call depends_on_image,apps/rpi/app.cpp,apps/rpi/rpi_icon.png))

### The Makefile, is the file who allows you to compile successfully your app.
### If you add files or rename some files, don't forget to change the Makefile!
