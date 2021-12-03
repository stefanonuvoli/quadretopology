INCLUDEPATH += $$PWD

#Include patterns
include($$PWD/patterns/patterns.pri)

HEADERS += \
    $$PWD/quadretopology/includes/fields/n_polyvector.h \
    $$PWD/quadretopology/includes/fields/polyroots.h
SOURCES += \
    $$PWD/quadretopology/includes/fields/n_polyvector.cpp \
    $$PWD/quadretopology/includes/fields/polyroots.cpp

SOURCES += \
        $$PWD/quadretopology/includes/qr_charts.cpp \
        $$PWD/quadretopology/includes/qr_convert.cpp \
        $$PWD/quadretopology/includes/qr_ilp.cpp \
        $$PWD/quadretopology/includes/qr_patch_tracer.cpp \
        $$PWD/quadretopology/includes/qr_patterns.cpp \
        $$PWD/quadretopology/includes/qr_mapping.cpp \
        $$PWD/quadretopology/includes/qr_utils.cpp \
        $$PWD/quadretopology/quadretopology.cpp

HEADERS += \
        $$PWD/quadretopology/includes/qr_field_tracer.h \
        $$PWD/quadretopology/includes/qr_field_smoother.h \
        $$PWD/quadretopology/includes/qr_convert.h \
        $$PWD/quadretopology/includes/qr_charts.h \
        $$PWD/quadretopology/includes/qr_convert.h \
        $$PWD/quadretopology/includes/qr_ilp.h \
        $$PWD/quadretopology/includes/qr_parameters.h \
        $$PWD/quadretopology/includes/qr_patch_tracer.h \
        $$PWD/quadretopology/includes/qr_patterns.h \
        $$PWD/quadretopology/includes/qr_mapping.h \
        $$PWD/quadretopology/includes/qr_patch_assembler.h \
        $$PWD/quadretopology/includes/qr_utils.h \
        $$PWD/quadretopology/quadretopology.h
