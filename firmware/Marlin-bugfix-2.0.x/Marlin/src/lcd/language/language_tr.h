/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Turkish
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 * Bu çeviri dosyasındaki sorunlar ve düzeltmeler için iletişim;
 * Contact for issues and corrections in this translation file;
 * Yücel Temel - (info@elektromanyetix.com) - https://elektromanyetix.com/
 *
 */

#define DISPLAY_CHARSET_ISO10646_TR
#define CHARSIZE 2
#define THIS_LANGUAGES_SPECIAL_SYMBOLS      _UxGT("İÖÇğüşöç³")

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" hazır.")
#define MSG_BACK                            _UxGT("Geri")
#define MSG_SD_INSERTED                     _UxGT("SD K. Yerleştirildi.")
#define MSG_SD_REMOVED                      _UxGT("SD Kart Çıkarıldı.")
#define MSG_LCD_ENDSTOPS                    _UxGT("Enstops") // Max length 8 characters
#define MSG_LCD_SOFT_ENDSTOPS               _UxGT("Yazılımsal Endstops")
#define MSG_MAIN                            _UxGT("Ana")
#define MSG_ADVANCED_SETTINGS               _UxGT("Gelişmiş Ayarlar")
#define MSG_CONFIGURATION                   _UxGT("Yapılandırma")
#define MSG_AUTOSTART                       _UxGT("Oto. Başlat")
#define MSG_DISABLE_STEPPERS                _UxGT("Motorları Durdur")
#define MSG_DEBUG_MENU                      _UxGT("Hata Ayıklama")
#define MSG_PROGRESS_BAR_TEST               _UxGT("Durum Çubuğu Testi")
#define MSG_AUTO_HOME                       _UxGT("Eksenleri Sıfırla")
#define MSG_AUTO_HOME_X                     _UxGT("X Sıfırla")
#define MSG_AUTO_HOME_Y                     _UxGT("Y Sıfırla")
#define MSG_AUTO_HOME_Z                     _UxGT("Z Sıfırla")
#define MSG_AUTO_Z_ALIGN                    _UxGT("Oto. Z-Hizalama")
#define MSG_LEVEL_BED_HOMING                _UxGT("XYZ Sıfırlanıyor")
#define MSG_LEVEL_BED_WAITING               _UxGT("Başlatmak için tıkla")
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("Sonraki Nokta")
#define MSG_LEVEL_BED_DONE                  _UxGT("Hizalama Tamam!")
#define MSG_Z_FADE_HEIGHT                   _UxGT("Kaçınma Yüksekliği")
#define MSG_SET_HOME_OFFSETS                _UxGT("Offset Ayarla")
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Offset Tamam")
#define MSG_SET_ORIGIN                      _UxGT("Sıfır Belirle")
#define MSG_PREHEAT_1                       _UxGT("Ön Isınma " PREHEAT_1_LABEL)
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" Tüm")
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 _UxGT(" Nozul")
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" Tabla")
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" Ayarlar")
#define MSG_PREHEAT_2                       _UxGT("Ön Isınma " PREHEAT_2_LABEL)
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" Tüm")
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 _UxGT(" Nozul")
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" Tabla")
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" Ayarlar")
#define MSG_PREHEAT_CUSTOM                  _UxGT("Özel Ön Isınma")
#define MSG_COOLDOWN                        _UxGT("Soğut")
#define MSG_SWITCH_PS_ON                    _UxGT("Gücü Aç")
#define MSG_SWITCH_PS_OFF                   _UxGT("Gücü Kapat")
#define MSG_EXTRUDE                         _UxGT("Ekstrüzyon")
#define MSG_RETRACT                         _UxGT("Geri Çek")
#define MSG_MOVE_AXIS                       _UxGT("Eksen Hareketleri")
#define MSG_BED_LEVELING                    _UxGT("Tabla Hizalama")
#define MSG_LEVEL_BED                       _UxGT("Tabla Hizası")
#define MSG_LEVEL_CORNERS                   _UxGT("Hizalama Köşeleri")
#define MSG_NEXT_CORNER                     _UxGT("Sonraki Köşe")
#define MSG_EDITING_STOPPED                 _UxGT("Mesh Düzenleme Durdu")
#define MSG_MESH_X                          _UxGT("İndeks X")
#define MSG_MESH_Y                          _UxGT("İndeks Y")
#define MSG_MESH_EDIT_Z                     _UxGT("Z Değeri")
#define MSG_USER_MENU                       _UxGT("Özel Komutlar")
#define MSG_UBL_DOING_G29                   _UxGT("G29 Çalışıyor")
#define MSG_UBL_UNHOMED                     _UxGT("Ilk XYZ Sıfırla")
#define MSG_UBL_TOOLS                       _UxGT("UBL Araçları")
#define MSG_UBL_LEVEL_BED                   _UxGT("UBL Yatak Hizalama")
#define MSG_IDEX_MENU                       _UxGT("IDEX Modu")
#define MSG_IDEX_MODE_AUTOPARK              _UxGT("Oto-Park")
#define MSG_IDEX_MODE_DUPLICATE             _UxGT("Kopyala")
#define MSG_IDEX_MODE_SCALED_COPY           _UxGT("Ölçeklenmiş Kopya")
#define MSG_IDEX_MODE_FULL_CTRL             _UxGT("Tam Kontrol")
#define MSG_IDEX_X_OFFSET                   _UxGT("2. nozul X")
#define MSG_IDEX_Y_OFFSET                   _UxGT("2. nozul Y")
#define MSG_IDEX_Z_OFFSET                   _UxGT("2. nozul Z")
#define MSG_IDEX_SAVE_OFFSETS               _UxGT("Ofsetleri Kaydet")
#define MSG_UBL_MANUAL_MESH                 _UxGT("Elle Mesh Oluştur")
#define MSG_UBL_BC_INSERT                   _UxGT("Altlık & Ölçü Ver")
#define MSG_UBL_BC_INSERT2                  _UxGT("Ölçü")
#define MSG_UBL_BC_REMOVE                   _UxGT("Yataktan Ölçü Kaldır")
#define MSG_UBL_MOVING_TO_NEXT              _UxGT("Sonrakine Git")
#define MSG_UBL_ACTIVATE_MESH               _UxGT("UBL'yi Etkinleştir")
#define MSG_UBL_DEACTIVATE_MESH             _UxGT("UBL'yi Etkisizleştir")
#define MSG_UBL_SET_TEMP_BED                _UxGT("Yatak Sıcaklığı")
#define MSG_UBL_BED_TEMP_CUSTOM             MSG_UBL_SET_TEMP_BED
#define MSG_UBL_SET_TEMP_HOTEND             _UxGT("Nozul Sıcaklığı")
#define MSG_UBL_HOTEND_TEMP_CUSTOM          MSG_UBL_SET_TEMP_HOTEND
#define MSG_UBL_MESH_EDIT                   _UxGT("Mesh Düzenleme")
#define MSG_UBL_EDIT_CUSTOM_MESH            _UxGT("Özel Mesh Düzenleme")
#define MSG_UBL_FINE_TUNE_MESH              _UxGT("İnce Ayar Mesh")
#define MSG_UBL_DONE_EDITING_MESH           _UxGT("Mesh Düzenleme Tamam")
#define MSG_UBL_BUILD_CUSTOM_MESH           _UxGT("Özel Mesh Oluştur")
#define MSG_UBL_BUILD_MESH_MENU             _UxGT("Mesh Oluştur")
#define MSG_UBL_BUILD_MESH_M1               _UxGT("Mesh Oluştur (" PREHEAT_1_LABEL ")")
#define MSG_UBL_BUILD_MESH_M2               _UxGT("Mesh Oluştur (" PREHEAT_2_LABEL ")")
#define MSG_UBL_BUILD_COLD_MESH             _UxGT("Soğuk Mesh Oluştur")
#define MSG_UBL_MESH_HEIGHT_ADJUST          _UxGT("Mesh Yükseklik Ayarı")
#define MSG_UBL_MESH_HEIGHT_AMOUNT          _UxGT("Yükseklik miktarı")
#define MSG_UBL_VALIDATE_MESH_MENU          _UxGT("Doğrulama Mesh")
#define MSG_UBL_VALIDATE_MESH_M1            _UxGT("Doğrulama Mesh (" PREHEAT_1_LABEL ")")
#define MSG_UBL_VALIDATE_MESH_M2            _UxGT("Doğrulama Mesh (" PREHEAT_2_LABEL ")")
#define MSG_UBL_VALIDATE_CUSTOM_MESH        _UxGT("Özel Mesh Doğrulama")
#define MSG_UBL_CONTINUE_MESH               _UxGT("Tabla Mesh Devam et")
#define MSG_UBL_MESH_LEVELING               _UxGT("Mesh Hizalama")
#define MSG_UBL_3POINT_MESH_LEVELING        _UxGT("3-Nokta Hizalama")
#define MSG_UBL_GRID_MESH_LEVELING          _UxGT("Kafes Mesh Hizalama")
#define MSG_UBL_MESH_LEVEL                  _UxGT("Mesh Seviyesi")
#define MSG_UBL_SIDE_POINTS                 _UxGT("Yan Noktalar")
#define MSG_UBL_MAP_TYPE                    _UxGT("Haritalama Türü")
#define MSG_UBL_OUTPUT_MAP                  _UxGT("Mesh Çıkış Haritası")
#define MSG_UBL_OUTPUT_MAP_HOST             _UxGT("Host için Çıktı")
#define MSG_UBL_OUTPUT_MAP_CSV              _UxGT("CSV için Çıktı")
#define MSG_UBL_OUTPUT_MAP_BACKUP           _UxGT("Yazıcıda Yedek Kpalı")
#define MSG_UBL_INFO_UBL                    _UxGT("UBL Çıkış Bilgisi")
#define MSG_EDIT_MESH                       _UxGT("Mesh Düzenle")
#define MSG_UBL_FILLIN_AMOUNT               _UxGT("Dolgu Miktarı")
#define MSG_UBL_MANUAL_FILLIN               _UxGT("Manuel Dolgu")
#define MSG_UBL_SMART_FILLIN                _UxGT("Akıllı Dogu")
#define MSG_UBL_FILLIN_MESH                 _UxGT("Mesh Dolgu")
#define MSG_UBL_INVALIDATE_ALL              _UxGT("Tümünü Geçersiz Kıl")
#define MSG_UBL_INVALIDATE_CLOSEST          _UxGT("Yakını Geçersiz Kıl")
#define MSG_UBL_FINE_TUNE_ALL               _UxGT("Tümünü İnce Ayarla")
#define MSG_UBL_FINE_TUNE_CLOSEST           _UxGT("Yakını İnce Ayarla")
#define MSG_UBL_STORAGE_MESH_MENU           _UxGT("Mesh Depolama")
#define MSG_UBL_STORAGE_SLOT                _UxGT("Bellek Yuvası")
#define MSG_UBL_LOAD_MESH                   _UxGT("Yatak Mesh Yükle")
#define MSG_UBL_SAVE_MESH                   _UxGT("Yatak Mesh Kayıt Et")
#define MSG_MESH_LOADED                     _UxGT("Mesh %i yüklendi")
#define MSG_MESH_SAVED                      _UxGT("Mesh %i kayıtlandı")
#define MSG_NO_STORAGE                      _UxGT("Depolama Yok")
#define MSG_UBL_SAVE_ERROR                  _UxGT("Hata: UBL Kayıt")
#define MSG_UBL_RESTORE_ERROR               _UxGT("Hata: UBL Yenileme")
#define MSG_UBL_Z_OFFSET_STOPPED            _UxGT("Z-Ofset Durduruldu")
#define MSG_UBL_STEP_BY_STEP_MENU           _UxGT("Adım Adım UBL")
#define MSG_LED_CONTROL                     _UxGT("LED Kontrolü")
#define MSG_LEDS                            _UxGT("Işıklar")
#define MSG_LED_PRESETS                     _UxGT("Işık Hazır Ayarları")
#define MSG_SET_LEDS_RED                    _UxGT("Kırmızı")
#define MSG_SET_LEDS_ORANGE                 _UxGT("Turuncu")
#define MSG_SET_LEDS_YELLOW                 _UxGT("Sarı")
#define MSG_SET_LEDS_GREEN                  _UxGT("Yeşil")
#define MSG_SET_LEDS_BLUE                   _UxGT("Mavi")
#define MSG_SET_LEDS_INDIGO                 _UxGT("Lacivert")
#define MSG_SET_LEDS_VIOLET                 _UxGT("Menekşe")
#define MSG_SET_LEDS_WHITE                  _UxGT("Beyaz")
#define MSG_SET_LEDS_DEFAULT                _UxGT("Varsayılan")
#define MSG_CUSTOM_LEDS                     _UxGT("Özel Işıklar")
#define MSG_INTENSITY_R                     _UxGT("Kırmızı Şiddeti")
#define MSG_INTENSITY_G                     _UxGT("Yeşil Şiddeti")
#define MSG_INTENSITY_B                     _UxGT("Mavi Şiddeti")
#define MSG_INTENSITY_W                     _UxGT("Beyaz Şiddeti")
#define MSG_LED_BRIGHTNESS                  _UxGT("Parlaklık")
#define MSG_MOVING                          _UxGT("Hareket Ediyor..")
#define MSG_FREE_XY                         _UxGT("Durdur XY")
#define MSG_MOVE_X                          _UxGT("X Hareketi")
#define MSG_MOVE_Y                          _UxGT("Y Hareketi")
#define MSG_MOVE_Z                          _UxGT("Z Hareketi")
#define MSG_MOVE_E                          _UxGT("Ekstruder")
#define MSG_HOTEND_TOO_COLD                 _UxGT("Nozul Çok Soğuk")
#define MSG_MOVE_01MM                       _UxGT("0.1mm")
#define MSG_MOVE_1MM                        _UxGT("1mm")
#define MSG_MOVE_10MM                       _UxGT("10mm")
#define MSG_SPEED                           _UxGT("Hız")
#define MSG_BED_Z                           _UxGT("Z Mesafesi")
#define MSG_NOZZLE                          _UxGT("Nozul")
#define MSG_BED                             _UxGT("Tabla")
#define MSG_FAN_SPEED                       _UxGT("Fan Hızı")
#define MSG_EXTRA_FAN_SPEED                 _UxGT("Ekstra Fan Hızı")
#define MSG_FLOW                            _UxGT("Akış")
#define MSG_CONTROL                         _UxGT("Kontrol")
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Min")
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Max")
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Çarpan")
#define MSG_AUTOTEMP                        _UxGT("Oto. Sıcaklık")
#define MSG_LCD_ON                          _UxGT("Açık")
#define MSG_LCD_OFF                         _UxGT("Kapalı")
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_SELECT                          _UxGT("Seç")
#define MSG_ACC                             _UxGT("İvme")
#define MSG_JERK                            _UxGT("Sarsım")
#if IS_KINEMATIC
  #define MSG_VA_JERK                       _UxGT("Va-Sarsım")
  #define MSG_VB_JERK                       _UxGT("Vb-Sarsım")
  #define MSG_VC_JERK                       _UxGT("Vc-Sarsım")
#else
  #define MSG_VA_JERK                       _UxGT("Vx-Sarsım")
  #define MSG_VB_JERK                       _UxGT("Vy-Sarsım")
  #define MSG_VC_JERK                       _UxGT("Vz-Sarsım")
#endif
#define MSG_VE_JERK                         _UxGT("Ve-Sarsım")
#define MSG_JUNCTION_DEVIATION              _UxGT("Jonksiyon Sapması")
#define MSG_VELOCITY                        _UxGT("Hız Vektörü")
#define MSG_VMAX                            _UxGT("HızVektör.max ")
#define MSG_VMIN                            _UxGT("HızVektör.min")
#define MSG_VTRAV_MIN                       _UxGT("HV.gezinme min")
#define MSG_ACCELERATION                    _UxGT("Ivme")
#define MSG_AMAX                            _UxGT("Max. ivme ")
#define MSG_A_RETRACT                       _UxGT("Ivme-geri çekme")
#define MSG_A_TRAVEL                        _UxGT("Ivme-gezinme")
#define MSG_STEPS_PER_MM                    _UxGT("Adım/mm")
#if IS_KINEMATIC
  #define MSG_ASTEPS                        _UxGT("A adım/mm")
  #define MSG_BSTEPS                        _UxGT("B adım/mm")
  #define MSG_CSTEPS                        _UxGT("C adım/mm")
#else
  #define MSG_ASTEPS                        _UxGT("X adım/mm")
  #define MSG_BSTEPS                        _UxGT("Y adım/mm")
  #define MSG_CSTEPS                        _UxGT("Z adım/mm")
#endif
#define MSG_ESTEPS                          _UxGT("E adım/mm")
#define MSG_E1STEPS                         _UxGT("E1 adım/mm")
#define MSG_E2STEPS                         _UxGT("E2 adım/mm")
#define MSG_E3STEPS                         _UxGT("E3 adım/mm")
#define MSG_E4STEPS                         _UxGT("E4 adım/mm")
#define MSG_E5STEPS                         _UxGT("E5 adım/mm")
#define MSG_E6STEPS                         _UxGT("E6 adım/mm")
#define MSG_TEMPERATURE                     _UxGT("Sıcaklık")
#define MSG_MOTION                          _UxGT("Hareket")
#define MSG_FILAMENT                        _UxGT("Filaman")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("Ekstrüzyon/mm³")
#define MSG_FILAMENT_DIAM                   _UxGT("Filaman Çapı")
#define MSG_FILAMENT_UNLOAD                 _UxGT("Çıkart mm")
#define MSG_FILAMENT_LOAD                   _UxGT("Yükle mm")
#define MSG_ADVANCE_K                       _UxGT("K İlerlet")
#define MSG_CONTRAST                        _UxGT("LCD Kontrast")
#define MSG_STORE_EEPROM                    _UxGT("Hafızaya Al")
#define MSG_LOAD_EEPROM                     _UxGT("Hafızadan Yükle")
#define MSG_RESTORE_FAILSAFE                _UxGT("Fabrika Ayarları")
#define MSG_INIT_EEPROM                     _UxGT("EEPROM'u başlat")
#define MSG_SD_UPDATE                       _UxGT("SD Güncellemesi")
#define MSG_RESET_PRINTER                   _UxGT("Yazıcıyı Resetle")
#define MSG_REFRESH                         _UxGT("Yenile")
#define MSG_WATCH                           _UxGT("Bilgi Ekranı")
#define MSG_PREPARE                         _UxGT("Hazırlık")
#define MSG_TUNE                            _UxGT("Ayar")
#define MSG_PAUSE_PRINT                     _UxGT("Duraklat")
#define MSG_RESUME_PRINT                    _UxGT("Sürdür")
#define MSG_STOP_PRINT                      _UxGT("Durdur")
#define MSG_OUTAGE_RECOVERY                 _UxGT("Kesinti Kurtarma")
#define MSG_CARD_MENU                       _UxGT("SD Karttan Yazdır")
#define MSG_NO_CARD                         _UxGT("SD Kart Yok!")
#define MSG_DWELL                           _UxGT("Uyku...")
#define MSG_USERWAIT                        _UxGT("Operatör bekleniyor.")
#define MSG_PRINT_PAUSED                    _UxGT("Baskı Duraklatıldı")
#define MSG_PRINTING                        _UxGT("Baskı Yapılıyor...")
#define MSG_PRINT_ABORTED                   _UxGT("Baskı Durduruldu!")
#define MSG_NO_MOVE                         _UxGT("İşlem yok.")
#define MSG_KILLED                          _UxGT("Kilitlendi. ")
#define MSG_STOPPED                         _UxGT("Durdu. ")
#define MSG_CONTROL_RETRACT                 _UxGT("Geri Çek mm")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("Swap Re.mm")
#define MSG_CONTROL_RETRACTF                _UxGT("Geri Çekme V")
#define MSG_CONTROL_RETRACT_ZHOP            _UxGT("Atlama mm")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("S UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("UnRet  V")
#define MSG_CONTROL_RETRACT_RECOVER_SWAPF   _UxGT("S UnRet V")
#define MSG_AUTORETRACT                     _UxGT("Oto. Geri Çekme")
#define MSG_FILAMENT_SWAP_LENGTH            _UxGT("G.Çekme Boyu")
#define MSG_TOOL_CHANGE                     _UxGT("Takım Değişimi")
#define MSG_TOOL_CHANGE_ZLIFT               _UxGT("Z Yükselt")
#define MSG_SINGLENOZZLE_PRIME_SPD          _UxGT("Birincil Hız")
#define MSG_SINGLENOZZLE_RETRACT_SPD        _UxGT("Geri Çekme Hızı")
#define MSG_FILAMENTCHANGE                  _UxGT("Filaman Değiştir")
#define MSG_FILAMENTLOAD                    _UxGT("Filaman Yükle")
#define MSG_FILAMENTUNLOAD                  _UxGT("Filaman Çıkart")
#define MSG_FILAMENTUNLOAD_ALL              _UxGT("Tümünü Çıkart")
#define MSG_INIT_SDCARD                     _UxGT("SD Kart Başlatılıyor")
#define MSG_CHANGE_SDCARD                   _UxGT("SD Kart Değiştir")
#define MSG_ZPROBE_OUT                      _UxGT("Z Prob Açık. Tabla")
#define MSG_SKEW_FACTOR                     _UxGT("Çarpıklık Faktörü")
#define MSG_BLTOUCH                         _UxGT("BLTouch")
#define MSG_BLTOUCH_SELFTEST                _UxGT("BLTouch Self-Test")
#define MSG_BLTOUCH_RESET                   _UxGT("Sıfırla BLTouch")
#define MSG_BLTOUCH_DEPLOY                  _UxGT("BLTouch Aç")
#define MSG_BLTOUCH_STOW                    _UxGT("BLTouch Kapat")
#define MSG_MANUAL_DEPLOY                   _UxGT("Z-Prob Aç")
#define MSG_MANUAL_STOW                     _UxGT("Z-Sensör Kapat")
#define MSG_HOME                            _UxGT("Sıfırla")
#define MSG_FIRST                           _UxGT("Önce")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Z Offset")
#define MSG_BABYSTEP_X                      _UxGT("Miniadım X")
#define MSG_BABYSTEP_Y                      _UxGT("Miniadım Y")
#define MSG_BABYSTEP_Z                      _UxGT("Miniadım Z")
#define MSG_ENDSTOP_ABORT                   _UxGT("Endstop iptal")
#define MSG_HEATING_FAILED_LCD              _UxGT("Isınma başarısız")
#define MSG_HEATING_FAILED_LCD_BED          _UxGT("Yatak Isınma Başrsız")
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("Hata: Sıcaklık Aşımı")
#define MSG_THERMAL_RUNAWAY                 _UxGT("TERMAL PROBLEM")
#define MSG_THERMAL_RUNAWAY_BED             _UxGT("TABLA TERMAL PROBLEM")
#define MSG_ERR_MAXTEMP                     _UxGT("Hata: MAX.SICAKLIK")
#define MSG_ERR_MINTEMP                     _UxGT("Hata: MIN.SICAKLIK")
#define MSG_ERR_MAXTEMP_BED                 _UxGT("Hata: MAX.SIC. TABLA")
#define MSG_ERR_MINTEMP_BED                 _UxGT("Hata: MIN.SIC. TABLA")
#define MSG_ERR_Z_HOMING                    _UxGT("Önce XY Sıfırla")
#define MSG_HALTED                          _UxGT("YAZICI DURDURULDU")
#define MSG_PLEASE_RESET                    _UxGT("Lütfen Resetleyin")
#define MSG_SHORT_DAY                       _UxGT("G") // One character only
#define MSG_SHORT_HOUR                      _UxGT("S") // One character only
#define MSG_SHORT_MINUTE                    _UxGT("D") // One character only
#define MSG_HEATING                         _UxGT("Isınıyor...")
#define MSG_COOLING                         _UxGT("Soğuyor...")
#define MSG_BED_HEATING                     _UxGT("Tabla Isınıyor...")
#define MSG_BED_COOLING                     _UxGT("Tabla Soğuyor...")
#define MSG_DELTA_CALIBRATE                 _UxGT("Delta Kalibrasyonu")
#define MSG_DELTA_CALIBRATE_X               _UxGT("Ayarla X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Ayarla Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Ayarla Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("Ayarla Merkez")
#define MSG_DELTA_SETTINGS                  _UxGT("Delta Ayarları")
#define MSG_DELTA_AUTO_CALIBRATE            _UxGT("Oto Kalibrasyon")
#define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("Delta Yük. Ayarla")
#define MSG_DELTA_Z_OFFSET_CALIBRATE        _UxGT("Z Prob Ofseti")
#define MSG_DELTA_DIAG_ROD                  _UxGT("Çapral Mil")
#define MSG_DELTA_HEIGHT                    _UxGT("Yükseklik")
#define MSG_DELTA_RADIUS                    _UxGT("Yarıçap")
#define MSG_INFO_MENU                       _UxGT("Yazıcı Hakkında")
#define MSG_INFO_PRINTER_MENU               _UxGT("Yazıcı Bilgisi")
#define MSG_3POINT_LEVELING                 _UxGT("3-Nokta Hizalama")
#define MSG_LINEAR_LEVELING                 _UxGT("Doğrusal Hizalama")
#define MSG_BILINEAR_LEVELING               _UxGT("İki Yönlü Doğ. Hiza.")
#define MSG_UBL_LEVELING                    _UxGT("Birleşik Tabla Hiza.")
#define MSG_MESH_LEVELING                   _UxGT("Mesh Hizalama")
#define MSG_INFO_STATS_MENU                 _UxGT("İstatistikler")
#define MSG_INFO_BOARD_MENU                 _UxGT("Kontrolcü Bilgisi")
#define MSG_INFO_THERMISTOR_MENU            _UxGT("Termistörler")
#define MSG_INFO_EXTRUDERS                  _UxGT("Ekstruderler")
#define MSG_INFO_BAUDRATE                   _UxGT("İletişim Hızı")
#define MSG_INFO_PROTOCOL                   _UxGT("Protokol")
#define MSG_CASE_LIGHT                      _UxGT("Aydınlatmayı Aç")
#define MSG_CASE_LIGHT_BRIGHTNESS           _UxGT("Aydınlatma Parlaklğı")
#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              _UxGT("Baskı Sayısı")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Tamamlanan")
  #define MSG_INFO_PRINT_TIME               _UxGT("Toplam Baskı Süresi")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("En Uzun Baskı Süresi")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Toplam Filaman")
#else
  #define MSG_INFO_PRINT_COUNT              _UxGT("Baskı")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Tamamlanan")
  #define MSG_INFO_PRINT_TIME               _UxGT("Süre")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("En Uzun")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Filaman")
#endif
#define MSG_INFO_MIN_TEMP                   _UxGT("Min Sıc.")
#define MSG_INFO_MAX_TEMP                   _UxGT("Max Sıc.")
#define MSG_INFO_PSU                        _UxGT("Güç Kaynağı")
#define MSG_DRIVE_STRENGTH                  _UxGT("Sürücü Gücü")
#define MSG_DAC_PERCENT                     _UxGT("Sürücü %")
#define MSG_DAC_EEPROM_WRITE                _UxGT("DAC EEPROM Yaz")
#define MSG_FILAMENT_CHANGE_HEADER_PAUSE    _UxGT("BASKI DURAKLATILDI")
#define MSG_FILAMENT_CHANGE_HEADER_LOAD     _UxGT("FILAMAN YüKLE")
#define MSG_FILAMENT_CHANGE_HEADER_UNLOAD   _UxGT("FILAMAN ÇIKART")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("Seçenekler:")
#define MSG_FILAMENT_CHANGE_OPTION_PURGE    _UxGT("Daha Fazla Tasviye")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("Baskıyı sürdür")
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  Nozul: ")
#define MSG_RUNOUT_SENSOR                   _UxGT("Runout Sensörü")
#define MSG_ERR_HOMING_FAILED               _UxGT("Sıfırlama Başarısız")
#define MSG_ERR_PROBING_FAILED              _UxGT("Probing Başarısız")
#define MSG_M600_TOO_COLD                   _UxGT("M600: Çok Soğuk")
//
// Filament Değiştirme ekranları, 4 satırlı bir ekranda 3 satıra kadar gösterilir
//                        ...veya 3 satırlı ekranda 2 satıra kadar
#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_ADVANCED_PAUSE_WAITING_1      _UxGT("Baskıya devam etmek")
  #define MSG_ADVANCED_PAUSE_WAITING_2      _UxGT("için Butona bas")
  #define MSG_FILAMENT_CHANGE_INIT_1        _UxGT("Filaman değişimi")
  #define MSG_FILAMENT_CHANGE_INIT_2        _UxGT("için başlama")
  #define MSG_FILAMENT_CHANGE_INIT_3        _UxGT("bekleniyor")
  #define MSG_FILAMENT_CHANGE_INSERT_1      _UxGT("Filamanı yükle")
  #define MSG_FILAMENT_CHANGE_INSERT_2      _UxGT("ve devam için")
  #define MSG_FILAMENT_CHANGE_INSERT_3      _UxGT("tuşa bas...")
  #define MSG_FILAMENT_CHANGE_HEAT_1        _UxGT("Nozulü Isıtmak için")
  #define MSG_FILAMENT_CHANGE_HEAT_2        _UxGT("Butona Bas.")
  #define MSG_FILAMENT_CHANGE_HEATING_1     _UxGT("Nozul Isınıyor")
  #define MSG_FILAMENT_CHANGE_HEATING_2     _UxGT("Lütfen Bekleyin...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      _UxGT("Filamanın çıkması")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2      _UxGT("bekleniyor")
  #define MSG_FILAMENT_CHANGE_LOAD_1        _UxGT("Filamanın yüklenmesi")
  #define MSG_FILAMENT_CHANGE_LOAD_2        _UxGT("bekleniyor..")
  #define MSG_FILAMENT_CHANGE_PURGE_1       _UxGT("Filaman Temizlemesi")
  #define MSG_FILAMENT_CHANGE_PURGE_2       _UxGT("için bekle")
  #define MSG_FILAMENT_CHANGE_CONT_PURGE_1  _UxGT("Filaman Temizlemesi")
  #define MSG_FILAMENT_CHANGE_CONT_PURGE_2  _UxGT("bitirmek için tıkla")
  #define MSG_FILAMENT_CHANGE_RESUME_1      _UxGT("Baskının devam ")
  #define MSG_FILAMENT_CHANGE_RESUME_2      _UxGT("etmesi için bekle")
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_ADVANCED_PAUSE_WAITING_1      _UxGT("Sürdürmek İçin Tıkla")
  #define MSG_FILAMENT_CHANGE_INIT_1        _UxGT("Lütfen bekleyiniz...")
  #define MSG_FILAMENT_CHANGE_INSERT_1      _UxGT("Yükle ve bas")
  #define MSG_FILAMENT_CHANGE_HEAT_1        _UxGT("Isıtmak için Tıkla")
  #define MSG_FILAMENT_CHANGE_HEATING_1     _UxGT("Isınıyor...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      _UxGT("Çıkartılıyor...")
  #define MSG_FILAMENT_CHANGE_LOAD_1        _UxGT("Yüklüyor...")
  #define MSG_FILAMENT_CHANGE_PURGE_1       _UxGT("Temizleniyor...")
  #define MSG_FILAMENT_CHANGE_CONT_PURGE_1  _UxGT("Bitirmek için Tıkla")
  #define MSG_FILAMENT_CHANGE_RESUME_1      _UxGT("Sürdürülüyor...")
#endif // LCD_HEIGHT < 4
