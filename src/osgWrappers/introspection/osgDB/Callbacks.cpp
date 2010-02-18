// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Image>
#include <osg/Node>
#include <osg/Object>
#include <osg/Shader>
#include <osg/Shape>
#include <osgDB/Callbacks>
#include <osgDB/Options>
#include <osgDB/ReaderWriter>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osgDB::FileLocationCallback::Location)
	I_DeclaringFile("osgDB/Callbacks");
	I_EnumLabel(osgDB::FileLocationCallback::LOCAL_FILE);
	I_EnumLabel(osgDB::FileLocationCallback::REMOTE_FILE);
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgDB::FileLocationCallback)
	I_DeclaringFile("osgDB/Callbacks");
	I_VirtualBaseType(osg::Referenced);
	I_Constructor0(____FileLocationCallback,
	               "",
	               "");
	I_Method2(osgDB::FileLocationCallback::Location, fileLocation, IN, const std::string &, filename, IN, const osgDB::Options *, options,
	          Properties::PURE_VIRTUAL,
	          __Location__fileLocation__C5_std_string_R1__C5_Options_P1,
	          "",
	          "");
	I_Method0(bool, useFileCache,
	          Properties::PURE_VIRTUAL,
	          __bool__useFileCache,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgDB::FindFileCallback)
	I_DeclaringFile("osgDB/Callbacks");
	I_VirtualBaseType(osg::Referenced);
	I_Constructor0(____FindFileCallback,
	               "",
	               "");
	I_Method3(std::string, findDataFile, IN, const std::string &, filename, IN, const osgDB::Options *, options, IN, osgDB::CaseSensitivity, caseSensitivity,
	          Properties::VIRTUAL,
	          __std_string__findDataFile__C5_std_string_R1__C5_Options_P1__CaseSensitivity,
	          "",
	          "");
	I_Method3(std::string, findLibraryFile, IN, const std::string &, filename, IN, const osgDB::Options *, options, IN, osgDB::CaseSensitivity, caseSensitivity,
	          Properties::VIRTUAL,
	          __std_string__findLibraryFile__C5_std_string_R1__C5_Options_P1__CaseSensitivity,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgDB::ReadFileCallback)
	I_DeclaringFile("osgDB/Callbacks");
	I_VirtualBaseType(osg::Referenced);
	I_Constructor0(____ReadFileCallback,
	               "",
	               "");
	I_Method4(osgDB::ReaderWriter::ReadResult, openArchive, IN, const std::string &, filename, IN, osgDB::ReaderWriter::ArchiveStatus, status, IN, unsigned int, indexBlockSizeHint, IN, const osgDB::Options *, useObjectCache,
	          Properties::VIRTUAL,
	          __ReaderWriter_ReadResult__openArchive__C5_std_string_R1__ReaderWriter_ArchiveStatus__unsigned_int__C5_Options_P1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::ReadResult, readObject, IN, const std::string &, filename, IN, const osgDB::Options *, options,
	          Properties::VIRTUAL,
	          __ReaderWriter_ReadResult__readObject__C5_std_string_R1__C5_Options_P1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::ReadResult, readImage, IN, const std::string &, filename, IN, const osgDB::Options *, options,
	          Properties::VIRTUAL,
	          __ReaderWriter_ReadResult__readImage__C5_std_string_R1__C5_Options_P1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::ReadResult, readHeightField, IN, const std::string &, filename, IN, const osgDB::Options *, options,
	          Properties::VIRTUAL,
	          __ReaderWriter_ReadResult__readHeightField__C5_std_string_R1__C5_Options_P1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::ReadResult, readNode, IN, const std::string &, filename, IN, const osgDB::Options *, options,
	          Properties::VIRTUAL,
	          __ReaderWriter_ReadResult__readNode__C5_std_string_R1__C5_Options_P1,
	          "",
	          "");
	I_Method2(osgDB::ReaderWriter::ReadResult, readShader, IN, const std::string &, filename, IN, const osgDB::Options *, options,
	          Properties::VIRTUAL,
	          __ReaderWriter_ReadResult__readShader__C5_std_string_R1__C5_Options_P1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgDB::WriteFileCallback)
	I_DeclaringFile("osgDB/Callbacks");
	I_VirtualBaseType(osg::Referenced);
	I_Constructor0(____WriteFileCallback,
	               "",
	               "");
	I_Method3(osgDB::ReaderWriter::WriteResult, writeObject, IN, const osg::Object &, obj, IN, const std::string &, fileName, IN, const osgDB::Options *, options,
	          Properties::VIRTUAL,
	          __ReaderWriter_WriteResult__writeObject__C5_osg_Object_R1__C5_std_string_R1__C5_Options_P1,
	          "",
	          "");
	I_Method3(osgDB::ReaderWriter::WriteResult, writeImage, IN, const osg::Image &, obj, IN, const std::string &, fileName, IN, const osgDB::Options *, options,
	          Properties::VIRTUAL,
	          __ReaderWriter_WriteResult__writeImage__C5_osg_Image_R1__C5_std_string_R1__C5_Options_P1,
	          "",
	          "");
	I_Method3(osgDB::ReaderWriter::WriteResult, writeHeightField, IN, const osg::HeightField &, obj, IN, const std::string &, fileName, IN, const osgDB::Options *, options,
	          Properties::VIRTUAL,
	          __ReaderWriter_WriteResult__writeHeightField__C5_osg_HeightField_R1__C5_std_string_R1__C5_Options_P1,
	          "",
	          "");
	I_Method3(osgDB::ReaderWriter::WriteResult, writeNode, IN, const osg::Node &, obj, IN, const std::string &, fileName, IN, const osgDB::Options *, options,
	          Properties::VIRTUAL,
	          __ReaderWriter_WriteResult__writeNode__C5_osg_Node_R1__C5_std_string_R1__C5_Options_P1,
	          "",
	          "");
	I_Method3(osgDB::ReaderWriter::WriteResult, writeShader, IN, const osg::Shader &, obj, IN, const std::string &, fileName, IN, const osgDB::Options *, options,
	          Properties::VIRTUAL,
	          __ReaderWriter_WriteResult__writeShader__C5_osg_Shader_R1__C5_std_string_R1__C5_Options_P1,
	          "",
	          "");
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgDB::CaseSensitivity)
	I_DeclaringFile("osgDB/Callbacks");
	I_EnumLabel(osgDB::CASE_SENSITIVE);
	I_EnumLabel(osgDB::CASE_INSENSITIVE);
END_REFLECTOR

TYPE_NAME_ALIAS(std::deque< std::string >, osgDB::FilePathList)

STD_VECTOR_REFLECTOR(std::deque< std::string >)
