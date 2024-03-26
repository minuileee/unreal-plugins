// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereAPIHelpers.h"
#include "HTTPValidationError.h"
#include "HzApiErrorModel.h"
#include "MatchPlayerRequest.h"
#include "MatchPlayerWithMatch.h"
#include "MatchRequest.h"
#include "MatchWithPlayers.h"
#include "PagedMatchResponse.h"
#include "PagedPlayerMatchResponse.h"

namespace RallyHereAPI
{
using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

struct FRequest_CreateMatch;
struct FResponse_CreateMatch;
struct FRequest_CreateMatchPlayer;
struct FResponse_CreateMatchPlayer;
struct FRequest_DeleteMatch;
struct FResponse_DeleteMatch;
struct FRequest_DeleteMatchPlayer;
struct FResponse_DeleteMatchPlayer;
struct FRequest_GetMatch;
struct FResponse_GetMatch;
struct FRequest_GetMatchPlayer;
struct FResponse_GetMatchPlayer;
struct FRequest_GetMatches;
struct FResponse_GetMatches;
struct FRequest_GetPlayerMatchesSelf;
struct FResponse_GetPlayerMatchesSelf;
struct FRequest_GetPlayersMatches;
struct FResponse_GetPlayersMatches;
struct FRequest_PatchMatch;
struct FResponse_PatchMatch;
struct FRequest_PatchMatchPlayer;
struct FResponse_PatchMatchPlayer;
struct FRequest_UpdateMatch;
struct FResponse_UpdateMatch;
struct FRequest_UpdateMatchPlayer;
struct FResponse_UpdateMatchPlayer;

DECLARE_DELEGATE_OneParam(FDelegate_CreateMatch, const FResponse_CreateMatch&);
DECLARE_DELEGATE_OneParam(FDelegate_CreateMatchPlayer, const FResponse_CreateMatchPlayer&);
DECLARE_DELEGATE_OneParam(FDelegate_DeleteMatch, const FResponse_DeleteMatch&);
DECLARE_DELEGATE_OneParam(FDelegate_DeleteMatchPlayer, const FResponse_DeleteMatchPlayer&);
DECLARE_DELEGATE_OneParam(FDelegate_GetMatch, const FResponse_GetMatch&);
DECLARE_DELEGATE_OneParam(FDelegate_GetMatchPlayer, const FResponse_GetMatchPlayer&);
DECLARE_DELEGATE_OneParam(FDelegate_GetMatches, const FResponse_GetMatches&);
DECLARE_DELEGATE_OneParam(FDelegate_GetPlayerMatchesSelf, const FResponse_GetPlayerMatchesSelf&);
DECLARE_DELEGATE_OneParam(FDelegate_GetPlayersMatches, const FResponse_GetPlayersMatches&);
DECLARE_DELEGATE_OneParam(FDelegate_PatchMatch, const FResponse_PatchMatch&);
DECLARE_DELEGATE_OneParam(FDelegate_PatchMatchPlayer, const FResponse_PatchMatchPlayer&);
DECLARE_DELEGATE_OneParam(FDelegate_UpdateMatch, const FResponse_UpdateMatch&);
DECLARE_DELEGATE_OneParam(FDelegate_UpdateMatchPlayer, const FResponse_UpdateMatchPlayer&);

class RALLYHEREAPI_API FMatchAPI : public FAPI
{
public:
	FMatchAPI();
	virtual ~FMatchAPI();

	FHttpRequestPtr CreateMatch(const FRequest_CreateMatch& Request, const FDelegate_CreateMatch& Delegate = FDelegate_CreateMatch(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr CreateMatchPlayer(const FRequest_CreateMatchPlayer& Request, const FDelegate_CreateMatchPlayer& Delegate = FDelegate_CreateMatchPlayer(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr DeleteMatch(const FRequest_DeleteMatch& Request, const FDelegate_DeleteMatch& Delegate = FDelegate_DeleteMatch(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr DeleteMatchPlayer(const FRequest_DeleteMatchPlayer& Request, const FDelegate_DeleteMatchPlayer& Delegate = FDelegate_DeleteMatchPlayer(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr GetMatch(const FRequest_GetMatch& Request, const FDelegate_GetMatch& Delegate = FDelegate_GetMatch(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr GetMatchPlayer(const FRequest_GetMatchPlayer& Request, const FDelegate_GetMatchPlayer& Delegate = FDelegate_GetMatchPlayer(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr GetMatches(const FRequest_GetMatches& Request, const FDelegate_GetMatches& Delegate = FDelegate_GetMatches(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr GetPlayerMatchesSelf(const FRequest_GetPlayerMatchesSelf& Request, const FDelegate_GetPlayerMatchesSelf& Delegate = FDelegate_GetPlayerMatchesSelf(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr GetPlayersMatches(const FRequest_GetPlayersMatches& Request, const FDelegate_GetPlayersMatches& Delegate = FDelegate_GetPlayersMatches(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr PatchMatch(const FRequest_PatchMatch& Request, const FDelegate_PatchMatch& Delegate = FDelegate_PatchMatch(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr PatchMatchPlayer(const FRequest_PatchMatchPlayer& Request, const FDelegate_PatchMatchPlayer& Delegate = FDelegate_PatchMatchPlayer(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr UpdateMatch(const FRequest_UpdateMatch& Request, const FDelegate_UpdateMatch& Delegate = FDelegate_UpdateMatch(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr UpdateMatchPlayer(const FRequest_UpdateMatchPlayer& Request, const FDelegate_UpdateMatchPlayer& Delegate = FDelegate_UpdateMatchPlayer(), int32 Priority = DefaultRallyHereAPIPriority);

private:
	void OnCreateMatchResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_CreateMatch Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnCreateMatchPlayerResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_CreateMatchPlayer Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnDeleteMatchResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_DeleteMatch Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnDeleteMatchPlayerResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_DeleteMatchPlayer Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnGetMatchResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetMatch Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnGetMatchPlayerResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetMatchPlayer Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnGetMatchesResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetMatches Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnGetPlayerMatchesSelfResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetPlayerMatchesSelf Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnGetPlayersMatchesResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetPlayersMatches Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnPatchMatchResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PatchMatch Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnPatchMatchPlayerResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PatchMatchPlayer Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnUpdateMatchResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UpdateMatch Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnUpdateMatchPlayerResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UpdateMatchPlayer Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Create Match
 *
 * Create match by match_id
*/
struct RALLYHEREAPI_API FRequest_CreateMatch : public FRequest
{
	FRequest_CreateMatch();
	virtual ~FRequest_CreateMatch() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FRHAPI_MatchRequest MatchRequest;
};

struct RALLYHEREAPI_API FResponse_CreateMatch : public FResponse
{
	FResponse_CreateMatch(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_CreateMatch() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

	FRHAPI_MatchWithPlayers Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_MatchWithPlayers& OutContent) const;

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_CreateMatch
{
	typedef FRequest_CreateMatch Request;
	typedef FResponse_CreateMatch Response;
	typedef FDelegate_CreateMatch Delegate;
	typedef FMatchAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.CreateMatch(InRequest, InDelegate, Priority); }
};

/* Create Match Player
 *
 * Create player match record for the provided player_uuid and match_id
*/
struct RALLYHEREAPI_API FRequest_CreateMatchPlayer : public FRequest
{
	FRequest_CreateMatchPlayer();
	virtual ~FRequest_CreateMatchPlayer() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FGuid PlayerUuid;
	FString MatchId;
	FRHAPI_MatchPlayerRequest MatchPlayerRequest;
};

struct RALLYHEREAPI_API FResponse_CreateMatchPlayer : public FResponse
{
	FResponse_CreateMatchPlayer(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_CreateMatchPlayer() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

	FRHAPI_MatchPlayerWithMatch Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_MatchPlayerWithMatch& OutContent) const;

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_CreateMatchPlayer
{
	typedef FRequest_CreateMatchPlayer Request;
	typedef FResponse_CreateMatchPlayer Response;
	typedef FDelegate_CreateMatchPlayer Delegate;
	typedef FMatchAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.CreateMatchPlayer(InRequest, InDelegate, Priority); }
};

/* Delete Match
 *
 * Delete match by match_id
*/
struct RALLYHEREAPI_API FRequest_DeleteMatch : public FRequest
{
	FRequest_DeleteMatch();
	virtual ~FRequest_DeleteMatch() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FString MatchId;
};

struct RALLYHEREAPI_API FResponse_DeleteMatch : public FResponse
{
	FResponse_DeleteMatch(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_DeleteMatch() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

	


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_DeleteMatch
{
	typedef FRequest_DeleteMatch Request;
	typedef FResponse_DeleteMatch Response;
	typedef FDelegate_DeleteMatch Delegate;
	typedef FMatchAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.DeleteMatch(InRequest, InDelegate, Priority); }
};

/* Delete Match Player
 *
 * Delete player by player_uuid and match_id
*/
struct RALLYHEREAPI_API FRequest_DeleteMatchPlayer : public FRequest
{
	FRequest_DeleteMatchPlayer();
	virtual ~FRequest_DeleteMatchPlayer() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FGuid PlayerUuid;
	FString MatchId;
};

struct RALLYHEREAPI_API FResponse_DeleteMatchPlayer : public FResponse
{
	FResponse_DeleteMatchPlayer(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_DeleteMatchPlayer() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

	


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_DeleteMatchPlayer
{
	typedef FRequest_DeleteMatchPlayer Request;
	typedef FResponse_DeleteMatchPlayer Response;
	typedef FDelegate_DeleteMatchPlayer Delegate;
	typedef FMatchAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.DeleteMatchPlayer(InRequest, InDelegate, Priority); }
};

/* Get Match
 *
 * Get match by match_id
*/
struct RALLYHEREAPI_API FRequest_GetMatch : public FRequest
{
	FRequest_GetMatch();
	virtual ~FRequest_GetMatch() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FString MatchId;
};

struct RALLYHEREAPI_API FResponse_GetMatch : public FResponse
{
	FResponse_GetMatch(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_GetMatch() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

	FRHAPI_MatchWithPlayers Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_MatchWithPlayers& OutContent) const;

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 404
	Not Found
	*/
	bool TryGetContentFor404(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_GetMatch
{
	typedef FRequest_GetMatch Request;
	typedef FResponse_GetMatch Response;
	typedef FDelegate_GetMatch Delegate;
	typedef FMatchAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.GetMatch(InRequest, InDelegate, Priority); }
};

/* Get Match Player
 *
 * Get a player match record for the provided player_uuid and match_id
*/
struct RALLYHEREAPI_API FRequest_GetMatchPlayer : public FRequest
{
	FRequest_GetMatchPlayer();
	virtual ~FRequest_GetMatchPlayer() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FGuid PlayerUuid;
	FString MatchId;
};

struct RALLYHEREAPI_API FResponse_GetMatchPlayer : public FResponse
{
	FResponse_GetMatchPlayer(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_GetMatchPlayer() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

	FRHAPI_MatchPlayerWithMatch Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_MatchPlayerWithMatch& OutContent) const;

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_GetMatchPlayer
{
	typedef FRequest_GetMatchPlayer Request;
	typedef FResponse_GetMatchPlayer Response;
	typedef FDelegate_GetMatchPlayer Delegate;
	typedef FMatchAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.GetMatchPlayer(InRequest, InDelegate, Priority); }
};

/* Get Matches
 *
 * Get pages of matches
*/
struct RALLYHEREAPI_API FRequest_GetMatches : public FRequest
{
	FRequest_GetMatches();
	virtual ~FRequest_GetMatches() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	TOptional<FString> Cursor;
	/* The maximum number of elements to be returned per call */
	TOptional<int32> PageSize;
	TOptional<FString> InstanceId;
	TOptional<FString> AllocationId;
	TOptional<FString> SessionId;
	TOptional<FString> HostPlayerUuid;
	TOptional<FString> RegionId;
	TOptional<FString> PlayerUuid;
};

struct RALLYHEREAPI_API FResponse_GetMatches : public FResponse
{
	FResponse_GetMatches(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_GetMatches() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

	FRHAPI_PagedMatchResponse Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_PagedMatchResponse& OutContent) const;

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_GetMatches
{
	typedef FRequest_GetMatches Request;
	typedef FResponse_GetMatches Response;
	typedef FDelegate_GetMatches Delegate;
	typedef FMatchAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.GetMatches(InRequest, InDelegate, Priority); }
};

/* Get Player Matches Self
 *
 * Get all matches for self
*/
struct RALLYHEREAPI_API FRequest_GetPlayerMatchesSelf : public FRequest
{
	FRequest_GetPlayerMatchesSelf();
	virtual ~FRequest_GetPlayerMatchesSelf() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	TOptional<FString> Cursor;
	/* The maximum number of elements to be returned per call */
	TOptional<int32> PageSize;
};

struct RALLYHEREAPI_API FResponse_GetPlayerMatchesSelf : public FResponse
{
	FResponse_GetPlayerMatchesSelf(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_GetPlayerMatchesSelf() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

	FRHAPI_PagedPlayerMatchResponse Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_PagedPlayerMatchResponse& OutContent) const;

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_GetPlayerMatchesSelf
{
	typedef FRequest_GetPlayerMatchesSelf Request;
	typedef FResponse_GetPlayerMatchesSelf Response;
	typedef FDelegate_GetPlayerMatchesSelf Delegate;
	typedef FMatchAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.GetPlayerMatchesSelf(InRequest, InDelegate, Priority); }
};

/* Get Players Matches
 *
 * Get All matches for a provided player_uuid
*/
struct RALLYHEREAPI_API FRequest_GetPlayersMatches : public FRequest
{
	FRequest_GetPlayersMatches();
	virtual ~FRequest_GetPlayersMatches() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FGuid PlayerUuid;
	TOptional<FString> Cursor;
	/* The maximum number of elements to be returned per call */
	TOptional<int32> PageSize;
};

struct RALLYHEREAPI_API FResponse_GetPlayersMatches : public FResponse
{
	FResponse_GetPlayersMatches(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_GetPlayersMatches() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

	FRHAPI_PagedPlayerMatchResponse Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_PagedPlayerMatchResponse& OutContent) const;

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_GetPlayersMatches
{
	typedef FRequest_GetPlayersMatches Request;
	typedef FResponse_GetPlayersMatches Response;
	typedef FDelegate_GetPlayersMatches Delegate;
	typedef FMatchAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.GetPlayersMatches(InRequest, InDelegate, Priority); }
};

/* Patch Match
 *
 * Update match by match_id only with provided fields
*/
struct RALLYHEREAPI_API FRequest_PatchMatch : public FRequest
{
	FRequest_PatchMatch();
	virtual ~FRequest_PatchMatch() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FString MatchId;
	FRHAPI_MatchRequest MatchRequest;
};

struct RALLYHEREAPI_API FResponse_PatchMatch : public FResponse
{
	FResponse_PatchMatch(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_PatchMatch() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

	FRHAPI_MatchWithPlayers Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_MatchWithPlayers& OutContent) const;

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_PatchMatch
{
	typedef FRequest_PatchMatch Request;
	typedef FResponse_PatchMatch Response;
	typedef FDelegate_PatchMatch Delegate;
	typedef FMatchAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.PatchMatch(InRequest, InDelegate, Priority); }
};

/* Patch Match Player
 *
 * Update player match record for the provided player_uuid and match_id only with provided fields
*/
struct RALLYHEREAPI_API FRequest_PatchMatchPlayer : public FRequest
{
	FRequest_PatchMatchPlayer();
	virtual ~FRequest_PatchMatchPlayer() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FGuid PlayerUuid;
	FString MatchId;
	FRHAPI_MatchPlayerRequest MatchPlayerRequest;
};

struct RALLYHEREAPI_API FResponse_PatchMatchPlayer : public FResponse
{
	FResponse_PatchMatchPlayer(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_PatchMatchPlayer() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

	FRHAPI_MatchPlayerWithMatch Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_MatchPlayerWithMatch& OutContent) const;

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_PatchMatchPlayer
{
	typedef FRequest_PatchMatchPlayer Request;
	typedef FResponse_PatchMatchPlayer Response;
	typedef FDelegate_PatchMatchPlayer Delegate;
	typedef FMatchAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.PatchMatchPlayer(InRequest, InDelegate, Priority); }
};

/* Update Match
 *
 * Update match by match_id
*/
struct RALLYHEREAPI_API FRequest_UpdateMatch : public FRequest
{
	FRequest_UpdateMatch();
	virtual ~FRequest_UpdateMatch() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FString MatchId;
	FRHAPI_MatchRequest MatchRequest;
};

struct RALLYHEREAPI_API FResponse_UpdateMatch : public FResponse
{
	FResponse_UpdateMatch(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_UpdateMatch() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

	FRHAPI_MatchWithPlayers Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_MatchWithPlayers& OutContent) const;

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_UpdateMatch
{
	typedef FRequest_UpdateMatch Request;
	typedef FResponse_UpdateMatch Response;
	typedef FDelegate_UpdateMatch Delegate;
	typedef FMatchAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.UpdateMatch(InRequest, InDelegate, Priority); }
};

/* Update Match Player
 *
 * Update player match record for the provided player_uuid and match_id
*/
struct RALLYHEREAPI_API FRequest_UpdateMatchPlayer : public FRequest
{
	FRequest_UpdateMatchPlayer();
	virtual ~FRequest_UpdateMatchPlayer() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FGuid PlayerUuid;
	FString MatchId;
	FRHAPI_MatchPlayerRequest MatchPlayerRequest;
};

struct RALLYHEREAPI_API FResponse_UpdateMatchPlayer : public FResponse
{
	FResponse_UpdateMatchPlayer(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_UpdateMatchPlayer() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

	FRHAPI_MatchPlayerWithMatch Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_MatchPlayerWithMatch& OutContent) const;

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_UpdateMatchPlayer
{
	typedef FRequest_UpdateMatchPlayer Request;
	typedef FResponse_UpdateMatchPlayer Response;
	typedef FDelegate_UpdateMatchPlayer Delegate;
	typedef FMatchAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.UpdateMatchPlayer(InRequest, InDelegate, Priority); }
};


}
