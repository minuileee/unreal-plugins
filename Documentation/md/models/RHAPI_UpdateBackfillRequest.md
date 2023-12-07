# RHAPI_UpdateBackfillRequest <a id="group__RHAPI__UpdateBackfillRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_UpdateBackfillRequest`](#structFRHAPI__UpdateBackfillRequest) | 

## struct `FRHAPI_UpdateBackfillRequest` <a id="structFRHAPI__UpdateBackfillRequest"></a>

```
struct FRHAPI_UpdateBackfillRequest
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`InstanceId`](#structFRHAPI__UpdateBackfillRequest_1acbaa3be50199297dc3d82ed419a938d2) | The instance ID for this backfill request.
`public `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` `[`AdditionalJoinParams_Optional`](#structFRHAPI__UpdateBackfillRequest_1a8733cb6e88822464ff00906f4343479b) | 
`public bool `[`AdditionalJoinParams_IsSet`](#structFRHAPI__UpdateBackfillRequest_1a5297552fe2ee8c2eb9f52dd6a8d4b747) | true if AdditionalJoinParams_Optional has been set to a value
`public TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > `[`Teams_Optional`](#structFRHAPI__UpdateBackfillRequest_1a0bcca01fbb64b7eb5cc8c6348f9b5a39) | The teams and number of players that need to be backfilled. Leaving this out (or supplying an empty list) is treated as no players are currently required.
`public bool `[`Teams_IsSet`](#structFRHAPI__UpdateBackfillRequest_1a868168ce21f43fa6d23f1cedf2780215) | true if Teams_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__UpdateBackfillRequest_1a5191c300b1e574072a34e6de65a25d0f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__UpdateBackfillRequest_1ab5e7560a8a7b9102cae06b58d9aae50e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__UpdateBackfillRequest_1a61f1f26aa48faa039a779543c7f630b8)`()` | Gets the value of InstanceId.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__UpdateBackfillRequest_1a3dbfdbe0ef551031df2c74a323d13d2d)`() const` | Gets the value of InstanceId.
`public inline void `[`SetInstanceId`](#structFRHAPI__UpdateBackfillRequest_1adce72461de6ef153361376d5ab41b201)`(FString NewValue)` | Sets the value of InstanceId.
`public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a5d539b1d5ccc559f654522982d88c25f)`()` | Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a5578394f77774e81b5023a342a37b91d)`() const` | Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1ace366e8a91bcb62dca94a5df74166a19)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` | Gets the value of AdditionalJoinParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a54d99e91ca2522129b6f447ae9e85384)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` | Fills OutValue with the value of AdditionalJoinParams_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__UpdateBackfillRequest_1af432acd32e0f20a862ce4606aead702a)`()` | Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__UpdateBackfillRequest_1a8b5829488df46a8981057f8a09ac9499)`() const` | Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1acbb75739dd4240b7ee8ab45e1f5c0583)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` NewValue)` | Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true.
`public inline void `[`ClearAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1ada5b36edf78e65ce6bf9b9fe73d3aa6e)`()` | Clears the value of AdditionalJoinParams_Optional and sets AdditionalJoinParams_IsSet to false.
`public inline TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & `[`GetTeams`](#structFRHAPI__UpdateBackfillRequest_1a4589d12bdf628f45cfdf7eade6923997)`()` | Gets the value of Teams_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & `[`GetTeams`](#structFRHAPI__UpdateBackfillRequest_1aa69a5a74491f38db3ab36f254c9aff51)`() const` | Gets the value of Teams_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & `[`GetTeams`](#structFRHAPI__UpdateBackfillRequest_1a484a09bc3e911b07534bb25c68aa3765)`(const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & DefaultValue) const` | Gets the value of Teams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTeams`](#structFRHAPI__UpdateBackfillRequest_1af5c4a2cb761f4c69f676cf3b1ab9335a)`(TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & OutValue) const` | Fills OutValue with the value of Teams_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > * `[`GetTeamsOrNull`](#structFRHAPI__UpdateBackfillRequest_1aad97c0f2bcb921a65988b16156cab602)`()` | Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > * `[`GetTeamsOrNull`](#structFRHAPI__UpdateBackfillRequest_1a940797bad04cf8e2ac8f891f03acb14a)`() const` | Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTeams`](#structFRHAPI__UpdateBackfillRequest_1a40bcc5fb707434bb7e1f0d0dadcbf70e)`(TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > NewValue)` | Sets the value of Teams_Optional and also sets Teams_IsSet to true.
`public inline void `[`ClearTeams`](#structFRHAPI__UpdateBackfillRequest_1ab456151a06c9adfe1258778fbadaf412)`()` | Clears the value of Teams_Optional and sets Teams_IsSet to false.

#### Members

#### `public FString `[`InstanceId`](#structFRHAPI__UpdateBackfillRequest_1acbaa3be50199297dc3d82ed419a938d2) <a id="structFRHAPI__UpdateBackfillRequest_1acbaa3be50199297dc3d82ed419a938d2"></a>

The instance ID for this backfill request.

<br>
#### `public `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` `[`AdditionalJoinParams_Optional`](#structFRHAPI__UpdateBackfillRequest_1a8733cb6e88822464ff00906f4343479b) <a id="structFRHAPI__UpdateBackfillRequest_1a8733cb6e88822464ff00906f4343479b"></a>

<br>
#### `public bool `[`AdditionalJoinParams_IsSet`](#structFRHAPI__UpdateBackfillRequest_1a5297552fe2ee8c2eb9f52dd6a8d4b747) <a id="structFRHAPI__UpdateBackfillRequest_1a5297552fe2ee8c2eb9f52dd6a8d4b747"></a>

true if AdditionalJoinParams_Optional has been set to a value

<br>
#### `public TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > `[`Teams_Optional`](#structFRHAPI__UpdateBackfillRequest_1a0bcca01fbb64b7eb5cc8c6348f9b5a39) <a id="structFRHAPI__UpdateBackfillRequest_1a0bcca01fbb64b7eb5cc8c6348f9b5a39"></a>

The teams and number of players that need to be backfilled. Leaving this out (or supplying an empty list) is treated as no players are currently required.

<br>
#### `public bool `[`Teams_IsSet`](#structFRHAPI__UpdateBackfillRequest_1a868168ce21f43fa6d23f1cedf2780215) <a id="structFRHAPI__UpdateBackfillRequest_1a868168ce21f43fa6d23f1cedf2780215"></a>

true if Teams_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__UpdateBackfillRequest_1a5191c300b1e574072a34e6de65a25d0f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__UpdateBackfillRequest_1a5191c300b1e574072a34e6de65a25d0f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__UpdateBackfillRequest_1ab5e7560a8a7b9102cae06b58d9aae50e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__UpdateBackfillRequest_1ab5e7560a8a7b9102cae06b58d9aae50e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__UpdateBackfillRequest_1a61f1f26aa48faa039a779543c7f630b8)`()` <a id="structFRHAPI__UpdateBackfillRequest_1a61f1f26aa48faa039a779543c7f630b8"></a>

Gets the value of InstanceId.

<br>
#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__UpdateBackfillRequest_1a3dbfdbe0ef551031df2c74a323d13d2d)`() const` <a id="structFRHAPI__UpdateBackfillRequest_1a3dbfdbe0ef551031df2c74a323d13d2d"></a>

Gets the value of InstanceId.

<br>
#### `public inline void `[`SetInstanceId`](#structFRHAPI__UpdateBackfillRequest_1adce72461de6ef153361376d5ab41b201)`(FString NewValue)` <a id="structFRHAPI__UpdateBackfillRequest_1adce72461de6ef153361376d5ab41b201"></a>

Sets the value of InstanceId.

<br>
#### `public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a5d539b1d5ccc559f654522982d88c25f)`()` <a id="structFRHAPI__UpdateBackfillRequest_1a5d539b1d5ccc559f654522982d88c25f"></a>

Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a5578394f77774e81b5023a342a37b91d)`() const` <a id="structFRHAPI__UpdateBackfillRequest_1a5578394f77774e81b5023a342a37b91d"></a>

Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1ace366e8a91bcb62dca94a5df74166a19)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` <a id="structFRHAPI__UpdateBackfillRequest_1ace366e8a91bcb62dca94a5df74166a19"></a>

Gets the value of AdditionalJoinParams_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a54d99e91ca2522129b6f447ae9e85384)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` <a id="structFRHAPI__UpdateBackfillRequest_1a54d99e91ca2522129b6f447ae9e85384"></a>

Fills OutValue with the value of AdditionalJoinParams_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__UpdateBackfillRequest_1af432acd32e0f20a862ce4606aead702a)`()` <a id="structFRHAPI__UpdateBackfillRequest_1af432acd32e0f20a862ce4606aead702a"></a>

Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__UpdateBackfillRequest_1a8b5829488df46a8981057f8a09ac9499)`() const` <a id="structFRHAPI__UpdateBackfillRequest_1a8b5829488df46a8981057f8a09ac9499"></a>

Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1acbb75739dd4240b7ee8ab45e1f5c0583)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` NewValue)` <a id="structFRHAPI__UpdateBackfillRequest_1acbb75739dd4240b7ee8ab45e1f5c0583"></a>

Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true.

<br>
#### `public inline void `[`ClearAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1ada5b36edf78e65ce6bf9b9fe73d3aa6e)`()` <a id="structFRHAPI__UpdateBackfillRequest_1ada5b36edf78e65ce6bf9b9fe73d3aa6e"></a>

Clears the value of AdditionalJoinParams_Optional and sets AdditionalJoinParams_IsSet to false.

<br>
#### `public inline TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & `[`GetTeams`](#structFRHAPI__UpdateBackfillRequest_1a4589d12bdf628f45cfdf7eade6923997)`()` <a id="structFRHAPI__UpdateBackfillRequest_1a4589d12bdf628f45cfdf7eade6923997"></a>

Gets the value of Teams_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & `[`GetTeams`](#structFRHAPI__UpdateBackfillRequest_1aa69a5a74491f38db3ab36f254c9aff51)`() const` <a id="structFRHAPI__UpdateBackfillRequest_1aa69a5a74491f38db3ab36f254c9aff51"></a>

Gets the value of Teams_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & `[`GetTeams`](#structFRHAPI__UpdateBackfillRequest_1a484a09bc3e911b07534bb25c68aa3765)`(const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & DefaultValue) const` <a id="structFRHAPI__UpdateBackfillRequest_1a484a09bc3e911b07534bb25c68aa3765"></a>

Gets the value of Teams_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetTeams`](#structFRHAPI__UpdateBackfillRequest_1af5c4a2cb761f4c69f676cf3b1ab9335a)`(TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & OutValue) const` <a id="structFRHAPI__UpdateBackfillRequest_1af5c4a2cb761f4c69f676cf3b1ab9335a"></a>

Fills OutValue with the value of Teams_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > * `[`GetTeamsOrNull`](#structFRHAPI__UpdateBackfillRequest_1aad97c0f2bcb921a65988b16156cab602)`()` <a id="structFRHAPI__UpdateBackfillRequest_1aad97c0f2bcb921a65988b16156cab602"></a>

Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > * `[`GetTeamsOrNull`](#structFRHAPI__UpdateBackfillRequest_1a940797bad04cf8e2ac8f891f03acb14a)`() const` <a id="structFRHAPI__UpdateBackfillRequest_1a940797bad04cf8e2ac8f891f03acb14a"></a>

Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetTeams`](#structFRHAPI__UpdateBackfillRequest_1a40bcc5fb707434bb7e1f0d0dadcbf70e)`(TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > NewValue)` <a id="structFRHAPI__UpdateBackfillRequest_1a40bcc5fb707434bb7e1f0d0dadcbf70e"></a>

Sets the value of Teams_Optional and also sets Teams_IsSet to true.

<br>
#### `public inline void `[`ClearTeams`](#structFRHAPI__UpdateBackfillRequest_1ab456151a06c9adfe1258778fbadaf412)`()` <a id="structFRHAPI__UpdateBackfillRequest_1ab456151a06c9adfe1258778fbadaf412"></a>

Clears the value of Teams_Optional and sets Teams_IsSet to false.

<br>