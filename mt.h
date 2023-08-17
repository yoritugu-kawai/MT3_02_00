#pragma once
#include <Novice.h>
#include <cmath>
#include <assert.h>

struct Vector3
{
	float x;
	float y;
	float z;
};

struct Matrix4x4
{
	float m[4][4];
};

struct Sphere
{
	Vector3 center;
	float radius;
};

struct Line
{
	Vector3 origin;
	Vector3 diff;
};

struct Ray
{
	Vector3 origin;
	Vector3 diff;
};

struct Segment
{
	Vector3 origin;
	Vector3 diff;
};


     float Dot(const Vector3& v1, const Vector3& v2);
	
	 Vector3 Add(const Vector3& v1, const Vector3& v2);
	

	 Vector3 Cross(const Vector3& v1, const Vector3& v2);
	

	 Vector3 Subtract(const Vector3& v1, const Vector3& v2);
	

	 Vector3 Multiply(const float& v1, const Vector3& v2);
	
	 Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2);
	

	 Matrix4x4 MakeTranslateMatrix(const Vector3 translate);
	

	 Matrix4x4 MakeScaleMatrix(const Vector3 scale);
	

	 Matrix4x4 MakeRotateXMatrix(float radian);
	

	 Matrix4x4 MakeRotateYMatrix(float radian);
	

	 Matrix4x4 MakeRotateZMatrix(float radian);
	
	 Matrix4x4 MakeAffineMatrix(const Vector3 scale, const Vector3 rotate, const Vector3 translate);
	

	
	 Matrix4x4 MakePerspectiveFovMatrix(float fovY, float aspectRetio, float nearClip, float farClip);

	 Matrix4x4 MakeOrthographicMatrix(float left, float top, float right, float bottom, float nearClip, float farClip);

	 Matrix4x4 MakeViewPortMatrix(float left, float top, float width, float height, float minDepth, float maxDepth);


	 Matrix4x4 Inverse(const Matrix4x4& m);


	 Matrix4x4 Transpose(const Matrix4x4& m);
	
	 Matrix4x4 MakeIdentity4x4();
	

	 Vector3 TransformCoord(Vector3 vector, Matrix4x4 matrix);
	

	 Vector3 Project(const Vector3& v1, const Vector3& v2);
	

	 Vector3 ClosestPoint(const Vector3& point, const Segment& segment);
	

	 float Length(const Vector3& v);
	
	 Vector3 Normalize(const Vector3& v);
	

	 float Clamp(float num, float max, float min);

	 void DrawGrid(const Matrix4x4& viewProjectionMatrix, const Matrix4x4& viewportMatrix);
	

	 void DrawShere(const Sphere& sphere, const Matrix4x4& viewProjectionMatrix, const Matrix4x4& viewportMatrix, uint32_t color);

