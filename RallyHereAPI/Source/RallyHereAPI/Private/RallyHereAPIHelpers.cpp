// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "RallyHereAPIHelpers.h"
#include "RallyHereAPIModule.h"
#include "Interfaces/IHttpRequest.h"
#include "PlatformHttp.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

FRHAPI_JsonValue FRHAPI_JsonObject::TryGetValue(const FString& FieldName) const
{
    if (!Obj)
    {
        return FRHAPI_JsonValue();
    }

    const TSharedPtr<FJsonValue> Field = Obj->TryGetField(FieldName);
    if (!Field)
    {
        return FRHAPI_JsonValue();
    }

    return FRHAPI_JsonValue(Field);
}

bool FRHAPI_JsonObject::HasField(const FString& FieldName) const
{
    return Obj && Obj->HasField(FieldName);
}

void FRHAPI_JsonObject::SetField(const FString& FieldName, const FRHAPI_JsonValue& Value) const
{
    if (Obj)
    {
        Obj->SetField(FieldName, Value.GetValue());
    }
}

void FRHAPI_JsonObject::RemoveField(const FString& FieldName) const
{
    if (Obj)
    {
        Obj->RemoveField(FieldName);
    }
}

float FRHAPI_JsonObject::GetNumberField(const FString& FieldName) const
{
    return Obj ? Obj->GetNumberField(FieldName) : float{};
}

bool FRHAPI_JsonObject::TryGetNumberField(const FString& FieldName, float& OutNumber) const
{
    if (Obj)
    {
        double Num;
        if (Obj->TryGetNumberField(FieldName, Num))
        {
            OutNumber = static_cast<float>(Num);
            return true;
        }
    }
    return false;
}

void FRHAPI_JsonObject::SetNumberField(const FString& FieldName, float Number) const
{
    if (Obj)
    {
        Obj->SetNumberField(FieldName, static_cast<double>(Number));
    }
}

bool FRHAPI_JsonObject::TryGetIntegerField(const FString& FieldName, int32& OutNumber) const
{
    return Obj && Obj->TryGetNumberField(FieldName, OutNumber);
}

bool FRHAPI_JsonObject::TryGetInteger64Field(const FString& FieldName, int64& OutNumber) const
{
    return Obj && Obj->TryGetNumberField(FieldName, OutNumber);
}

FString FRHAPI_JsonObject::GetStringField(const FString& FieldName) const
{
    return Obj ? Obj->GetStringField(FieldName) : FString{};
}

bool FRHAPI_JsonObject::TryGetStringField(const FString& FieldName, FString& OutString) const
{
    return Obj && Obj->TryGetStringField(FieldName, OutString);
}

bool FRHAPI_JsonObject::TryGetStringArrayField(const FString& FieldName, TArray<FString>& OutArray) const
{
    return Obj && Obj->TryGetStringArrayField(FieldName, OutArray);
}

void FRHAPI_JsonObject::SetStringField(const FString& FieldName, const FString& StringValue) const
{
    if (Obj)
    {
        Obj->SetStringField(FieldName, StringValue);
    }
}

bool FRHAPI_JsonObject::GetBoolField(const FString& FieldName) const
{
    return Obj && Obj->GetBoolField(FieldName);
}

bool FRHAPI_JsonObject::TryGetBoolField(const FString& FieldName, bool& OutBool) const
{
    return Obj && Obj->TryGetBoolField(FieldName, OutBool);
}

void FRHAPI_JsonObject::SetBoolField(const FString& FieldName, bool InValue) const
{
    if (Obj)
    {
        Obj->SetBoolField(FieldName, InValue);
    }
}

TArray<FRHAPI_JsonValue> FRHAPI_JsonObject::GetArrayField(const FString& FieldName) const
{
    TArray<FRHAPI_JsonValue> Arr;
    TryGetArrayField(FieldName, Arr);
    return Arr;
}

bool FRHAPI_JsonObject::TryGetArrayField(const FString& FieldName, TArray<FRHAPI_JsonValue>& OutArray) const
{
    if (!Obj)
    {
        return false;
    }

    const TArray< TSharedPtr<FJsonValue> >* Arr{};
    if (!Obj->TryGetArrayField(FieldName, Arr) || !Arr)
    {
        return false;
    }

    for (const TSharedPtr<FJsonValue>& Val : *Arr)
    {
        OutArray.Add(FRHAPI_JsonValue(Val));
    }
    return true;
}

void FRHAPI_JsonObject::SetArrayField(const FString& FieldName, const TArray<FRHAPI_JsonValue>& Array) const
{
    if (!Obj)
    {
        return;
    }

    TArray< TSharedPtr<FJsonValue> > UnrealArr;
    for (const FRHAPI_JsonValue& Val : Array)
    {
        if (TSharedPtr<FJsonValue> UnrealVal = Val.GetValue())
        {
            UnrealArr.Add(UnrealVal);
        }
    }
    Obj->SetArrayField(FieldName, UnrealArr);
}

FRHAPI_JsonObject FRHAPI_JsonObject::GetObjectField(const FString& FieldName) const
{
    FRHAPI_JsonObject OutObj;
    TryGetObjectField(FieldName, OutObj);
    return OutObj;
}

bool FRHAPI_JsonObject::TryGetObjectField(const FString& FieldName, FRHAPI_JsonObject& OutObject) const
{
    if (!Obj)
    {
        return false;
    }

    const TSharedPtr<FJsonObject>* UnrealObj{};
    if (!Obj->TryGetObjectField(FieldName, UnrealObj) || !UnrealObj)
    {
        return false;
    }

    OutObject.SetObject(Obj);
    return true;
}

void FRHAPI_JsonObject::SetObjectField(const FString& FieldName, const FRHAPI_JsonObject& JsonObject) const
{
    if (Obj)
    {
        Obj->SetObjectField(FieldName, JsonObject.GetObject());
    }
}

//////////////////////////////////////////////////////////////////////////

float FRHAPI_JsonValue::AsNumber() const
{
    if (!Value)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("Unset Json Value used as a Number."));
        return {};
	}
    return Value->AsNumber();
}

FString FRHAPI_JsonValue::AsString() const
{
    if (!Value)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("Unset Json Value used as a String."));
        return {};
	}
    return Value->AsString();
}

bool FRHAPI_JsonValue::AsBool() const
{
    if (!Value)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("Unset Json Value used as a Bool."));
        return {};
	}
    return Value->AsBool();
}

bool FRHAPI_JsonValue::IsNull() const
{
    return !Value || Value->IsNull();
}

TArray<FRHAPI_JsonValue> FRHAPI_JsonValue::AsArray() const
{
    TArray<FRHAPI_JsonValue> Result;
    if (Value)
    {
        for (TSharedPtr<FJsonValue> Val : Value->AsArray())
        {
            Result.Add(FRHAPI_JsonValue(Val));
        }
    }
    else
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("Unset Json Value used as a Array."));
	}
    return Result;
}

FRHAPI_JsonObject FRHAPI_JsonValue::AsObject() const
{
    if (Value)
    {
        if (const TSharedPtr<FJsonObject>& Obj = Value->AsObject())
        {
            FRHAPI_JsonObject Result;
            Result.SetObject(Obj);
            return Result;
        }
    }
    else
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("Unset Json Value used as a Object."));
	}
    return FRHAPI_JsonObject();
}

ERHAPI_JsonValueType FRHAPI_JsonValue::GetType() const
{
    if (Value)
    {
        switch (Value->Type)
        {
        case EJson::None:
            return ERHAPI_JsonValueType::None;
        case EJson::Null:
            return ERHAPI_JsonValueType::Null;
        case EJson::String:
            return ERHAPI_JsonValueType::String;
        case EJson::Number:
            return ERHAPI_JsonValueType::Number;
        case EJson::Boolean:
            return ERHAPI_JsonValueType::Boolean;
        case EJson::Array:
            return ERHAPI_JsonValueType::Array;
        case EJson::Object:
            return ERHAPI_JsonValueType::Object;
        }
    }
    return ERHAPI_JsonValueType::None;
}

bool FRHAPI_JsonValue::TryGetNumber(float& OutNumber) const
{
    return Value && Value->TryGetNumber(OutNumber);
}

bool FRHAPI_JsonValue::TryGetInteger(int32& OutInteger) const
{
    return Value && Value->TryGetNumber(OutInteger);
}

bool FRHAPI_JsonValue::TryGetInteger64(int64& OutInteger64) const
{
    return Value && Value->TryGetNumber(OutInteger64);
}

bool FRHAPI_JsonValue::TryGetString(FString& OutString) const
{
    return Value && Value->TryGetString(OutString);
}

bool FRHAPI_JsonValue::TryGetBool(bool& OutBool) const
{
    return Value && Value->TryGetBool(OutBool);
}

bool FRHAPI_JsonValue::TryGetArray(TArray<FRHAPI_JsonValue>& OutArray) const
{
    const TArray< TSharedPtr<FJsonValue> >* JsonArr{};
    if (!Value || !Value->TryGetArray(JsonArr) || !JsonArr)
    {
        return false;
    }

    for (const TSharedPtr<FJsonValue>& Val : *JsonArr)
    {
        OutArray.Add(FRHAPI_JsonValue(Val));
    }
    return true;
}

bool FRHAPI_JsonValue::TryGetObject(FRHAPI_JsonObject& OutObject) const
{
    const TSharedPtr<FJsonObject>* JsonObj{};
    if (!Value || !Value->TryGetObject(JsonObj) || !JsonObj)
    {
        return false;
    }

    OutObject.SetObject(*JsonObj);
    return true;
}

bool FRHAPI_JsonValue::CompareEqual(const FRHAPI_JsonValue& Other) const
{
    if (!Value && !Other.Value)
        return true;
    if (!Value || !Other.Value)
        return false;
    return FJsonValue::CompareEqual(*Value, *Other.Value);
}

//////////////////////////////////////////////////////////////////////////

bool URHAPI_JsonObjectBlueprintLibrary::FRHAPI_JsonObjectToString(const FRHAPI_JsonObject& InObject, FString& OutString)
{
	// serialize to string
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutString);
	if (FJsonSerializer::Serialize(InObject.GetObject().ToSharedRef(), Writer))
	{
		return true;
	}
	
	return false;
}

bool URHAPI_JsonObjectBlueprintLibrary::StringToFRHAPI_JsonObject(const FString& InString, FRHAPI_JsonObject& OutObject)
{
	// serialize to object
	auto Reader = TJsonReaderFactory<>::Create(InString);
	TSharedPtr<FJsonObject> JsonObject;
	if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
	{
		OutObject = FRHAPI_JsonObject(JsonObject);
		return true;
	}
	
	return false;
}

//////////////////////////////////////////////////////////////////////////

bool URHAPI_JsonValueBlueprintLibrary::FRHAPI_JsonValueToString(const FRHAPI_JsonValue& InValue, FString& OutString)
{
	// serialize to string
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutString);
	if (FJsonSerializer::Serialize(InValue.GetValue().ToSharedRef(), TEXT(""), Writer))
	{
		return true;
	}
	
	return false;
}
bool URHAPI_JsonValueBlueprintLibrary::StringToFRHAPI_JsonValue(const FString& InString, FRHAPI_JsonValue& OutValue)
{
	// serialize to value
	auto Reader = TJsonReaderFactory<>::Create(InString);
	TSharedPtr<FJsonValue> JsonValue;
	if (FJsonSerializer::Deserialize(Reader, JsonValue) && JsonValue.IsValid())
	{
		OutValue = FRHAPI_JsonValue(JsonValue);
		return true;
	}
	
	return false;
}

//////////////////////////////////////////////////////////////////////////

namespace RallyHereAPI
{

FHttpFileInput::FHttpFileInput(const TCHAR* InFilePath)
{
	SetFilePath(InFilePath);
}

FHttpFileInput::FHttpFileInput(const FString& InFilePath)
{
	SetFilePath(InFilePath);
}

void FHttpFileInput::SetFilePath(const TCHAR* InFilePath)
{
	FilePath = InFilePath;
	if(ContentType.IsEmpty())
	{
		ContentType = FPlatformHttp::GetMimeType(InFilePath);
	}
}

void FHttpFileInput::SetFilePath(const FString& InFilePath)
{
	SetFilePath(*InFilePath);
}

void FHttpFileInput::SetContentType(const TCHAR* InContentType)
{
	ContentType = InContentType;
}

FString FHttpFileInput::GetFilename() const
{
	return FPaths::GetCleanFilename(FilePath);
}

//////////////////////////////////////////////////////////////////////////

const TCHAR* FHttpMultipartFormData::Delimiter = TEXT("--");
const TCHAR* FHttpMultipartFormData::Newline = TEXT("\r\n");

void FHttpMultipartFormData::SetBoundary(const TCHAR* InBoundary)
{
	checkf(Boundary.IsEmpty(), TEXT("Boundary must be set before usage"));
	Boundary = InBoundary;
}

const FString& FHttpMultipartFormData::GetBoundary() const
{
	if (Boundary.IsEmpty())
	{
		// Generate a random boundary with enough entropy, should avoid occurrences of the boundary in the data.
		// Since the boundary is generated at every request, in case of failure, retries should succeed.
		Boundary = FGuid::NewGuid().ToString(EGuidFormats::Short);
	}

	return Boundary;
}

void FHttpMultipartFormData::SetupHttpRequest(const FHttpRequestRef& HttpRequest)
{
	if(HttpRequest->GetVerb() != TEXT("POST"))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("Expected POST verb when using multipart form data"));
	}

	// Append final boundary
	AppendString(Delimiter);
	AppendString(*GetBoundary());
	AppendString(Delimiter);

	HttpRequest->SetHeader("Content-Type", FString::Printf(TEXT("multipart/form-data; boundary=%s"), *GetBoundary()));
	HttpRequest->SetContent(FormData);
}

void FHttpMultipartFormData::AddStringPart(const TCHAR* Name, const TCHAR* Data)
{
	// Add boundary
	AppendString(Delimiter);
	AppendString(*GetBoundary());
	AppendString(Newline);

	// Add header
	AppendString(*FString::Printf(TEXT("Content-Disposition: form-data; name = \"%s\""), Name));
	AppendString(Newline);
	AppendString(*FString::Printf(TEXT("Content-Type: text/plain; charset=utf-8")));
	AppendString(Newline);

	// Add header to body splitter
	AppendString(Newline);

	// Add Data
	AppendString(Data);
	AppendString(Newline);
}

void FHttpMultipartFormData::AddJsonPart(const TCHAR* Name, const FString& JsonString)
{
	// Add boundary
	AppendString(Delimiter);
	AppendString(*GetBoundary());
	AppendString(Newline);

	// Add header
	AppendString(*FString::Printf(TEXT("Content-Disposition: form-data; name=\"%s\""), Name));
	AppendString(Newline);
	AppendString(*FString::Printf(TEXT("Content-Type: application/json; charset=utf-8")));
	AppendString(Newline);

	// Add header to body splitter
	AppendString(Newline);

	// Add Data
	AppendString(*JsonString);
	AppendString(Newline);
}

void FHttpMultipartFormData::AddBinaryPart(const TCHAR* Name, const TArray<uint8>& ByteArray)
{
	// Add boundary
	AppendString(Delimiter);
	AppendString(*GetBoundary());
	AppendString(Newline);

	// Add header
	AppendString(*FString::Printf(TEXT("Content-Disposition: form-data; name=\"%s\""), Name));
	AppendString(Newline);
	AppendString(*FString::Printf(TEXT("Content-Type: application/octet-stream")));
	AppendString(Newline);

	// Add header to body splitter
	AppendString(Newline);

	// Add Data
	FormData.Append(ByteArray);
	AppendString(Newline);
}

void FHttpMultipartFormData::AddFilePart(const TCHAR* Name, const FHttpFileInput& File)
{
	TArray<uint8> FileContents;
	if (!FFileHelper::LoadFileToArray(FileContents, *File.GetFilePath()))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("Failed to load file (%s)"), *File.GetFilePath());
		return;
	}

	// Add boundary
	AppendString(Delimiter);
	AppendString(*GetBoundary());
	AppendString(Newline);

	// Add header
	AppendString(*FString::Printf(TEXT("Content-Disposition: form-data; name=\"%s\"; filename=\"%s\""), Name, *File.GetFilename()));
	AppendString(Newline);
	AppendString(*FString::Printf(TEXT("Content-Type: %s"), *File.GetContentType()));
	AppendString(Newline);

	// Add header to body splitter
	AppendString(Newline);

	// Add Data
	FormData.Append(FileContents);
	AppendString(Newline);
}

void FHttpMultipartFormData::AppendString(const TCHAR* Str)
{
	FTCHARToUTF8 utf8Str(Str);
	FormData.Append((uint8*)utf8Str.Get(), utf8Str.Length());
}

//////////////////////////////////////////////////////////////////////////

bool ParseDateTime(const FString& DateTimeString, FDateTime& OutDateTime)
{
	// Iso8601 Format: 	DateTime: YYYY-mm-ddTHH:MM:SS(.sss)(Z|+hh:mm|+hhmm|-hh:mm|-hhmm)
	{
		// We cannot call directly FDateTime::ParseIso8601 because it does not allow for precision beyond the millisecond, but DateTimeString might have more digits
		int32 DotIndex;
		FString StringToParse = DateTimeString;
		if (DateTimeString.FindChar('.', DotIndex))
		{
			int32 TimeZoneIndex;
			if (DateTimeString.FindChar('Z', TimeZoneIndex) || DateTimeString.FindChar('+', TimeZoneIndex) || DateTimeString.FindChar('-', TimeZoneIndex))
			{
				// The string contains a time zone designator starting at TimeZoneIndex
				if (TimeZoneIndex > DotIndex + 4)
				{
					// Trim to millisecond
					StringToParse = DateTimeString.Left(DotIndex + 4) + DateTimeString.RightChop(TimeZoneIndex);
				}
			}
			else
			{
				// the string does not contain a time zone designator, trim it to the millisecond
				StringToParse = DateTimeString.Left(DotIndex + 4);
			}
		}

		if (FDateTime::ParseIso8601(*StringToParse, OutDateTime))
			return true;
	}

	if (FDateTime::ParseHttpDate(DateTimeString, OutDateTime))
		return true;

	return FDateTime::Parse(DateTimeString, OutDateTime);
}

}
