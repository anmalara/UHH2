#pragma once

#include <vector>
#include <string>

/* namespace to define some useful filename constants to be used for jet energy corrections */

namespace JERFiles{

  /* The idea of the following preprocessor directives is to simplify the creation of new JEC input files.
  MC and DATA are treated separately by choice: this is mainly becuase of how JEC are developed.
  Different corrections are applied for MC and Data. Those should stay fixed or follow JME reccomendations.
  Files for Data are created for each run separately.
  */

  #define DEFINE_CORRECTION_MC(tag,ver,jetCollection,Correction)                            \
  extern const std::vector<std::string> tag##_V##ver##_##Correction##_##jetCollection##_MC; \

#define DEFINE_CORRECTION_DATA2016(tag,ver,jetCollection,Correction)	\
  extern const std::vector<std::string> tag##_V##ver##_B_##Correction##_##jetCollection##_DATA;   \
  extern const std::vector<std::string> tag##_V##ver##_C_##Correction##_##jetCollection##_DATA;   \
  extern const std::vector<std::string> tag##_V##ver##_D_##Correction##_##jetCollection##_DATA;   \
  extern const std::vector<std::string> tag##_V##ver##_E_##Correction##_##jetCollection##_DATA;   \
  extern const std::vector<std::string> tag##_V##ver##_F_##Correction##_##jetCollection##_DATA;   \
  extern const std::vector<std::string> tag##_V##ver##_G_##Correction##_##jetCollection##_DATA;   \
  extern const std::vector<std::string> tag##_V##ver##_H_##Correction##_##jetCollection##_DATA;   \

#define DEFINE_CORRECTION_DATA2017(tag,ver,jetCollection,Correction)	\
  extern const std::vector<std::string> tag##_V##ver##_B_##Correction##_##jetCollection##_DATA;   \
  extern const std::vector<std::string> tag##_V##ver##_C_##Correction##_##jetCollection##_DATA;   \
  extern const std::vector<std::string> tag##_V##ver##_D_##Correction##_##jetCollection##_DATA;   \
  extern const std::vector<std::string> tag##_V##ver##_E_##Correction##_##jetCollection##_DATA;   \
  extern const std::vector<std::string> tag##_V##ver##_F_##Correction##_##jetCollection##_DATA;   \

#define DEFINE_CORRECTION_DATA2018(tag,ver,jetCollection,Correction)	\
  extern const std::vector<std::string> tag##_V##ver##_A_##Correction##_##jetCollection##_DATA;   \
  extern const std::vector<std::string> tag##_V##ver##_B_##Correction##_##jetCollection##_DATA;   \
  extern const std::vector<std::string> tag##_V##ver##_C_##Correction##_##jetCollection##_DATA;   \
  extern const std::vector<std::string> tag##_V##ver##_D_##Correction##_##jetCollection##_DATA;   \


  #define DEFINE_JECFILES_MC(tag,ver,jetCollection)     \
  DEFINE_CORRECTION_MC(tag,ver,jetCollection,L123)      \
  DEFINE_CORRECTION_MC(tag,ver,jetCollection,L1RC)      \
  DEFINE_CORRECTION_MC(tag,ver,jetCollection,L1FastJet) \

  #define DEFINE_JECFILES_DATA2016(tag,ver,jetCollection)       \
  DEFINE_CORRECTION_DATA2016(tag,ver,jetCollection,L123)        \
  DEFINE_CORRECTION_DATA2016(tag,ver,jetCollection,L1RC)        \
  DEFINE_CORRECTION_DATA2016(tag,ver,jetCollection,L1FastJet)   \
  DEFINE_CORRECTION_DATA2016(tag,ver,jetCollection,L123_noRes)  \

  #define DEFINE_JECFILES_DATA2017(tag,ver,jetCollection)       \
  DEFINE_CORRECTION_DATA2017(tag,ver,jetCollection,L123)        \
  DEFINE_CORRECTION_DATA2017(tag,ver,jetCollection,L1RC)        \
  DEFINE_CORRECTION_DATA2017(tag,ver,jetCollection,L1FastJet)   \
  DEFINE_CORRECTION_DATA2017(tag,ver,jetCollection,L123_noRes)  \

  #define DEFINE_JECFILES_DATA2018(tag,ver,jetCollection)       \
  DEFINE_CORRECTION_DATA2018(tag,ver,jetCollection,L123)        \
  DEFINE_CORRECTION_DATA2018(tag,ver,jetCollection,L1RC)        \
  DEFINE_CORRECTION_DATA2018(tag,ver,jetCollection,L1FastJet)   \
  DEFINE_CORRECTION_DATA2018(tag,ver,jetCollection,L123_noRes)  \

  /* Here we define the new vectors. The usage is the following:
  DEFINE_JECFILES_*( a tag to identify which JEC use ,version, jet collection used)
  */

  //2016, official Moriond19
  DEFINE_JECFILES_MC(Summer16_07Aug2017,11,AK4PFchs) 
  DEFINE_JECFILES_MC(Summer16_07Aug2017,11,AK4PFPuppi) 
  DEFINE_JECFILES_MC(Summer16_07Aug2017,11,AK8PFchs) 
  DEFINE_JECFILES_MC(Summer16_07Aug2017,11,AK8PFPuppi) 
  DEFINE_JECFILES_DATA2016(Summer16_07Aug2017,11,AK4PFchs) 
  DEFINE_JECFILES_DATA2016(Summer16_07Aug2017,11,AK4PFPuppi) 
  DEFINE_JECFILES_DATA2016(Summer16_07Aug2017,11,AK8PFchs) 
  DEFINE_JECFILES_DATA2016(Summer16_07Aug2017,11,AK8PFPuppi) 
  //2016, JERC legacy studies
  DEFINE_JECFILES_MC(Summer16_07Aug2017,20,AK4PFchs) 
  DEFINE_JECFILES_DATA2016(Summer16_07Aug2017,20,AK4PFchs) 

  //2017, official Moriond19
  DEFINE_JECFILES_MC(Fall17_17Nov2017,32,AK4PFchs)
  DEFINE_JECFILES_MC(Fall17_17Nov2017,32,AK4PFPuppi)
  DEFINE_JECFILES_MC(Fall17_17Nov2017,32,AK8PFchs)
  DEFINE_JECFILES_MC(Fall17_17Nov2017,32,AK8PFPuppi)
  DEFINE_JECFILES_DATA2017(Fall17_17Nov2017,32,AK4PFchs)
  DEFINE_JECFILES_DATA2017(Fall17_17Nov2017,32,AK4PFPuppi)
  DEFINE_JECFILES_DATA2017(Fall17_17Nov2017,32,AK8PFchs)
  DEFINE_JECFILES_DATA2017(Fall17_17Nov2017,32,AK8PFPuppi)

  //2018, official Moriond19
  DEFINE_JECFILES_MC(Autumn18,8,AK4PFchs)
  DEFINE_JECFILES_MC(Autumn18,8,AK4PFPuppi)
  DEFINE_JECFILES_MC(Autumn18,8,AK8PFchs)
  DEFINE_JECFILES_MC(Autumn18,8,AK8PFPuppi)
  DEFINE_JECFILES_DATA2018(Autumn18,8,AK4PFchs)
  DEFINE_JECFILES_DATA2018(Autumn18,8,AK4PFPuppi)
  DEFINE_JECFILES_DATA2018(Autumn18,8,AK8PFchs)
  DEFINE_JECFILES_DATA2018(Autumn18,8,AK8PFPuppi)

  //2018, temporary version
  DEFINE_JECFILES_MC(Autumn18,4,AK4PFchs)
  DEFINE_JECFILES_MC(Autumn18,4,AK4PFPuppi)
  DEFINE_JECFILES_MC(Autumn18,4,AK8PFchs)
  DEFINE_JECFILES_MC(Autumn18,4,AK8PFPuppi)
  DEFINE_JECFILES_DATA2018(Autumn18,4,AK4PFchs)
  DEFINE_JECFILES_DATA2018(Autumn18,4,AK4PFPuppi)
  DEFINE_JECFILES_DATA2018(Autumn18,4,AK8PFchs)
  DEFINE_JECFILES_DATA2018(Autumn18,4,AK8PFPuppi)

  //2018, temporary version
  DEFINE_JECFILES_MC(Autumn18,7,AK4PFchs)
  DEFINE_JECFILES_MC(Autumn18,7,AK4PFPuppi)
  DEFINE_JECFILES_MC(Autumn18,7,AK8PFchs)
  DEFINE_JECFILES_MC(Autumn18,7,AK8PFPuppi)
  DEFINE_JECFILES_DATA2018(Autumn18,7,AK4PFchs)
  DEFINE_JECFILES_DATA2018(Autumn18,7,AK4PFPuppi)
  DEFINE_JECFILES_DATA2018(Autumn18,7,AK8PFchs)
  DEFINE_JECFILES_DATA2018(Autumn18,7,AK8PFPuppi)

}