# group `RHAPI_PagedPlayerMatchResponse` <a id="group__RHAPI__PagedPlayerMatchResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PagedPlayerMatchResponse`](#structFRHAPI__PagedPlayerMatchResponse) | 

## struct `FRHAPI_PagedPlayerMatchResponse` <a id="structFRHAPI__PagedPlayerMatchResponse"></a>

```
struct FRHAPI_PagedPlayerMatchResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > `[`PlayerMatches_Optional`](#structFRHAPI__PagedPlayerMatchResponse_1a99511989a74fcbb5b3722e4c2b686362) | List of player's matches.
`public bool `[`PlayerMatches_IsSet`](#structFRHAPI__PagedPlayerMatchResponse_1ad17dd2f9511166da1e04fd3132102210) | true if PlayerMatches_Optional has been set to a value
`public FString `[`Cursor_Optional`](#structFRHAPI__PagedPlayerMatchResponse_1ab4e62639956cc675c945f637512dc53d) | 
`public bool `[`Cursor_IsSet`](#structFRHAPI__PagedPlayerMatchResponse_1a24ffb30ff83191b03991792dd0a75f56) | true if Cursor_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PagedPlayerMatchResponse_1ab5b2c7bc87402e2849f58ce4e0850e61)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PagedPlayerMatchResponse_1a70b844cd50c3f9cb0cc242974d604601)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & `[`GetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1a5475be6546c03a20779ddfc30722522e)`()` | Gets the value of PlayerMatches_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & `[`GetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1a2dea46146792b294afb9f0d35df0565d)`() const` | Gets the value of PlayerMatches_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & `[`GetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1a219fce0ef5de6e9d83746201ae5f357e)`(const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & DefaultValue) const` | Gets the value of PlayerMatches_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1aef9cd40a2e39cf3bce3a4e7833226f9e)`(TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & OutValue) const` | Fills OutValue with the value of PlayerMatches_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > * `[`GetPlayerMatchesOrNull`](#structFRHAPI__PagedPlayerMatchResponse_1a60547e6c76ec9798b81b628245bcba19)`()` | Returns a pointer to PlayerMatches_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > * `[`GetPlayerMatchesOrNull`](#structFRHAPI__PagedPlayerMatchResponse_1a6d0486fd05e375422d018aaeb8b59f88)`() const` | Returns a pointer to PlayerMatches_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1af2a9dbf5d8082494199c1408893c3db4)`(const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & NewValue)` | Sets the value of PlayerMatches_Optional and also sets PlayerMatches_IsSet to true.
`public inline void `[`SetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1a77effbab4e2a33648686acd1197eb913)`(TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > && NewValue)` | Sets the value of PlayerMatches_Optional and also sets PlayerMatches_IsSet to true using move semantics.
`public inline void `[`ClearPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1a4e82cfef29d83dcbd77e78c0e4fa2060)`()` | Clears the value of PlayerMatches_Optional and sets PlayerMatches_IsSet to false.
`public inline FString & `[`GetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a3a4e07735c29a62914126587e9d74c04)`()` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1ada6c67f338a0568bbdcddb8cc936aba8)`() const` | Gets the value of Cursor_Optional, regardless of it having been set.
`public inline const FString & `[`GetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a8900254653f8f67d468f4db8a7c65711)`(const FString & DefaultValue) const` | Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1ac724df4249c2c3ae552556b1e43d576b)`(FString & OutValue) const` | Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCursorOrNull`](#structFRHAPI__PagedPlayerMatchResponse_1a117b447c7681e10bdce3233feb4977b1)`()` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__PagedPlayerMatchResponse_1a398c9c13365034808dc8b68a573a8d2c)`() const` | Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a36502a6f5fc44bd0610d3ea4f8d523c8)`(const FString & NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.
`public inline void `[`SetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a32480ae6350e004219f45bd6f9013dd8)`(FString && NewValue)` | Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.
`public inline void `[`ClearCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a272f2811090070e798f66afe15540034)`()` | Clears the value of Cursor_Optional and sets Cursor_IsSet to false.

### Members

#### `public TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > `[`PlayerMatches_Optional`](#structFRHAPI__PagedPlayerMatchResponse_1a99511989a74fcbb5b3722e4c2b686362) <a id="structFRHAPI__PagedPlayerMatchResponse_1a99511989a74fcbb5b3722e4c2b686362"></a>

List of player's matches.

#### `public bool `[`PlayerMatches_IsSet`](#structFRHAPI__PagedPlayerMatchResponse_1ad17dd2f9511166da1e04fd3132102210) <a id="structFRHAPI__PagedPlayerMatchResponse_1ad17dd2f9511166da1e04fd3132102210"></a>

true if PlayerMatches_Optional has been set to a value

#### `public FString `[`Cursor_Optional`](#structFRHAPI__PagedPlayerMatchResponse_1ab4e62639956cc675c945f637512dc53d) <a id="structFRHAPI__PagedPlayerMatchResponse_1ab4e62639956cc675c945f637512dc53d"></a>

#### `public bool `[`Cursor_IsSet`](#structFRHAPI__PagedPlayerMatchResponse_1a24ffb30ff83191b03991792dd0a75f56) <a id="structFRHAPI__PagedPlayerMatchResponse_1a24ffb30ff83191b03991792dd0a75f56"></a>

true if Cursor_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PagedPlayerMatchResponse_1ab5b2c7bc87402e2849f58ce4e0850e61)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PagedPlayerMatchResponse_1ab5b2c7bc87402e2849f58ce4e0850e61"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PagedPlayerMatchResponse_1a70b844cd50c3f9cb0cc242974d604601)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PagedPlayerMatchResponse_1a70b844cd50c3f9cb0cc242974d604601"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & `[`GetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1a5475be6546c03a20779ddfc30722522e)`()` <a id="structFRHAPI__PagedPlayerMatchResponse_1a5475be6546c03a20779ddfc30722522e"></a>

Gets the value of PlayerMatches_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & `[`GetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1a2dea46146792b294afb9f0d35df0565d)`() const` <a id="structFRHAPI__PagedPlayerMatchResponse_1a2dea46146792b294afb9f0d35df0565d"></a>

Gets the value of PlayerMatches_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & `[`GetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1a219fce0ef5de6e9d83746201ae5f357e)`(const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & DefaultValue) const` <a id="structFRHAPI__PagedPlayerMatchResponse_1a219fce0ef5de6e9d83746201ae5f357e"></a>

Gets the value of PlayerMatches_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1aef9cd40a2e39cf3bce3a4e7833226f9e)`(TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & OutValue) const` <a id="structFRHAPI__PagedPlayerMatchResponse_1aef9cd40a2e39cf3bce3a4e7833226f9e"></a>

Fills OutValue with the value of PlayerMatches_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > * `[`GetPlayerMatchesOrNull`](#structFRHAPI__PagedPlayerMatchResponse_1a60547e6c76ec9798b81b628245bcba19)`()` <a id="structFRHAPI__PagedPlayerMatchResponse_1a60547e6c76ec9798b81b628245bcba19"></a>

Returns a pointer to PlayerMatches_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > * `[`GetPlayerMatchesOrNull`](#structFRHAPI__PagedPlayerMatchResponse_1a6d0486fd05e375422d018aaeb8b59f88)`() const` <a id="structFRHAPI__PagedPlayerMatchResponse_1a6d0486fd05e375422d018aaeb8b59f88"></a>

Returns a pointer to PlayerMatches_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1af2a9dbf5d8082494199c1408893c3db4)`(const TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > & NewValue)` <a id="structFRHAPI__PagedPlayerMatchResponse_1af2a9dbf5d8082494199c1408893c3db4"></a>

Sets the value of PlayerMatches_Optional and also sets PlayerMatches_IsSet to true.

#### `public inline void `[`SetPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1a77effbab4e2a33648686acd1197eb913)`(TArray< `[`FRHAPI_MatchPlayerWithMatch`](RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` > && NewValue)` <a id="structFRHAPI__PagedPlayerMatchResponse_1a77effbab4e2a33648686acd1197eb913"></a>

Sets the value of PlayerMatches_Optional and also sets PlayerMatches_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerMatches`](#structFRHAPI__PagedPlayerMatchResponse_1a4e82cfef29d83dcbd77e78c0e4fa2060)`()` <a id="structFRHAPI__PagedPlayerMatchResponse_1a4e82cfef29d83dcbd77e78c0e4fa2060"></a>

Clears the value of PlayerMatches_Optional and sets PlayerMatches_IsSet to false.

#### `public inline FString & `[`GetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a3a4e07735c29a62914126587e9d74c04)`()` <a id="structFRHAPI__PagedPlayerMatchResponse_1a3a4e07735c29a62914126587e9d74c04"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1ada6c67f338a0568bbdcddb8cc936aba8)`() const` <a id="structFRHAPI__PagedPlayerMatchResponse_1ada6c67f338a0568bbdcddb8cc936aba8"></a>

Gets the value of Cursor_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a8900254653f8f67d468f4db8a7c65711)`(const FString & DefaultValue) const` <a id="structFRHAPI__PagedPlayerMatchResponse_1a8900254653f8f67d468f4db8a7c65711"></a>

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1ac724df4249c2c3ae552556b1e43d576b)`(FString & OutValue) const` <a id="structFRHAPI__PagedPlayerMatchResponse_1ac724df4249c2c3ae552556b1e43d576b"></a>

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCursorOrNull`](#structFRHAPI__PagedPlayerMatchResponse_1a117b447c7681e10bdce3233feb4977b1)`()` <a id="structFRHAPI__PagedPlayerMatchResponse_1a117b447c7681e10bdce3233feb4977b1"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCursorOrNull`](#structFRHAPI__PagedPlayerMatchResponse_1a398c9c13365034808dc8b68a573a8d2c)`() const` <a id="structFRHAPI__PagedPlayerMatchResponse_1a398c9c13365034808dc8b68a573a8d2c"></a>

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a36502a6f5fc44bd0610d3ea4f8d523c8)`(const FString & NewValue)` <a id="structFRHAPI__PagedPlayerMatchResponse_1a36502a6f5fc44bd0610d3ea4f8d523c8"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.

#### `public inline void `[`SetCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a32480ae6350e004219f45bd6f9013dd8)`(FString && NewValue)` <a id="structFRHAPI__PagedPlayerMatchResponse_1a32480ae6350e004219f45bd6f9013dd8"></a>

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true using move semantics.

#### `public inline void `[`ClearCursor`](#structFRHAPI__PagedPlayerMatchResponse_1a272f2811090070e798f66afe15540034)`()` <a id="structFRHAPI__PagedPlayerMatchResponse_1a272f2811090070e798f66afe15540034"></a>

Clears the value of Cursor_Optional and sets Cursor_IsSet to false.

