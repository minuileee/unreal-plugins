# RHAPI_MatchSegmentRequest <a id="group__RHAPI__MatchSegmentRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchSegmentRequest`](#structFRHAPI__MatchSegmentRequest) | 

## struct `FRHAPI_MatchSegmentRequest` <a id="structFRHAPI__MatchSegmentRequest"></a>

```
struct FRHAPI_MatchSegmentRequest
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`MatchSegment`](#structFRHAPI__MatchSegmentRequest_1a89e1688873b68a9d18fd23b1b586788d) | Segment ID of the match.
`public FString `[`Type_Optional`](#structFRHAPI__MatchSegmentRequest_1aab68ef98c0c55fb95b65088da276ad48) | 
`public bool `[`Type_IsSet`](#structFRHAPI__MatchSegmentRequest_1a44f780b34900c4b1927cc0d1e48c2213) | true if Type_Optional has been set to a value
`public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchSegmentRequest_1a9eb3821e617e4c08196d063bc2334c64) | 
`public bool `[`State_IsSet`](#structFRHAPI__MatchSegmentRequest_1ad693cb00bee4281b1e36c8a1c06b6f4f) | true if State_Optional has been set to a value
`public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchSegmentRequest_1ad830cbeee12fd3a99218223efc732865) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchSegmentRequest_1aa15cb9adf188d8e5d827a03763d3ab2a) | true if StartTimestamp_Optional has been set to a value
`public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchSegmentRequest_1ad9e131a06e73944b475c38ffae700bec) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchSegmentRequest_1a9a4793cdf472804b2e7893f657e4ece0) | true if EndTimestamp_Optional has been set to a value
`public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchSegmentRequest_1a3de5d52bd1d8dda3b664c502c53ba264) | 
`public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchSegmentRequest_1a77358533af3b31fed689fde879b475cd) | true if DurationSeconds_Optional has been set to a value
`public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`CustomData_Optional`](#structFRHAPI__MatchSegmentRequest_1aea6f464cff9e548b5e1cfa69b27dff4a) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchSegmentRequest_1a715c005955b9c2ac62348cecc532b8ed) | true if CustomData_Optional has been set to a value
`public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchSegmentRequest_1a311dc63348fd76c42ec53bb0a879a39d) | 
`public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchSegmentRequest_1a983a0c162b2f1c2d5c5c44bda2a3d797) | true if CorrelationId_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchSegmentRequest_1abda1f2ffe60706c1f44839a7152c8f46) | List of session IDs for the match.
`public bool `[`Sessions_IsSet`](#structFRHAPI__MatchSegmentRequest_1a7fb1a63926c8d5ebf55b3ff57cf61bf2) | true if Sessions_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchSegmentRequest_1ace3f094d9970fbff99105142014555d3) | List of MatchInstances for the match.
`public bool `[`Instances_IsSet`](#structFRHAPI__MatchSegmentRequest_1a649e5e22b69bb4db84e1e4862e1db942) | true if Instances_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchSegmentRequest_1a1548d9a5f4346208258780a082ec1d24) | List of allocation IDs for the match.
`public bool `[`Allocations_IsSet`](#structFRHAPI__MatchSegmentRequest_1a9fc5279a288e6118729eda867a549611) | true if Allocations_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > `[`Players_Optional`](#structFRHAPI__MatchSegmentRequest_1a92dcdda0698197aaadf51c1ea420a4f2) | List of players in the match.
`public bool `[`Players_IsSet`](#structFRHAPI__MatchSegmentRequest_1adc3cd94b304bfa1b132b85c34b399b0e) | true if Players_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchSegmentRequest_1ade2f19b599e855966c5f2e303cefb8fc)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchSegmentRequest_1a23161b70299e90627c008b1b567373e0)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1ad7a445e45e9e4a64862b11a3dc4576d3)`()` | Gets the value of MatchSegment.
`public inline const FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1ae01f00c8a91145947d971dcc2c9d3d7a)`() const` | Gets the value of MatchSegment.
`public inline void `[`SetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1aa34b5af71e066ffff05f3deb7df1a00e)`(FString NewValue)` | Sets the value of MatchSegment.
`public inline FString & `[`GetType`](#structFRHAPI__MatchSegmentRequest_1a123afe13f4297160d4eca76510a53e03)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentRequest_1af98812d6219bc335619a9131845c0695)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentRequest_1a16a438e20bd3879824458cb91bedfeb7)`(const FString & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetType`](#structFRHAPI__MatchSegmentRequest_1a684c50cee2cf9f87e6d83d2725c41ed3)`(FString & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentRequest_1a3fa5a909cbb69a9572218ca95f1084e7)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentRequest_1a782eabbb850df7f7354b72ab5ef18796)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetType`](#structFRHAPI__MatchSegmentRequest_1a94a6993f79c145122e22263cef212f7f)`(FString NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline void `[`ClearType`](#structFRHAPI__MatchSegmentRequest_1a643adb7d68d495cde9a96d4a300721fa)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a4b23cf9fb27eaf90b02f05653849c431)`()` | Gets the value of State_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a3abfc7a008e812f018ea84721c5bd805)`() const` | Gets the value of State_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a479d446f0c48a42f0f7989587f7c0569)`(const ERHAPI_MatchState & DefaultValue) const` | Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a3098dff2c2fa11c822b969cc9c5bc449)`(ERHAPI_MatchState & OutValue) const` | Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentRequest_1a8c026dc887b40f0af5de916cfd7991e0)`()` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentRequest_1a4e2ab79863be1ad58e72a16e61ea98df)`() const` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetState`](#structFRHAPI__MatchSegmentRequest_1a2475dd341aeeb84991c3dd078a800367)`(ERHAPI_MatchState NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true.
`public inline void `[`ClearState`](#structFRHAPI__MatchSegmentRequest_1a8c7dcd730489e19c038d0d360941d771)`()` | Clears the value of State_Optional and sets State_IsSet to false.
`public inline FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1aa5ad24d19119235bd169522cfe4eb07b)`()` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1aa1cd418ea16f8533ef51c378acc09edd)`() const` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1acebe5d68c52f5270b34e49defd041e3e)`(const FDateTime & DefaultValue) const` | Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a6b7544eee21185d51e49672afb090b28)`(FDateTime & OutValue) const` | Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1af8b6758eaf5450e916f96256bf01edb3)`()` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1a595192327f1f8a657ac733adacbe6441)`() const` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1ad83e3a5f73b5b18eba2df137804f7abe)`(FDateTime NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.
`public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a89c74d5e241723f999052d1e198f11a5)`()` | Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.
`public inline FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a7862139e8a0b0883f24c8ebab8c13394)`()` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a27b7b002d197ea565a1b594e98a27cf6)`() const` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1afa70e80b4711b220f6ffc3d0776299a8)`(const FDateTime & DefaultValue) const` | Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a4c86cd76c195017d4267db5932e01741)`(FDateTime & OutValue) const` | Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1ab427a44bc2bf582fda686c9c24202488)`()` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1a2e3cba799a642d65e2c47b395c517eb4)`() const` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a63adb113b28616e76c7686869e45443e)`(FDateTime NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.
`public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1ae11be37bd9f3f646a788ad56a5250f55)`()` | Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.
`public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a92407ab9edc768c3ea712415be0c43f9)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a0e72768dfc4d798fe57531bc4ca5ea15)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1adec2f219851dad529f25620729cff91f)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a8b86b2ce21ca3a5dd9c89d04d14061a0)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentRequest_1ac5c61a35e136463e5d69a0d69effbf68)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentRequest_1af9dc4cf30de4a6a177d0b999db975cf4)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1aaf4c457ce610edfa65352bb0dc0bc09e)`(int32 NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1ab41aef77bfcccf8cf329309671101fd8)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchSegmentRequest_1a24262b2fd97565326e67cc86c76974c0)`() const` | Returns true if DurationSeconds_Optional is set and matches the default value.
`public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchSegmentRequest_1ad27dc476dbe4fbdfc2076753fcc36788)`()` | Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1a31ac95c0a9863b7e6710babb7e8cdc76)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1a95cc832896938939e0aaabf278183273)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1af5bbcf834a04c9b4e0011fef851b927c)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1abc311ab11fa7289cccb3b6557fedbbb8)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentRequest_1a8a1c23bdcfc75152fd0013130adcd13e)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentRequest_1a7f44e2ea4839deedbfe268fb05f8b170)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchSegmentRequest_1a6ab2764e7e78e2e2d56db0d16e0a1c96)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchSegmentRequest_1adb2c7a7e1606c8ab240c7023ec84fa16)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1ade81d0ae93a6edcfbc25aaa3ac58018a)`()` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a305c683b0243cbf414bec654cd949ede)`() const` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a53ec6ace5bd210548c409f39c3137523)`(const FString & DefaultValue) const` | Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a0b575c8d3423aa2eb542f13dafb071ee)`(FString & OutValue) const` | Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentRequest_1a82a98144a0febbf91ae40ca51273fa43)`()` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentRequest_1ac59e2ebd98a0d6db3748676257ab9f76)`() const` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1aec2e3acda887ad52d4c96c0b5e6f91b9)`(FString NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.
`public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a0dbc4d704dfd89f3f4053397378cf59c)`()` | Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1ae1c084ea18739720149b616a1763d5c2)`()` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1aa35c6d826c50c5f1b331f157ab6b4679)`() const` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1a9d3b2a33e3f9fe204bec83a9bdd2ae18)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` | Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1a50b46a4d534481167defa7f8aa503f6d)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` | Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentRequest_1a55d76658e08aacf62b497281f5a6d853)`()` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentRequest_1a936237333332759b60168ee42137af6f)`() const` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessions`](#structFRHAPI__MatchSegmentRequest_1aef6e9debff4a4fa65fddc6a32c5e3d6b)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.
`public inline void `[`ClearSessions`](#structFRHAPI__MatchSegmentRequest_1a5eb4fa24ed25d90b716aa55936ecaa29)`()` | Clears the value of Sessions_Optional and sets Sessions_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a6baf7b49d674a04a48a51cf0a452cf80)`()` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a9f749f817013d6444c4d05fa40f96934)`() const` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a055e77737725d329d82703774f414a96)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` | Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a579b26e5aed141750750f1458be8cfc5)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` | Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentRequest_1aa011a0e5d352b8c1f331214b11c35eb4)`()` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentRequest_1a5a333903d564ececfb5541ac94bf60f0)`() const` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstances`](#structFRHAPI__MatchSegmentRequest_1a7df980d186d70ba0cd3fa3dca36a7e5c)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true.
`public inline void `[`ClearInstances`](#structFRHAPI__MatchSegmentRequest_1a82eb96ccb52be59ac46ed6dff2792784)`()` | Clears the value of Instances_Optional and sets Instances_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1a2d952367c5864f22296c4b3608a4b8cf)`()` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1a27df8a6b1c3d012f9f9167129805c187)`() const` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1a1bdf94cda4d4ee213fdcb4a7f3e898b9)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` | Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1ac639d4779758ec6eb52c86d5e4a4787d)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` | Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentRequest_1af49c7bb013a6351ae2404345ee792df5)`()` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentRequest_1a3e3dbebe95dbdf4db518034b15840f77)`() const` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllocations`](#structFRHAPI__MatchSegmentRequest_1ae24113540ba795a510fbad0660e6a580)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.
`public inline void `[`ClearAllocations`](#structFRHAPI__MatchSegmentRequest_1a82c44276f3a07d2165c049295e0a168a)`()` | Clears the value of Allocations_Optional and sets Allocations_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1ad2bf4fc7c632872f301cd7b121f1e922)`()` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1a11d72526942b049b13b861c92ba24414)`() const` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1a756d0c8a1bd95421ee99a4f3a82edb01)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & DefaultValue) const` | Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1a5c1318286920615fe22d34216d649e97)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & OutValue) const` | Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentRequest_1a613990d7519f25d2b953d62e2334d510)`()` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentRequest_1a18b935ccb8f9e63d9a82ce8035194e45)`() const` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayers`](#structFRHAPI__MatchSegmentRequest_1a5005a6c888c78cbc678ce725741cbe26)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true.
`public inline void `[`ClearPlayers`](#structFRHAPI__MatchSegmentRequest_1a82789e62a1025e16304f51dce9461f75)`()` | Clears the value of Players_Optional and sets Players_IsSet to false.

#### Members

#### `public FString `[`MatchSegment`](#structFRHAPI__MatchSegmentRequest_1a89e1688873b68a9d18fd23b1b586788d) <a id="structFRHAPI__MatchSegmentRequest_1a89e1688873b68a9d18fd23b1b586788d"></a>

Segment ID of the match.

<br>
#### `public FString `[`Type_Optional`](#structFRHAPI__MatchSegmentRequest_1aab68ef98c0c55fb95b65088da276ad48) <a id="structFRHAPI__MatchSegmentRequest_1aab68ef98c0c55fb95b65088da276ad48"></a>

<br>
#### `public bool `[`Type_IsSet`](#structFRHAPI__MatchSegmentRequest_1a44f780b34900c4b1927cc0d1e48c2213) <a id="structFRHAPI__MatchSegmentRequest_1a44f780b34900c4b1927cc0d1e48c2213"></a>

true if Type_Optional has been set to a value

<br>
#### `public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchSegmentRequest_1a9eb3821e617e4c08196d063bc2334c64) <a id="structFRHAPI__MatchSegmentRequest_1a9eb3821e617e4c08196d063bc2334c64"></a>

<br>
#### `public bool `[`State_IsSet`](#structFRHAPI__MatchSegmentRequest_1ad693cb00bee4281b1e36c8a1c06b6f4f) <a id="structFRHAPI__MatchSegmentRequest_1ad693cb00bee4281b1e36c8a1c06b6f4f"></a>

true if State_Optional has been set to a value

<br>
#### `public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchSegmentRequest_1ad830cbeee12fd3a99218223efc732865) <a id="structFRHAPI__MatchSegmentRequest_1ad830cbeee12fd3a99218223efc732865"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

<br>
#### `public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchSegmentRequest_1aa15cb9adf188d8e5d827a03763d3ab2a) <a id="structFRHAPI__MatchSegmentRequest_1aa15cb9adf188d8e5d827a03763d3ab2a"></a>

true if StartTimestamp_Optional has been set to a value

<br>
#### `public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchSegmentRequest_1ad9e131a06e73944b475c38ffae700bec) <a id="structFRHAPI__MatchSegmentRequest_1ad9e131a06e73944b475c38ffae700bec"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

<br>
#### `public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchSegmentRequest_1a9a4793cdf472804b2e7893f657e4ece0) <a id="structFRHAPI__MatchSegmentRequest_1a9a4793cdf472804b2e7893f657e4ece0"></a>

true if EndTimestamp_Optional has been set to a value

<br>
#### `public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchSegmentRequest_1a3de5d52bd1d8dda3b664c502c53ba264) <a id="structFRHAPI__MatchSegmentRequest_1a3de5d52bd1d8dda3b664c502c53ba264"></a>

<br>
#### `public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchSegmentRequest_1a77358533af3b31fed689fde879b475cd) <a id="structFRHAPI__MatchSegmentRequest_1a77358533af3b31fed689fde879b475cd"></a>

true if DurationSeconds_Optional has been set to a value

<br>
#### `public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`CustomData_Optional`](#structFRHAPI__MatchSegmentRequest_1aea6f464cff9e548b5e1cfa69b27dff4a) <a id="structFRHAPI__MatchSegmentRequest_1aea6f464cff9e548b5e1cfa69b27dff4a"></a>

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchSegmentRequest_1a715c005955b9c2ac62348cecc532b8ed) <a id="structFRHAPI__MatchSegmentRequest_1a715c005955b9c2ac62348cecc532b8ed"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchSegmentRequest_1a311dc63348fd76c42ec53bb0a879a39d) <a id="structFRHAPI__MatchSegmentRequest_1a311dc63348fd76c42ec53bb0a879a39d"></a>

<br>
#### `public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchSegmentRequest_1a983a0c162b2f1c2d5c5c44bda2a3d797) <a id="structFRHAPI__MatchSegmentRequest_1a983a0c162b2f1c2d5c5c44bda2a3d797"></a>

true if CorrelationId_Optional has been set to a value

<br>
#### `public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchSegmentRequest_1abda1f2ffe60706c1f44839a7152c8f46) <a id="structFRHAPI__MatchSegmentRequest_1abda1f2ffe60706c1f44839a7152c8f46"></a>

List of session IDs for the match.

<br>
#### `public bool `[`Sessions_IsSet`](#structFRHAPI__MatchSegmentRequest_1a7fb1a63926c8d5ebf55b3ff57cf61bf2) <a id="structFRHAPI__MatchSegmentRequest_1a7fb1a63926c8d5ebf55b3ff57cf61bf2"></a>

true if Sessions_Optional has been set to a value

<br>
#### `public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchSegmentRequest_1ace3f094d9970fbff99105142014555d3) <a id="structFRHAPI__MatchSegmentRequest_1ace3f094d9970fbff99105142014555d3"></a>

List of MatchInstances for the match.

<br>
#### `public bool `[`Instances_IsSet`](#structFRHAPI__MatchSegmentRequest_1a649e5e22b69bb4db84e1e4862e1db942) <a id="structFRHAPI__MatchSegmentRequest_1a649e5e22b69bb4db84e1e4862e1db942"></a>

true if Instances_Optional has been set to a value

<br>
#### `public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchSegmentRequest_1a1548d9a5f4346208258780a082ec1d24) <a id="structFRHAPI__MatchSegmentRequest_1a1548d9a5f4346208258780a082ec1d24"></a>

List of allocation IDs for the match.

<br>
#### `public bool `[`Allocations_IsSet`](#structFRHAPI__MatchSegmentRequest_1a9fc5279a288e6118729eda867a549611) <a id="structFRHAPI__MatchSegmentRequest_1a9fc5279a288e6118729eda867a549611"></a>

true if Allocations_Optional has been set to a value

<br>
#### `public TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > `[`Players_Optional`](#structFRHAPI__MatchSegmentRequest_1a92dcdda0698197aaadf51c1ea420a4f2) <a id="structFRHAPI__MatchSegmentRequest_1a92dcdda0698197aaadf51c1ea420a4f2"></a>

List of players in the match.

<br>
#### `public bool `[`Players_IsSet`](#structFRHAPI__MatchSegmentRequest_1adc3cd94b304bfa1b132b85c34b399b0e) <a id="structFRHAPI__MatchSegmentRequest_1adc3cd94b304bfa1b132b85c34b399b0e"></a>

true if Players_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchSegmentRequest_1ade2f19b599e855966c5f2e303cefb8fc)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchSegmentRequest_1ade2f19b599e855966c5f2e303cefb8fc"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchSegmentRequest_1a23161b70299e90627c008b1b567373e0)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchSegmentRequest_1a23161b70299e90627c008b1b567373e0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1ad7a445e45e9e4a64862b11a3dc4576d3)`()` <a id="structFRHAPI__MatchSegmentRequest_1ad7a445e45e9e4a64862b11a3dc4576d3"></a>

Gets the value of MatchSegment.

<br>
#### `public inline const FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1ae01f00c8a91145947d971dcc2c9d3d7a)`() const` <a id="structFRHAPI__MatchSegmentRequest_1ae01f00c8a91145947d971dcc2c9d3d7a"></a>

Gets the value of MatchSegment.

<br>
#### `public inline void `[`SetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1aa34b5af71e066ffff05f3deb7df1a00e)`(FString NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1aa34b5af71e066ffff05f3deb7df1a00e"></a>

Sets the value of MatchSegment.

<br>
#### `public inline FString & `[`GetType`](#structFRHAPI__MatchSegmentRequest_1a123afe13f4297160d4eca76510a53e03)`()` <a id="structFRHAPI__MatchSegmentRequest_1a123afe13f4297160d4eca76510a53e03"></a>

Gets the value of Type_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentRequest_1af98812d6219bc335619a9131845c0695)`() const` <a id="structFRHAPI__MatchSegmentRequest_1af98812d6219bc335619a9131845c0695"></a>

Gets the value of Type_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentRequest_1a16a438e20bd3879824458cb91bedfeb7)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a16a438e20bd3879824458cb91bedfeb7"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetType`](#structFRHAPI__MatchSegmentRequest_1a684c50cee2cf9f87e6d83d2725c41ed3)`(FString & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a684c50cee2cf9f87e6d83d2725c41ed3"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentRequest_1a3fa5a909cbb69a9572218ca95f1084e7)`()` <a id="structFRHAPI__MatchSegmentRequest_1a3fa5a909cbb69a9572218ca95f1084e7"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentRequest_1a782eabbb850df7f7354b72ab5ef18796)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a782eabbb850df7f7354b72ab5ef18796"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetType`](#structFRHAPI__MatchSegmentRequest_1a94a6993f79c145122e22263cef212f7f)`(FString NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a94a6993f79c145122e22263cef212f7f"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

<br>
#### `public inline void `[`ClearType`](#structFRHAPI__MatchSegmentRequest_1a643adb7d68d495cde9a96d4a300721fa)`()` <a id="structFRHAPI__MatchSegmentRequest_1a643adb7d68d495cde9a96d4a300721fa"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

<br>
#### `public inline ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a4b23cf9fb27eaf90b02f05653849c431)`()` <a id="structFRHAPI__MatchSegmentRequest_1a4b23cf9fb27eaf90b02f05653849c431"></a>

Gets the value of State_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a3abfc7a008e812f018ea84721c5bd805)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a3abfc7a008e812f018ea84721c5bd805"></a>

Gets the value of State_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a479d446f0c48a42f0f7989587f7c0569)`(const ERHAPI_MatchState & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a479d446f0c48a42f0f7989587f7c0569"></a>

Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a3098dff2c2fa11c822b969cc9c5bc449)`(ERHAPI_MatchState & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a3098dff2c2fa11c822b969cc9c5bc449"></a>

Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentRequest_1a8c026dc887b40f0af5de916cfd7991e0)`()` <a id="structFRHAPI__MatchSegmentRequest_1a8c026dc887b40f0af5de916cfd7991e0"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentRequest_1a4e2ab79863be1ad58e72a16e61ea98df)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a4e2ab79863be1ad58e72a16e61ea98df"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetState`](#structFRHAPI__MatchSegmentRequest_1a2475dd341aeeb84991c3dd078a800367)`(ERHAPI_MatchState NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a2475dd341aeeb84991c3dd078a800367"></a>

Sets the value of State_Optional and also sets State_IsSet to true.

<br>
#### `public inline void `[`ClearState`](#structFRHAPI__MatchSegmentRequest_1a8c7dcd730489e19c038d0d360941d771)`()` <a id="structFRHAPI__MatchSegmentRequest_1a8c7dcd730489e19c038d0d360941d771"></a>

Clears the value of State_Optional and sets State_IsSet to false.

<br>
#### `public inline FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1aa5ad24d19119235bd169522cfe4eb07b)`()` <a id="structFRHAPI__MatchSegmentRequest_1aa5ad24d19119235bd169522cfe4eb07b"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1aa1cd418ea16f8533ef51c378acc09edd)`() const` <a id="structFRHAPI__MatchSegmentRequest_1aa1cd418ea16f8533ef51c378acc09edd"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1acebe5d68c52f5270b34e49defd041e3e)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1acebe5d68c52f5270b34e49defd041e3e"></a>

Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a6b7544eee21185d51e49672afb090b28)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a6b7544eee21185d51e49672afb090b28"></a>

Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1af8b6758eaf5450e916f96256bf01edb3)`()` <a id="structFRHAPI__MatchSegmentRequest_1af8b6758eaf5450e916f96256bf01edb3"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1a595192327f1f8a657ac733adacbe6441)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a595192327f1f8a657ac733adacbe6441"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1ad83e3a5f73b5b18eba2df137804f7abe)`(FDateTime NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1ad83e3a5f73b5b18eba2df137804f7abe"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.

<br>
#### `public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a89c74d5e241723f999052d1e198f11a5)`()` <a id="structFRHAPI__MatchSegmentRequest_1a89c74d5e241723f999052d1e198f11a5"></a>

Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.

<br>
#### `public inline FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a7862139e8a0b0883f24c8ebab8c13394)`()` <a id="structFRHAPI__MatchSegmentRequest_1a7862139e8a0b0883f24c8ebab8c13394"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a27b7b002d197ea565a1b594e98a27cf6)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a27b7b002d197ea565a1b594e98a27cf6"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1afa70e80b4711b220f6ffc3d0776299a8)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1afa70e80b4711b220f6ffc3d0776299a8"></a>

Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a4c86cd76c195017d4267db5932e01741)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a4c86cd76c195017d4267db5932e01741"></a>

Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1ab427a44bc2bf582fda686c9c24202488)`()` <a id="structFRHAPI__MatchSegmentRequest_1ab427a44bc2bf582fda686c9c24202488"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1a2e3cba799a642d65e2c47b395c517eb4)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a2e3cba799a642d65e2c47b395c517eb4"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a63adb113b28616e76c7686869e45443e)`(FDateTime NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a63adb113b28616e76c7686869e45443e"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.

<br>
#### `public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1ae11be37bd9f3f646a788ad56a5250f55)`()` <a id="structFRHAPI__MatchSegmentRequest_1ae11be37bd9f3f646a788ad56a5250f55"></a>

Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.

<br>
#### `public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a92407ab9edc768c3ea712415be0c43f9)`()` <a id="structFRHAPI__MatchSegmentRequest_1a92407ab9edc768c3ea712415be0c43f9"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a0e72768dfc4d798fe57531bc4ca5ea15)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a0e72768dfc4d798fe57531bc4ca5ea15"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1adec2f219851dad529f25620729cff91f)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1adec2f219851dad529f25620729cff91f"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a8b86b2ce21ca3a5dd9c89d04d14061a0)`(int32 & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a8b86b2ce21ca3a5dd9c89d04d14061a0"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentRequest_1ac5c61a35e136463e5d69a0d69effbf68)`()` <a id="structFRHAPI__MatchSegmentRequest_1ac5c61a35e136463e5d69a0d69effbf68"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentRequest_1af9dc4cf30de4a6a177d0b999db975cf4)`() const` <a id="structFRHAPI__MatchSegmentRequest_1af9dc4cf30de4a6a177d0b999db975cf4"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1aaf4c457ce610edfa65352bb0dc0bc09e)`(int32 NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1aaf4c457ce610edfa65352bb0dc0bc09e"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

<br>
#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1ab41aef77bfcccf8cf329309671101fd8)`()` <a id="structFRHAPI__MatchSegmentRequest_1ab41aef77bfcccf8cf329309671101fd8"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

<br>
#### `public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchSegmentRequest_1a24262b2fd97565326e67cc86c76974c0)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a24262b2fd97565326e67cc86c76974c0"></a>

Returns true if DurationSeconds_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchSegmentRequest_1ad27dc476dbe4fbdfc2076753fcc36788)`()` <a id="structFRHAPI__MatchSegmentRequest_1ad27dc476dbe4fbdfc2076753fcc36788"></a>

Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.

<br>
#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1a31ac95c0a9863b7e6710babb7e8cdc76)`()` <a id="structFRHAPI__MatchSegmentRequest_1a31ac95c0a9863b7e6710babb7e8cdc76"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1a95cc832896938939e0aaabf278183273)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a95cc832896938939e0aaabf278183273"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1af5bbcf834a04c9b4e0011fef851b927c)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1af5bbcf834a04c9b4e0011fef851b927c"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1abc311ab11fa7289cccb3b6557fedbbb8)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1abc311ab11fa7289cccb3b6557fedbbb8"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentRequest_1a8a1c23bdcfc75152fd0013130adcd13e)`()` <a id="structFRHAPI__MatchSegmentRequest_1a8a1c23bdcfc75152fd0013130adcd13e"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentRequest_1a7f44e2ea4839deedbfe268fb05f8b170)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a7f44e2ea4839deedbfe268fb05f8b170"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchSegmentRequest_1a6ab2764e7e78e2e2d56db0d16e0a1c96)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a6ab2764e7e78e2e2d56db0d16e0a1c96"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchSegmentRequest_1adb2c7a7e1606c8ab240c7023ec84fa16)`()` <a id="structFRHAPI__MatchSegmentRequest_1adb2c7a7e1606c8ab240c7023ec84fa16"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
#### `public inline FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1ade81d0ae93a6edcfbc25aaa3ac58018a)`()` <a id="structFRHAPI__MatchSegmentRequest_1ade81d0ae93a6edcfbc25aaa3ac58018a"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a305c683b0243cbf414bec654cd949ede)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a305c683b0243cbf414bec654cd949ede"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a53ec6ace5bd210548c409f39c3137523)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a53ec6ace5bd210548c409f39c3137523"></a>

Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a0b575c8d3423aa2eb542f13dafb071ee)`(FString & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a0b575c8d3423aa2eb542f13dafb071ee"></a>

Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentRequest_1a82a98144a0febbf91ae40ca51273fa43)`()` <a id="structFRHAPI__MatchSegmentRequest_1a82a98144a0febbf91ae40ca51273fa43"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentRequest_1ac59e2ebd98a0d6db3748676257ab9f76)`() const` <a id="structFRHAPI__MatchSegmentRequest_1ac59e2ebd98a0d6db3748676257ab9f76"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1aec2e3acda887ad52d4c96c0b5e6f91b9)`(FString NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1aec2e3acda887ad52d4c96c0b5e6f91b9"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.

<br>
#### `public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a0dbc4d704dfd89f3f4053397378cf59c)`()` <a id="structFRHAPI__MatchSegmentRequest_1a0dbc4d704dfd89f3f4053397378cf59c"></a>

Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1ae1c084ea18739720149b616a1763d5c2)`()` <a id="structFRHAPI__MatchSegmentRequest_1ae1c084ea18739720149b616a1763d5c2"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1aa35c6d826c50c5f1b331f157ab6b4679)`() const` <a id="structFRHAPI__MatchSegmentRequest_1aa35c6d826c50c5f1b331f157ab6b4679"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1a9d3b2a33e3f9fe204bec83a9bdd2ae18)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a9d3b2a33e3f9fe204bec83a9bdd2ae18"></a>

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1a50b46a4d534481167defa7f8aa503f6d)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a50b46a4d534481167defa7f8aa503f6d"></a>

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentRequest_1a55d76658e08aacf62b497281f5a6d853)`()` <a id="structFRHAPI__MatchSegmentRequest_1a55d76658e08aacf62b497281f5a6d853"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentRequest_1a936237333332759b60168ee42137af6f)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a936237333332759b60168ee42137af6f"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSessions`](#structFRHAPI__MatchSegmentRequest_1aef6e9debff4a4fa65fddc6a32c5e3d6b)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1aef6e9debff4a4fa65fddc6a32c5e3d6b"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.

<br>
#### `public inline void `[`ClearSessions`](#structFRHAPI__MatchSegmentRequest_1a5eb4fa24ed25d90b716aa55936ecaa29)`()` <a id="structFRHAPI__MatchSegmentRequest_1a5eb4fa24ed25d90b716aa55936ecaa29"></a>

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a6baf7b49d674a04a48a51cf0a452cf80)`()` <a id="structFRHAPI__MatchSegmentRequest_1a6baf7b49d674a04a48a51cf0a452cf80"></a>

Gets the value of Instances_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a9f749f817013d6444c4d05fa40f96934)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a9f749f817013d6444c4d05fa40f96934"></a>

Gets the value of Instances_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a055e77737725d329d82703774f414a96)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a055e77737725d329d82703774f414a96"></a>

Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a579b26e5aed141750750f1458be8cfc5)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a579b26e5aed141750750f1458be8cfc5"></a>

Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentRequest_1aa011a0e5d352b8c1f331214b11c35eb4)`()` <a id="structFRHAPI__MatchSegmentRequest_1aa011a0e5d352b8c1f331214b11c35eb4"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentRequest_1a5a333903d564ececfb5541ac94bf60f0)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a5a333903d564ececfb5541ac94bf60f0"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInstances`](#structFRHAPI__MatchSegmentRequest_1a7df980d186d70ba0cd3fa3dca36a7e5c)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a7df980d186d70ba0cd3fa3dca36a7e5c"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true.

<br>
#### `public inline void `[`ClearInstances`](#structFRHAPI__MatchSegmentRequest_1a82eb96ccb52be59ac46ed6dff2792784)`()` <a id="structFRHAPI__MatchSegmentRequest_1a82eb96ccb52be59ac46ed6dff2792784"></a>

Clears the value of Instances_Optional and sets Instances_IsSet to false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1a2d952367c5864f22296c4b3608a4b8cf)`()` <a id="structFRHAPI__MatchSegmentRequest_1a2d952367c5864f22296c4b3608a4b8cf"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1a27df8a6b1c3d012f9f9167129805c187)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a27df8a6b1c3d012f9f9167129805c187"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1a1bdf94cda4d4ee213fdcb4a7f3e898b9)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a1bdf94cda4d4ee213fdcb4a7f3e898b9"></a>

Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1ac639d4779758ec6eb52c86d5e4a4787d)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1ac639d4779758ec6eb52c86d5e4a4787d"></a>

Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentRequest_1af49c7bb013a6351ae2404345ee792df5)`()` <a id="structFRHAPI__MatchSegmentRequest_1af49c7bb013a6351ae2404345ee792df5"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentRequest_1a3e3dbebe95dbdf4db518034b15840f77)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a3e3dbebe95dbdf4db518034b15840f77"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetAllocations`](#structFRHAPI__MatchSegmentRequest_1ae24113540ba795a510fbad0660e6a580)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1ae24113540ba795a510fbad0660e6a580"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.

<br>
#### `public inline void `[`ClearAllocations`](#structFRHAPI__MatchSegmentRequest_1a82c44276f3a07d2165c049295e0a168a)`()` <a id="structFRHAPI__MatchSegmentRequest_1a82c44276f3a07d2165c049295e0a168a"></a>

Clears the value of Allocations_Optional and sets Allocations_IsSet to false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1ad2bf4fc7c632872f301cd7b121f1e922)`()` <a id="structFRHAPI__MatchSegmentRequest_1ad2bf4fc7c632872f301cd7b121f1e922"></a>

Gets the value of Players_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1a11d72526942b049b13b861c92ba24414)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a11d72526942b049b13b861c92ba24414"></a>

Gets the value of Players_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1a756d0c8a1bd95421ee99a4f3a82edb01)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a756d0c8a1bd95421ee99a4f3a82edb01"></a>

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1a5c1318286920615fe22d34216d649e97)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a5c1318286920615fe22d34216d649e97"></a>

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentRequest_1a613990d7519f25d2b953d62e2334d510)`()` <a id="structFRHAPI__MatchSegmentRequest_1a613990d7519f25d2b953d62e2334d510"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentRequest_1a18b935ccb8f9e63d9a82ce8035194e45)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a18b935ccb8f9e63d9a82ce8035194e45"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPlayers`](#structFRHAPI__MatchSegmentRequest_1a5005a6c888c78cbc678ce725741cbe26)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a5005a6c888c78cbc678ce725741cbe26"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true.

<br>
#### `public inline void `[`ClearPlayers`](#structFRHAPI__MatchSegmentRequest_1a82789e62a1025e16304f51dce9461f75)`()` <a id="structFRHAPI__MatchSegmentRequest_1a82789e62a1025e16304f51dce9461f75"></a>

Clears the value of Players_Optional and sets Players_IsSet to false.

<br>