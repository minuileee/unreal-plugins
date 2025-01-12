# group `RHAPI_VoipTokenResponse` <a id="group__RHAPI__VoipTokenResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_VoipTokenResponse`](#structFRHAPI__VoipTokenResponse) | 

## struct `FRHAPI_VoipTokenResponse` <a id="structFRHAPI__VoipTokenResponse"></a>

```
struct FRHAPI_VoipTokenResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Token`](#structFRHAPI__VoipTokenResponse_1ae6904f560d8ec1c2b0c90866fe0d43a4) | Signed auth voip login token for a specific client.
`public FString `[`Issuer`](#structFRHAPI__VoipTokenResponse_1a3ef6834648d120f241f43bba202b5819) | Issuer for client's login token.
`public FString `[`Server`](#structFRHAPI__VoipTokenResponse_1ac370e4ee2d897d829a74163a82c2779b) | Server for voip login.
`public virtual bool `[`FromJson`](#structFRHAPI__VoipTokenResponse_1a117011c801e46294db2bb4fb98af09cb)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__VoipTokenResponse_1a3cad0e14f6e97b0d8c03d4b22207d5d4)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetToken`](#structFRHAPI__VoipTokenResponse_1ab8b89ac989950fe7c3deef96d739c90b)`()` | Gets the value of Token.
`public inline const FString & `[`GetToken`](#structFRHAPI__VoipTokenResponse_1acced7605884ab515351552cf18c50dcb)`() const` | Gets the value of Token.
`public inline void `[`SetToken`](#structFRHAPI__VoipTokenResponse_1a663094ae6c0d41f5df38e053f0950a51)`(const FString & NewValue)` | Sets the value of Token.
`public inline void `[`SetToken`](#structFRHAPI__VoipTokenResponse_1a9c50e4a03bb060cbbcb30a37edde1b21)`(FString && NewValue)` | Sets the value of Token using move semantics.
`public inline FString & `[`GetIssuer`](#structFRHAPI__VoipTokenResponse_1ab60052b9178fc10d07601b51aa63a0a2)`()` | Gets the value of Issuer.
`public inline const FString & `[`GetIssuer`](#structFRHAPI__VoipTokenResponse_1ae00dbda58fd5019114adc8e558bada96)`() const` | Gets the value of Issuer.
`public inline void `[`SetIssuer`](#structFRHAPI__VoipTokenResponse_1a4feb20ab6ece4b7a995361d5d278adfb)`(const FString & NewValue)` | Sets the value of Issuer.
`public inline void `[`SetIssuer`](#structFRHAPI__VoipTokenResponse_1a4063ec91c4044dbacf49547dc136181e)`(FString && NewValue)` | Sets the value of Issuer using move semantics.
`public inline FString & `[`GetServer`](#structFRHAPI__VoipTokenResponse_1a41068de0cdc5e7cf37fdd7f43fd7699a)`()` | Gets the value of Server.
`public inline const FString & `[`GetServer`](#structFRHAPI__VoipTokenResponse_1ae9b0e0324a69c2077d86956aa58f9b5e)`() const` | Gets the value of Server.
`public inline void `[`SetServer`](#structFRHAPI__VoipTokenResponse_1a24519da94f1e862b226eb748c12584e6)`(const FString & NewValue)` | Sets the value of Server.
`public inline void `[`SetServer`](#structFRHAPI__VoipTokenResponse_1af05c2a509cb5b87e2ab476e51a41df49)`(FString && NewValue)` | Sets the value of Server using move semantics.

### Members

#### `public FString `[`Token`](#structFRHAPI__VoipTokenResponse_1ae6904f560d8ec1c2b0c90866fe0d43a4) <a id="structFRHAPI__VoipTokenResponse_1ae6904f560d8ec1c2b0c90866fe0d43a4"></a>

Signed auth voip login token for a specific client.

#### `public FString `[`Issuer`](#structFRHAPI__VoipTokenResponse_1a3ef6834648d120f241f43bba202b5819) <a id="structFRHAPI__VoipTokenResponse_1a3ef6834648d120f241f43bba202b5819"></a>

Issuer for client's login token.

#### `public FString `[`Server`](#structFRHAPI__VoipTokenResponse_1ac370e4ee2d897d829a74163a82c2779b) <a id="structFRHAPI__VoipTokenResponse_1ac370e4ee2d897d829a74163a82c2779b"></a>

Server for voip login.

#### `public virtual bool `[`FromJson`](#structFRHAPI__VoipTokenResponse_1a117011c801e46294db2bb4fb98af09cb)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__VoipTokenResponse_1a117011c801e46294db2bb4fb98af09cb"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__VoipTokenResponse_1a3cad0e14f6e97b0d8c03d4b22207d5d4)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__VoipTokenResponse_1a3cad0e14f6e97b0d8c03d4b22207d5d4"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetToken`](#structFRHAPI__VoipTokenResponse_1ab8b89ac989950fe7c3deef96d739c90b)`()` <a id="structFRHAPI__VoipTokenResponse_1ab8b89ac989950fe7c3deef96d739c90b"></a>

Gets the value of Token.

#### `public inline const FString & `[`GetToken`](#structFRHAPI__VoipTokenResponse_1acced7605884ab515351552cf18c50dcb)`() const` <a id="structFRHAPI__VoipTokenResponse_1acced7605884ab515351552cf18c50dcb"></a>

Gets the value of Token.

#### `public inline void `[`SetToken`](#structFRHAPI__VoipTokenResponse_1a663094ae6c0d41f5df38e053f0950a51)`(const FString & NewValue)` <a id="structFRHAPI__VoipTokenResponse_1a663094ae6c0d41f5df38e053f0950a51"></a>

Sets the value of Token.

#### `public inline void `[`SetToken`](#structFRHAPI__VoipTokenResponse_1a9c50e4a03bb060cbbcb30a37edde1b21)`(FString && NewValue)` <a id="structFRHAPI__VoipTokenResponse_1a9c50e4a03bb060cbbcb30a37edde1b21"></a>

Sets the value of Token using move semantics.

#### `public inline FString & `[`GetIssuer`](#structFRHAPI__VoipTokenResponse_1ab60052b9178fc10d07601b51aa63a0a2)`()` <a id="structFRHAPI__VoipTokenResponse_1ab60052b9178fc10d07601b51aa63a0a2"></a>

Gets the value of Issuer.

#### `public inline const FString & `[`GetIssuer`](#structFRHAPI__VoipTokenResponse_1ae00dbda58fd5019114adc8e558bada96)`() const` <a id="structFRHAPI__VoipTokenResponse_1ae00dbda58fd5019114adc8e558bada96"></a>

Gets the value of Issuer.

#### `public inline void `[`SetIssuer`](#structFRHAPI__VoipTokenResponse_1a4feb20ab6ece4b7a995361d5d278adfb)`(const FString & NewValue)` <a id="structFRHAPI__VoipTokenResponse_1a4feb20ab6ece4b7a995361d5d278adfb"></a>

Sets the value of Issuer.

#### `public inline void `[`SetIssuer`](#structFRHAPI__VoipTokenResponse_1a4063ec91c4044dbacf49547dc136181e)`(FString && NewValue)` <a id="structFRHAPI__VoipTokenResponse_1a4063ec91c4044dbacf49547dc136181e"></a>

Sets the value of Issuer using move semantics.

#### `public inline FString & `[`GetServer`](#structFRHAPI__VoipTokenResponse_1a41068de0cdc5e7cf37fdd7f43fd7699a)`()` <a id="structFRHAPI__VoipTokenResponse_1a41068de0cdc5e7cf37fdd7f43fd7699a"></a>

Gets the value of Server.

#### `public inline const FString & `[`GetServer`](#structFRHAPI__VoipTokenResponse_1ae9b0e0324a69c2077d86956aa58f9b5e)`() const` <a id="structFRHAPI__VoipTokenResponse_1ae9b0e0324a69c2077d86956aa58f9b5e"></a>

Gets the value of Server.

#### `public inline void `[`SetServer`](#structFRHAPI__VoipTokenResponse_1a24519da94f1e862b226eb748c12584e6)`(const FString & NewValue)` <a id="structFRHAPI__VoipTokenResponse_1a24519da94f1e862b226eb748c12584e6"></a>

Sets the value of Server.

#### `public inline void `[`SetServer`](#structFRHAPI__VoipTokenResponse_1af05c2a509cb5b87e2ab476e51a41df49)`(FString && NewValue)` <a id="structFRHAPI__VoipTokenResponse_1af05c2a509cb5b87e2ab476e51a41df49"></a>

Sets the value of Server using move semantics.

