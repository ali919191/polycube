/**
* packetcapture API generated from packetcapture.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */

/*
* GlobalheaderJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"


namespace polycube {
namespace service {
namespace model {


/// <summary>
///
/// </summary>
class  GlobalheaderJsonObject : public JsonObjectBase {
public:
  GlobalheaderJsonObject();
  GlobalheaderJsonObject(const nlohmann::json &json);
  ~GlobalheaderJsonObject() final = default;
  nlohmann::json toJson() const final;


  /// <summary>
  /// magic number
  /// </summary>
  uint32_t getMagic() const;
  void setMagic(uint32_t value);
  bool magicIsSet() const;
  void unsetMagic();

  /// <summary>
  /// major version number
  /// </summary>
  uint16_t getVersionMajor() const;
  void setVersionMajor(uint16_t value);
  bool versionMajorIsSet() const;
  void unsetVersionMajor();

  /// <summary>
  /// minor version number
  /// </summary>
  uint16_t getVersionMinor() const;
  void setVersionMinor(uint16_t value);
  bool versionMinorIsSet() const;
  void unsetVersionMinor();

  /// <summary>
  /// GMT to local correction
  /// </summary>
  int32_t getThiszone() const;
  void setThiszone(int32_t value);
  bool thiszoneIsSet() const;
  void unsetThiszone();

  /// <summary>
  /// accuracy of timestamps
  /// </summary>
  uint32_t getSigfigs() const;
  void setSigfigs(uint32_t value);
  bool sigfigsIsSet() const;
  void unsetSigfigs();

  /// <summary>
  /// max length of captured packets, in octets
  /// </summary>
  uint32_t getSnaplen() const;
  void setSnaplen(uint32_t value);
  bool snaplenIsSet() const;
  void unsetSnaplen();

  /// <summary>
  /// Capture linktype (eg. ethernet, wifi..)
  /// </summary>
  uint32_t getLinktype() const;
  void setLinktype(uint32_t value);
  bool linktypeIsSet() const;
  void unsetLinktype();

private:
  uint32_t m_magic;
  bool m_magicIsSet;
  uint16_t m_versionMajor;
  bool m_versionMajorIsSet;
  uint16_t m_versionMinor;
  bool m_versionMinorIsSet;
  int32_t m_thiszone;
  bool m_thiszoneIsSet;
  uint32_t m_sigfigs;
  bool m_sigfigsIsSet;
  uint32_t m_snaplen;
  bool m_snaplenIsSet;
  uint32_t m_linktype;
  bool m_linktypeIsSet;
};

}
}
}
