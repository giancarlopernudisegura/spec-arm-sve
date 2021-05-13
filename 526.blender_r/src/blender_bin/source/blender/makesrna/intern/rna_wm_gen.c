
/* Automatically generated struct definitions for the Data API.
 * Do not edit manually, changes will be overwritten.           */
#if defined(SPEC)
#include <spec_config.h>
#endif

#define RNA_RUNTIME

#include <float.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

#include <stddef.h>

#include "MEM_guardedalloc.h"

#include "DNA_ID.h"
#include "DNA_scene_types.h"
#include "BLI_blenlib.h"

#include "BLI_utildefines.h"

#include "BKE_context.h"
#include "BKE_library.h"
#include "BKE_main.h"
#include "BKE_report.h"
#include "RNA_define.h"
#include "RNA_types.h"
#include "rna_internal.h"

extern StructRNA RNA_Struct;
extern StructRNA RNA_Property;
extern StructRNA RNA_BoolProperty;
extern StructRNA RNA_IntProperty;
extern StructRNA RNA_FloatProperty;
extern StructRNA RNA_StringProperty;
extern StructRNA RNA_EnumProperty;
extern StructRNA RNA_EnumPropertyItem;
extern StructRNA RNA_PointerProperty;
extern StructRNA RNA_CollectionProperty;
extern StructRNA RNA_Function;
extern StructRNA RNA_BlenderRNA;
extern StructRNA RNA_UnknownType;
extern StructRNA RNA_AnyType;
extern StructRNA RNA_ID;
extern StructRNA RNA_PropertyGroupItem;
extern StructRNA RNA_PropertyGroup;
extern StructRNA RNA_IDMaterials;
extern StructRNA RNA_Library;
extern StructRNA RNA_Texture;
extern StructRNA RNA_CloudsTexture;
extern StructRNA RNA_WoodTexture;
extern StructRNA RNA_MarbleTexture;
extern StructRNA RNA_MagicTexture;
extern StructRNA RNA_BlendTexture;
extern StructRNA RNA_StucciTexture;
extern StructRNA RNA_NoiseTexture;
extern StructRNA RNA_ImageTexture;
extern StructRNA RNA_EnvironmentMapTexture;
extern StructRNA RNA_MusgraveTexture;
extern StructRNA RNA_VoronoiTexture;
extern StructRNA RNA_DistortedNoiseTexture;
extern StructRNA RNA_PointDensity;
extern StructRNA RNA_PointDensityTexture;
extern StructRNA RNA_VoxelData;
extern StructRNA RNA_VoxelDataTexture;
extern StructRNA RNA_OceanTexData;
extern StructRNA RNA_OceanTexture;
extern StructRNA RNA_TextureSlot;
extern StructRNA RNA_EnvironmentMap;
extern StructRNA RNA_TexMapping;
extern StructRNA RNA_ColorMapping;
extern StructRNA RNA_Action;
extern StructRNA RNA_ActionFCurves;
extern StructRNA RNA_ActionGroups;
extern StructRNA RNA_ActionPoseMarkers;
extern StructRNA RNA_ActionGroup;
extern StructRNA RNA_DopeSheet;
extern StructRNA RNA_AnimData;
extern StructRNA RNA_NlaTracks;
extern StructRNA RNA_AnimDataDrivers;
extern StructRNA RNA_KeyingSet;
extern StructRNA RNA_KeyingSetPaths;
extern StructRNA RNA_KeyingSetPath;
extern StructRNA RNA_KeyingSetInfo;
extern StructRNA RNA_AnimViz;
extern StructRNA RNA_AnimVizOnionSkinning;
extern StructRNA RNA_AnimVizMotionPaths;
extern StructRNA RNA_MotionPath;
extern StructRNA RNA_MotionPathVert;
extern StructRNA RNA_Actuator;
extern StructRNA RNA_ActionActuator;
extern StructRNA RNA_ObjectActuator;
extern StructRNA RNA_CameraActuator;
extern StructRNA RNA_SoundActuator;
extern StructRNA RNA_PropertyActuator;
extern StructRNA RNA_ConstraintActuator;
extern StructRNA RNA_EditObjectActuator;
extern StructRNA RNA_SceneActuator;
extern StructRNA RNA_RandomActuator;
extern StructRNA RNA_MessageActuator;
extern StructRNA RNA_GameActuator;
extern StructRNA RNA_VisibilityActuator;
extern StructRNA RNA_Filter2DActuator;
extern StructRNA RNA_ParentActuator;
extern StructRNA RNA_StateActuator;
extern StructRNA RNA_ArmatureActuator;
extern StructRNA RNA_SteeringActuator;
extern StructRNA RNA_MouseActuator;
extern StructRNA RNA_Armature;
extern StructRNA RNA_ArmatureBones;
extern StructRNA RNA_ArmatureEditBones;
extern StructRNA RNA_Bone;
extern StructRNA RNA_EditBone;
extern StructRNA RNA_BoidRule;
extern StructRNA RNA_BoidRuleGoal;
extern StructRNA RNA_BoidRuleAvoid;
extern StructRNA RNA_BoidRuleAvoidCollision;
extern StructRNA RNA_BoidRuleFollowLeader;
extern StructRNA RNA_BoidRuleAverageSpeed;
extern StructRNA RNA_BoidRuleFight;
extern StructRNA RNA_BoidState;
extern StructRNA RNA_BoidSettings;
extern StructRNA RNA_Brush;
extern StructRNA RNA_BrushCapabilities;
extern StructRNA RNA_SculptToolCapabilities;
extern StructRNA RNA_ImapaintToolCapabilities;
extern StructRNA RNA_BrushTextureSlot;
extern StructRNA RNA_OperatorStrokeElement;
extern StructRNA RNA_Camera;
extern StructRNA RNA_ClothSettings;
extern StructRNA RNA_ClothCollisionSettings;
extern StructRNA RNA_CurveMapPoint;
extern StructRNA RNA_CurveMap;
extern StructRNA RNA_CurveMapPoints;
extern StructRNA RNA_CurveMapping;
extern StructRNA RNA_ColorRampElement;
extern StructRNA RNA_ColorRamp;
extern StructRNA RNA_ColorRampElements;
extern StructRNA RNA_Histogram;
extern StructRNA RNA_Scopes;
extern StructRNA RNA_ColorManagedDisplaySettings;
extern StructRNA RNA_ColorManagedViewSettings;
extern StructRNA RNA_ColorManagedInputColorspaceSettings;
extern StructRNA RNA_ColorManagedSequencerColorspaceSettings;
extern StructRNA RNA_Constraint;
extern StructRNA RNA_ConstraintTarget;
extern StructRNA RNA_ChildOfConstraint;
extern StructRNA RNA_PythonConstraint;
extern StructRNA RNA_StretchToConstraint;
extern StructRNA RNA_FollowPathConstraint;
extern StructRNA RNA_LockedTrackConstraint;
extern StructRNA RNA_ActionConstraint;
extern StructRNA RNA_CopyScaleConstraint;
extern StructRNA RNA_MaintainVolumeConstraint;
extern StructRNA RNA_CopyLocationConstraint;
extern StructRNA RNA_CopyRotationConstraint;
extern StructRNA RNA_CopyTransformsConstraint;
extern StructRNA RNA_FloorConstraint;
extern StructRNA RNA_TrackToConstraint;
extern StructRNA RNA_KinematicConstraint;
extern StructRNA RNA_RigidBodyJointConstraint;
extern StructRNA RNA_ClampToConstraint;
extern StructRNA RNA_LimitDistanceConstraint;
extern StructRNA RNA_LimitScaleConstraint;
extern StructRNA RNA_LimitRotationConstraint;
extern StructRNA RNA_LimitLocationConstraint;
extern StructRNA RNA_TransformConstraint;
extern StructRNA RNA_ShrinkwrapConstraint;
extern StructRNA RNA_DampedTrackConstraint;
extern StructRNA RNA_SplineIKConstraint;
extern StructRNA RNA_PivotConstraint;
extern StructRNA RNA_FollowTrackConstraint;
extern StructRNA RNA_CameraSolverConstraint;
extern StructRNA RNA_ObjectSolverConstraint;
extern StructRNA RNA_Context;
extern StructRNA RNA_Controller;
extern StructRNA RNA_ExpressionController;
extern StructRNA RNA_PythonController;
extern StructRNA RNA_AndController;
extern StructRNA RNA_OrController;
extern StructRNA RNA_NorController;
extern StructRNA RNA_NandController;
extern StructRNA RNA_XorController;
extern StructRNA RNA_XnorController;
extern StructRNA RNA_Curve;
extern StructRNA RNA_CurveSplines;
extern StructRNA RNA_SurfaceCurve;
extern StructRNA RNA_TextCurve;
extern StructRNA RNA_TextBox;
extern StructRNA RNA_TextCharacterFormat;
extern StructRNA RNA_SplinePoint;
extern StructRNA RNA_BezierSplinePoint;
extern StructRNA RNA_Spline;
extern StructRNA RNA_SplinePoints;
extern StructRNA RNA_SplineBezierPoints;
extern StructRNA RNA_DynamicPaintCanvasSettings;
extern StructRNA RNA_DynamicPaintSurfaces;
extern StructRNA RNA_DynamicPaintBrushSettings;
extern StructRNA RNA_DynamicPaintSurface;
extern StructRNA RNA_FCurve;
extern StructRNA RNA_FCurveKeyframePoints;
extern StructRNA RNA_FCurveModifiers;
extern StructRNA RNA_Keyframe;
extern StructRNA RNA_FCurveSample;
extern StructRNA RNA_DriverTarget;
extern StructRNA RNA_DriverVariable;
extern StructRNA RNA_Driver;
extern StructRNA RNA_ChannelDriverVariables;
extern StructRNA RNA_FModifier;
extern StructRNA RNA_FModifierGenerator;
extern StructRNA RNA_FModifierFunctionGenerator;
extern StructRNA RNA_FModifierEnvelope;
extern StructRNA RNA_FModifierEnvelopeControlPoints;
extern StructRNA RNA_FModifierEnvelopeControlPoint;
extern StructRNA RNA_FModifierCycles;
extern StructRNA RNA_FModifierPython;
extern StructRNA RNA_FModifierLimits;
extern StructRNA RNA_FModifierNoise;
extern StructRNA RNA_FModifierStepped;
extern StructRNA RNA_FluidSettings;
extern StructRNA RNA_DomainFluidSettings;
extern StructRNA RNA_FluidMeshVertex;
extern StructRNA RNA_FluidFluidSettings;
extern StructRNA RNA_ObstacleFluidSettings;
extern StructRNA RNA_InflowFluidSettings;
extern StructRNA RNA_OutflowFluidSettings;
extern StructRNA RNA_ParticleFluidSettings;
extern StructRNA RNA_ControlFluidSettings;
extern StructRNA RNA_GreasePencil;
extern StructRNA RNA_GreasePencilLayers;
extern StructRNA RNA_GPencilLayer;
extern StructRNA RNA_GPencilFrames;
extern StructRNA RNA_GPencilFrame;
extern StructRNA RNA_GPencilStrokes;
extern StructRNA RNA_GPencilStroke;
extern StructRNA RNA_GPencilStrokePoints;
extern StructRNA RNA_GPencilStrokePoint;
extern StructRNA RNA_Group;
extern StructRNA RNA_GroupObjects;
extern StructRNA RNA_RenderSlot;
extern StructRNA RNA_RenderSlots;
extern StructRNA RNA_Image;
extern StructRNA RNA_ImageUser;
extern StructRNA RNA_Key;
extern StructRNA RNA_ShapeKey;
extern StructRNA RNA_ShapeKeyPoint;
extern StructRNA RNA_ShapeKeyCurvePoint;
extern StructRNA RNA_ShapeKeyBezierPoint;
extern StructRNA RNA_Lamp;
extern StructRNA RNA_LampTextureSlots;
extern StructRNA RNA_PointLamp;
extern StructRNA RNA_AreaLamp;
extern StructRNA RNA_SpotLamp;
extern StructRNA RNA_SunLamp;
extern StructRNA RNA_LampSkySettings;
extern StructRNA RNA_HemiLamp;
extern StructRNA RNA_LampTextureSlot;
extern StructRNA RNA_Lattice;
extern StructRNA RNA_LatticePoint;
extern StructRNA RNA_LineStyleModifier;
extern StructRNA RNA_LineStyleColorModifier;
extern StructRNA RNA_LineStyleColorModifier_AlongStroke;
extern StructRNA RNA_LineStyleColorModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleColorModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleColorModifier_Material;
extern StructRNA RNA_LineStyleAlphaModifier;
extern StructRNA RNA_LineStyleAlphaModifier_AlongStroke;
extern StructRNA RNA_LineStyleAlphaModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleAlphaModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleAlphaModifier_Material;
extern StructRNA RNA_LineStyleThicknessModifier;
extern StructRNA RNA_LineStyleThicknessModifier_AlongStroke;
extern StructRNA RNA_LineStyleThicknessModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleThicknessModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleThicknessModifier_Material;
extern StructRNA RNA_LineStyleThicknessModifier_Calligraphy;
extern StructRNA RNA_LineStyleGeometryModifier;
extern StructRNA RNA_LineStyleGeometryModifier_Sampling;
extern StructRNA RNA_LineStyleGeometryModifier_BezierCurve;
extern StructRNA RNA_LineStyleGeometryModifier_SinusDisplacement;
extern StructRNA RNA_LineStyleGeometryModifier_SpatialNoise;
extern StructRNA RNA_LineStyleGeometryModifier_PerlinNoise1D;
extern StructRNA RNA_LineStyleGeometryModifier_PerlinNoise2D;
extern StructRNA RNA_LineStyleGeometryModifier_BackboneStretcher;
extern StructRNA RNA_LineStyleGeometryModifier_TipRemover;
extern StructRNA RNA_LineStyleGeometryModifier_Polygonalization;
extern StructRNA RNA_LineStyleGeometryModifier_GuidingLines;
extern StructRNA RNA_LineStyleGeometryModifier_Blueprint;
extern StructRNA RNA_LineStyleGeometryModifier_2DOffset;
extern StructRNA RNA_LineStyleGeometryModifier_2DTransform;
extern StructRNA RNA_FreestyleLineStyle;
extern StructRNA RNA_LineStyleTextureSlots;
extern StructRNA RNA_LineStyleColorModifiers;
extern StructRNA RNA_LineStyleAlphaModifiers;
extern StructRNA RNA_LineStyleThicknessModifiers;
extern StructRNA RNA_LineStyleGeometryModifiers;
extern StructRNA RNA_LineStyleTextureSlot;
extern StructRNA RNA_BlendData;
extern StructRNA RNA_BlendDataCameras;
extern StructRNA RNA_BlendDataScenes;
extern StructRNA RNA_BlendDataObjects;
extern StructRNA RNA_BlendDataMaterials;
extern StructRNA RNA_BlendDataNodeTrees;
extern StructRNA RNA_BlendDataMeshes;
extern StructRNA RNA_BlendDataLamps;
extern StructRNA RNA_BlendDataLibraries;
extern StructRNA RNA_BlendDataScreens;
extern StructRNA RNA_BlendDataWindowManagers;
extern StructRNA RNA_BlendDataImages;
extern StructRNA RNA_BlendDataLattices;
extern StructRNA RNA_BlendDataCurves;
extern StructRNA RNA_BlendDataMetaBalls;
extern StructRNA RNA_BlendDataFonts;
extern StructRNA RNA_BlendDataTextures;
extern StructRNA RNA_BlendDataBrushes;
extern StructRNA RNA_BlendDataWorlds;
extern StructRNA RNA_BlendDataGroups;
extern StructRNA RNA_BlendDataTexts;
extern StructRNA RNA_BlendDataSpeakers;
extern StructRNA RNA_BlendDataSounds;
extern StructRNA RNA_BlendDataArmatures;
extern StructRNA RNA_BlendDataActions;
extern StructRNA RNA_BlendDataParticles;
extern StructRNA RNA_BlendDataGreasePencils;
extern StructRNA RNA_BlendDataMovieClips;
extern StructRNA RNA_BlendDataMasks;
extern StructRNA RNA_BlendDataLineStyles;
extern StructRNA RNA_Material;
extern StructRNA RNA_MaterialTextureSlots;
extern StructRNA RNA_TexPaintSlot;
extern StructRNA RNA_MaterialRaytraceMirror;
extern StructRNA RNA_MaterialRaytraceTransparency;
extern StructRNA RNA_MaterialVolume;
extern StructRNA RNA_MaterialHalo;
extern StructRNA RNA_MaterialSubsurfaceScattering;
extern StructRNA RNA_MaterialTextureSlot;
extern StructRNA RNA_MaterialStrand;
extern StructRNA RNA_MaterialPhysics;
extern StructRNA RNA_MaterialGameSettings;
extern StructRNA RNA_Mesh;
extern StructRNA RNA_MeshVertices;
extern StructRNA RNA_MeshEdges;
extern StructRNA RNA_MeshTessFaces;
extern StructRNA RNA_MeshLoops;
extern StructRNA RNA_MeshPolygons;
extern StructRNA RNA_UVLoopLayers;
extern StructRNA RNA_TessfaceUVTextures;
extern StructRNA RNA_UVTextures;
extern StructRNA RNA_VertexColors;
extern StructRNA RNA_LoopColors;
extern StructRNA RNA_FloatProperties;
extern StructRNA RNA_IntProperties;
extern StructRNA RNA_StringProperties;
extern StructRNA RNA_MeshSkinVertexLayer;
extern StructRNA RNA_MeshSkinVertex;
extern StructRNA RNA_MeshVertex;
extern StructRNA RNA_VertexGroupElement;
extern StructRNA RNA_MeshEdge;
extern StructRNA RNA_MeshTessFace;
extern StructRNA RNA_MeshLoop;
extern StructRNA RNA_MeshPolygon;
extern StructRNA RNA_MeshUVLoopLayer;
extern StructRNA RNA_MeshUVLoop;
extern StructRNA RNA_MeshTextureFaceLayer;
extern StructRNA RNA_MeshTextureFace;
extern StructRNA RNA_MeshTexturePolyLayer;
extern StructRNA RNA_MeshTexturePoly;
extern StructRNA RNA_MeshColorLayer;
extern StructRNA RNA_MeshColor;
extern StructRNA RNA_MeshLoopColorLayer;
extern StructRNA RNA_MeshLoopColor;
extern StructRNA RNA_MeshFloatPropertyLayer;
extern StructRNA RNA_MeshFloatProperty;
extern StructRNA RNA_MeshIntPropertyLayer;
extern StructRNA RNA_MeshIntProperty;
extern StructRNA RNA_MeshStringPropertyLayer;
extern StructRNA RNA_MeshStringProperty;
extern StructRNA RNA_MetaElement;
extern StructRNA RNA_MetaBall;
extern StructRNA RNA_MetaBallElements;
extern StructRNA RNA_Modifier;
extern StructRNA RNA_SubsurfModifier;
extern StructRNA RNA_LatticeModifier;
extern StructRNA RNA_CurveModifier;
extern StructRNA RNA_BuildModifier;
extern StructRNA RNA_MirrorModifier;
extern StructRNA RNA_DecimateModifier;
extern StructRNA RNA_WaveModifier;
extern StructRNA RNA_ArmatureModifier;
extern StructRNA RNA_HookModifier;
extern StructRNA RNA_SoftBodyModifier;
extern StructRNA RNA_BooleanModifier;
extern StructRNA RNA_ArrayModifier;
extern StructRNA RNA_EdgeSplitModifier;
extern StructRNA RNA_DisplaceModifier;
extern StructRNA RNA_UVProjectModifier;
extern StructRNA RNA_UVProjector;
extern StructRNA RNA_SmoothModifier;
extern StructRNA RNA_CastModifier;
extern StructRNA RNA_MeshDeformModifier;
extern StructRNA RNA_ParticleSystemModifier;
extern StructRNA RNA_ParticleInstanceModifier;
extern StructRNA RNA_ExplodeModifier;
extern StructRNA RNA_ClothModifier;
extern StructRNA RNA_CollisionModifier;
extern StructRNA RNA_BevelModifier;
extern StructRNA RNA_ShrinkwrapModifier;
extern StructRNA RNA_FluidSimulationModifier;
extern StructRNA RNA_MaskModifier;
extern StructRNA RNA_SimpleDeformModifier;
extern StructRNA RNA_WarpModifier;
extern StructRNA RNA_MultiresModifier;
extern StructRNA RNA_SurfaceModifier;
extern StructRNA RNA_SmokeModifier;
extern StructRNA RNA_SolidifyModifier;
extern StructRNA RNA_ScrewModifier;
extern StructRNA RNA_UVWarpModifier;
extern StructRNA RNA_VertexWeightEditModifier;
extern StructRNA RNA_VertexWeightMixModifier;
extern StructRNA RNA_VertexWeightProximityModifier;
extern StructRNA RNA_DynamicPaintModifier;
extern StructRNA RNA_OceanModifier;
extern StructRNA RNA_RemeshModifier;
extern StructRNA RNA_SkinModifier;
extern StructRNA RNA_LaplacianSmoothModifier;
extern StructRNA RNA_TriangulateModifier;
extern StructRNA RNA_MeshCacheModifier;
extern StructRNA RNA_LaplacianDeformModifier;
extern StructRNA RNA_WireframeModifier;
extern StructRNA RNA_NlaTrack;
extern StructRNA RNA_NlaStrips;
extern StructRNA RNA_NlaStrip;
extern StructRNA RNA_NodeSocket;
extern StructRNA RNA_NodeSocketInterface;
extern StructRNA RNA_Node;
extern StructRNA RNA_NodeInputs;
extern StructRNA RNA_NodeOutputs;
extern StructRNA RNA_NodeLink;
extern StructRNA RNA_NodeInternalSocketTemplate;
extern StructRNA RNA_NodeInternal;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_NodeTree;
extern StructRNA RNA_Nodes;
extern StructRNA RNA_NodeLinks;
extern StructRNA RNA_NodeTreeInputs;
extern StructRNA RNA_NodeTreeOutputs;
extern StructRNA RNA_NodeSocketStandard;
extern StructRNA RNA_NodeSocketInterfaceStandard;
extern StructRNA RNA_NodeSocketFloat;
extern StructRNA RNA_NodeSocketInterfaceFloat;
extern StructRNA RNA_NodeSocketFloatUnsigned;
extern StructRNA RNA_NodeSocketInterfaceFloatUnsigned;
extern StructRNA RNA_NodeSocketFloatPercentage;
extern StructRNA RNA_NodeSocketInterfaceFloatPercentage;
extern StructRNA RNA_NodeSocketFloatFactor;
extern StructRNA RNA_NodeSocketInterfaceFloatFactor;
extern StructRNA RNA_NodeSocketFloatAngle;
extern StructRNA RNA_NodeSocketInterfaceFloatAngle;
extern StructRNA RNA_NodeSocketFloatTime;
extern StructRNA RNA_NodeSocketInterfaceFloatTime;
extern StructRNA RNA_NodeSocketInt;
extern StructRNA RNA_NodeSocketInterfaceInt;
extern StructRNA RNA_NodeSocketIntUnsigned;
extern StructRNA RNA_NodeSocketInterfaceIntUnsigned;
extern StructRNA RNA_NodeSocketIntPercentage;
extern StructRNA RNA_NodeSocketInterfaceIntPercentage;
extern StructRNA RNA_NodeSocketIntFactor;
extern StructRNA RNA_NodeSocketInterfaceIntFactor;
extern StructRNA RNA_NodeSocketBool;
extern StructRNA RNA_NodeSocketInterfaceBool;
extern StructRNA RNA_NodeSocketVector;
extern StructRNA RNA_NodeSocketInterfaceVector;
extern StructRNA RNA_NodeSocketVectorTranslation;
extern StructRNA RNA_NodeSocketInterfaceVectorTranslation;
extern StructRNA RNA_NodeSocketVectorDirection;
extern StructRNA RNA_NodeSocketInterfaceVectorDirection;
extern StructRNA RNA_NodeSocketVectorVelocity;
extern StructRNA RNA_NodeSocketInterfaceVectorVelocity;
extern StructRNA RNA_NodeSocketVectorAcceleration;
extern StructRNA RNA_NodeSocketInterfaceVectorAcceleration;
extern StructRNA RNA_NodeSocketVectorEuler;
extern StructRNA RNA_NodeSocketInterfaceVectorEuler;
extern StructRNA RNA_NodeSocketVectorXYZ;
extern StructRNA RNA_NodeSocketInterfaceVectorXYZ;
extern StructRNA RNA_NodeSocketColor;
extern StructRNA RNA_NodeSocketInterfaceColor;
extern StructRNA RNA_NodeSocketString;
extern StructRNA RNA_NodeSocketInterfaceString;
extern StructRNA RNA_NodeSocketShader;
extern StructRNA RNA_NodeSocketInterfaceShader;
extern StructRNA RNA_NodeSocketVirtual;
extern StructRNA RNA_CompositorNodeTree;
extern StructRNA RNA_ShaderNodeTree;
extern StructRNA RNA_TextureNodeTree;
extern StructRNA RNA_NodeFrame;
extern StructRNA RNA_NodeGroup;
extern StructRNA RNA_NodeGroupInput;
extern StructRNA RNA_NodeGroupOutput;
extern StructRNA RNA_NodeReroute;
extern StructRNA RNA_ShaderNodeOutput;
extern StructRNA RNA_ShaderNodeMaterial;
extern StructRNA RNA_ShaderNodeRGB;
extern StructRNA RNA_ShaderNodeValue;
extern StructRNA RNA_ShaderNodeMixRGB;
extern StructRNA RNA_ShaderNodeValToRGB;
extern StructRNA RNA_ShaderNodeRGBToBW;
extern StructRNA RNA_ShaderNodeTexture;
extern StructRNA RNA_ShaderNodeNormal;
extern StructRNA RNA_ShaderNodeGamma;
extern StructRNA RNA_ShaderNodeBrightContrast;
extern StructRNA RNA_ShaderNodeGeometry;
extern StructRNA RNA_ShaderNodeMapping;
extern StructRNA RNA_ShaderNodeVectorCurve;
extern StructRNA RNA_ShaderNodeRGBCurve;
extern StructRNA RNA_ShaderNodeCameraData;
extern StructRNA RNA_ShaderNodeLampData;
extern StructRNA RNA_ShaderNodeMath;
extern StructRNA RNA_ShaderNodeVectorMath;
extern StructRNA RNA_ShaderNodeSqueeze;
extern StructRNA RNA_ShaderNodeExtendedMaterial;
extern StructRNA RNA_ShaderNodeInvert;
extern StructRNA RNA_ShaderNodeSeparateRGB;
extern StructRNA RNA_ShaderNodeCombineRGB;
extern StructRNA RNA_ShaderNodeHueSaturation;
extern StructRNA RNA_ShaderNodeOutputMaterial;
extern StructRNA RNA_ShaderNodeOutputLamp;
extern StructRNA RNA_ShaderNodeOutputWorld;
extern StructRNA RNA_ShaderNodeOutputLineStyle;
extern StructRNA RNA_ShaderNodeFresnel;
extern StructRNA RNA_ShaderNodeLayerWeight;
extern StructRNA RNA_ShaderNodeMixShader;
extern StructRNA RNA_ShaderNodeAddShader;
extern StructRNA RNA_ShaderNodeAttribute;
extern StructRNA RNA_ShaderNodeAmbientOcclusion;
extern StructRNA RNA_ShaderNodeBackground;
extern StructRNA RNA_ShaderNodeHoldout;
extern StructRNA RNA_ShaderNodeBsdfAnisotropic;
extern StructRNA RNA_ShaderNodeBsdfDiffuse;
extern StructRNA RNA_ShaderNodeBsdfGlossy;
extern StructRNA RNA_ShaderNodeBsdfGlass;
extern StructRNA RNA_ShaderNodeBsdfRefraction;
extern StructRNA RNA_ShaderNodeBsdfTranslucent;
extern StructRNA RNA_ShaderNodeBsdfTransparent;
extern StructRNA RNA_ShaderNodeBsdfVelvet;
extern StructRNA RNA_ShaderNodeBsdfToon;
extern StructRNA RNA_ShaderNodeBsdfHair;
extern StructRNA RNA_ShaderNodeSubsurfaceScattering;
extern StructRNA RNA_ShaderNodeVolumeAbsorption;
extern StructRNA RNA_ShaderNodeVolumeScatter;
extern StructRNA RNA_ShaderNodeEmission;
extern StructRNA RNA_ShaderNodeNewGeometry;
extern StructRNA RNA_ShaderNodeLightPath;
extern StructRNA RNA_ShaderNodeLightFalloff;
extern StructRNA RNA_ShaderNodeObjectInfo;
extern StructRNA RNA_ShaderNodeParticleInfo;
extern StructRNA RNA_ShaderNodeHairInfo;
extern StructRNA RNA_ShaderNodeWireframe;
extern StructRNA RNA_ShaderNodeWavelength;
extern StructRNA RNA_ShaderNodeBlackbody;
extern StructRNA RNA_ShaderNodeBump;
extern StructRNA RNA_ShaderNodeNormalMap;
extern StructRNA RNA_ShaderNodeTangent;
extern StructRNA RNA_ShaderNodeScript;
extern StructRNA RNA_ShaderNodeTexImage;
extern StructRNA RNA_ShaderNodeTexEnvironment;
extern StructRNA RNA_ShaderNodeTexSky;
extern StructRNA RNA_ShaderNodeTexGradient;
extern StructRNA RNA_ShaderNodeTexNoise;
extern StructRNA RNA_ShaderNodeTexMagic;
extern StructRNA RNA_ShaderNodeTexWave;
extern StructRNA RNA_ShaderNodeTexMusgrave;
extern StructRNA RNA_ShaderNodeTexVoronoi;
extern StructRNA RNA_ShaderNodeTexChecker;
extern StructRNA RNA_ShaderNodeTexBrick;
extern StructRNA RNA_ShaderNodeTexCoord;
extern StructRNA RNA_ShaderNodeVectorTransform;
extern StructRNA RNA_ShaderNodeSeparateHSV;
extern StructRNA RNA_ShaderNodeCombineHSV;
extern StructRNA RNA_ShaderNodeUVMap;
extern StructRNA RNA_ShaderNodeUVAlongStroke;
extern StructRNA RNA_ShaderNodeSeparateXYZ;
extern StructRNA RNA_ShaderNodeCombineXYZ;
extern StructRNA RNA_CompositorNodeViewer;
extern StructRNA RNA_CompositorNodeRGB;
extern StructRNA RNA_CompositorNodeValue;
extern StructRNA RNA_CompositorNodeMixRGB;
extern StructRNA RNA_CompositorNodeValToRGB;
extern StructRNA RNA_CompositorNodeRGBToBW;
extern StructRNA RNA_CompositorNodeNormal;
extern StructRNA RNA_CompositorNodeCurveVec;
extern StructRNA RNA_CompositorNodeCurveRGB;
extern StructRNA RNA_CompositorNodeAlphaOver;
extern StructRNA RNA_CompositorNodeBlur;
extern StructRNA RNA_CompositorNodeFilter;
extern StructRNA RNA_CompositorNodeMapValue;
extern StructRNA RNA_CompositorNodeMapRange;
extern StructRNA RNA_CompositorNodeTime;
extern StructRNA RNA_CompositorNodeVecBlur;
extern StructRNA RNA_CompositorNodeSepRGBA;
extern StructRNA RNA_CompositorNodeSepHSVA;
extern StructRNA RNA_CompositorNodeSetAlpha;
extern StructRNA RNA_CompositorNodeHueSat;
extern StructRNA RNA_CompositorNodeImage;
extern StructRNA RNA_CompositorNodeRLayers;
extern StructRNA RNA_CompositorNodeComposite;
extern StructRNA RNA_CompositorNodeOutputFile;
extern StructRNA RNA_CompositorNodeOutputFileFileSlots;
extern StructRNA RNA_CompositorNodeOutputFileLayerSlots;
extern StructRNA RNA_CompositorNodeTexture;
extern StructRNA RNA_CompositorNodeTranslate;
extern StructRNA RNA_CompositorNodeZcombine;
extern StructRNA RNA_CompositorNodeCombRGBA;
extern StructRNA RNA_CompositorNodeDilateErode;
extern StructRNA RNA_CompositorNodeInpaint;
extern StructRNA RNA_CompositorNodeDespeckle;
extern StructRNA RNA_CompositorNodeRotate;
extern StructRNA RNA_CompositorNodeScale;
extern StructRNA RNA_CompositorNodeSepYCCA;
extern StructRNA RNA_CompositorNodeCombYCCA;
extern StructRNA RNA_CompositorNodeSepYUVA;
extern StructRNA RNA_CompositorNodeCombYUVA;
extern StructRNA RNA_CompositorNodeDiffMatte;
extern StructRNA RNA_CompositorNodeColorSpill;
extern StructRNA RNA_CompositorNodeChromaMatte;
extern StructRNA RNA_CompositorNodeChannelMatte;
extern StructRNA RNA_CompositorNodeFlip;
extern StructRNA RNA_CompositorNodeSplitViewer;
extern StructRNA RNA_CompositorNodeMapUV;
extern StructRNA RNA_CompositorNodeIDMask;
extern StructRNA RNA_CompositorNodeDoubleEdgeMask;
extern StructRNA RNA_CompositorNodeDefocus;
extern StructRNA RNA_CompositorNodeDisplace;
extern StructRNA RNA_CompositorNodeCombHSVA;
extern StructRNA RNA_CompositorNodeMath;
extern StructRNA RNA_CompositorNodeLumaMatte;
extern StructRNA RNA_CompositorNodeBrightContrast;
extern StructRNA RNA_CompositorNodeGamma;
extern StructRNA RNA_CompositorNodeInvert;
extern StructRNA RNA_CompositorNodeNormalize;
extern StructRNA RNA_CompositorNodeCrop;
extern StructRNA RNA_CompositorNodeDBlur;
extern StructRNA RNA_CompositorNodeBilateralblur;
extern StructRNA RNA_CompositorNodePremulKey;
extern StructRNA RNA_CompositorNodeGlare;
extern StructRNA RNA_CompositorNodeTonemap;
extern StructRNA RNA_CompositorNodeLensdist;
extern StructRNA RNA_CompositorNodeLevels;
extern StructRNA RNA_CompositorNodeColorMatte;
extern StructRNA RNA_CompositorNodeDistanceMatte;
extern StructRNA RNA_CompositorNodeColorBalance;
extern StructRNA RNA_CompositorNodeHueCorrect;
extern StructRNA RNA_CompositorNodeMovieClip;
extern StructRNA RNA_CompositorNodeTransform;
extern StructRNA RNA_CompositorNodeStabilize;
extern StructRNA RNA_CompositorNodeMovieDistortion;
extern StructRNA RNA_CompositorNodeBoxMask;
extern StructRNA RNA_CompositorNodeEllipseMask;
extern StructRNA RNA_CompositorNodeBokehImage;
extern StructRNA RNA_CompositorNodeBokehBlur;
extern StructRNA RNA_CompositorNodeSwitch;
extern StructRNA RNA_CompositorNodeColorCorrection;
extern StructRNA RNA_CompositorNodeMask;
extern StructRNA RNA_CompositorNodeKeyingScreen;
extern StructRNA RNA_CompositorNodeKeying;
extern StructRNA RNA_CompositorNodeTrackPos;
extern StructRNA RNA_CompositorNodePixelate;
extern StructRNA RNA_CompositorNodePlaneTrackDeform;
extern StructRNA RNA_CompositorNodeCornerPin;
extern StructRNA RNA_CompositorNodeSunBeams;
extern StructRNA RNA_TextureNodeOutput;
extern StructRNA RNA_TextureNodeChecker;
extern StructRNA RNA_TextureNodeTexture;
extern StructRNA RNA_TextureNodeBricks;
extern StructRNA RNA_TextureNodeMath;
extern StructRNA RNA_TextureNodeMixRGB;
extern StructRNA RNA_TextureNodeRGBToBW;
extern StructRNA RNA_TextureNodeValToRGB;
extern StructRNA RNA_TextureNodeImage;
extern StructRNA RNA_TextureNodeCurveRGB;
extern StructRNA RNA_TextureNodeInvert;
extern StructRNA RNA_TextureNodeHueSaturation;
extern StructRNA RNA_TextureNodeCurveTime;
extern StructRNA RNA_TextureNodeRotate;
extern StructRNA RNA_TextureNodeViewer;
extern StructRNA RNA_TextureNodeTranslate;
extern StructRNA RNA_TextureNodeCoordinates;
extern StructRNA RNA_TextureNodeDistance;
extern StructRNA RNA_TextureNodeCompose;
extern StructRNA RNA_TextureNodeDecompose;
extern StructRNA RNA_TextureNodeValToNor;
extern StructRNA RNA_TextureNodeScale;
extern StructRNA RNA_TextureNodeAt;
extern StructRNA RNA_TextureNodeTexVoronoi;
extern StructRNA RNA_TextureNodeTexBlend;
extern StructRNA RNA_TextureNodeTexMagic;
extern StructRNA RNA_TextureNodeTexMarble;
extern StructRNA RNA_TextureNodeTexClouds;
extern StructRNA RNA_TextureNodeTexWood;
extern StructRNA RNA_TextureNodeTexMusgrave;
extern StructRNA RNA_TextureNodeTexNoise;
extern StructRNA RNA_TextureNodeTexStucci;
extern StructRNA RNA_TextureNodeTexDistNoise;
extern StructRNA RNA_ShaderNodeGroup;
extern StructRNA RNA_CompositorNodeGroup;
extern StructRNA RNA_TextureNodeGroup;
extern StructRNA RNA_NodeCustomGroup;
extern StructRNA RNA_NodeOutputFileSlotFile;
extern StructRNA RNA_NodeOutputFileSlotLayer;
extern StructRNA RNA_NodeInstanceHash;
extern StructRNA RNA_Object;
extern StructRNA RNA_ObjectModifiers;
extern StructRNA RNA_ObjectConstraints;
extern StructRNA RNA_VertexGroups;
extern StructRNA RNA_ParticleSystems;
extern StructRNA RNA_GameObjectSettings;
extern StructRNA RNA_ObjectBase;
extern StructRNA RNA_VertexGroup;
extern StructRNA RNA_MaterialSlot;
extern StructRNA RNA_DupliObject;
extern StructRNA RNA_LodLevel;
extern StructRNA RNA_PointCache;
extern StructRNA RNA_PointCaches;
extern StructRNA RNA_CollisionSettings;
extern StructRNA RNA_EffectorWeights;
extern StructRNA RNA_FieldSettings;
extern StructRNA RNA_GameSoftBodySettings;
extern StructRNA RNA_SoftBodySettings;
extern StructRNA RNA_PackedFile;
extern StructRNA RNA_ParticleTarget;
extern StructRNA RNA_SPHFluidSettings;
extern StructRNA RNA_ParticleHairKey;
extern StructRNA RNA_ParticleKey;
extern StructRNA RNA_ChildParticle;
extern StructRNA RNA_Particle;
extern StructRNA RNA_ParticleDupliWeight;
extern StructRNA RNA_ParticleSystem;
extern StructRNA RNA_ParticleSettingsTextureSlot;
extern StructRNA RNA_ParticleSettings;
extern StructRNA RNA_ParticleSettingsTextureSlots;
extern StructRNA RNA_Pose;
extern StructRNA RNA_BoneGroups;
extern StructRNA RNA_PoseBone;
extern StructRNA RNA_PoseBoneConstraints;
extern StructRNA RNA_IKParam;
extern StructRNA RNA_Itasc;
extern StructRNA RNA_BoneGroup;
extern StructRNA RNA_GameProperty;
extern StructRNA RNA_GameBooleanProperty;
extern StructRNA RNA_GameIntProperty;
extern StructRNA RNA_GameFloatProperty;
extern StructRNA RNA_GameTimerProperty;
extern StructRNA RNA_GameStringProperty;
extern StructRNA RNA_RenderEngine;
extern StructRNA RNA_RenderResult;
extern StructRNA RNA_RenderLayer;
extern StructRNA RNA_RenderPass;
extern StructRNA RNA_BakePixel;
extern StructRNA RNA_RigidBodyWorld;
extern StructRNA RNA_RigidBodyObject;
extern StructRNA RNA_RigidBodyConstraint;
extern StructRNA RNA_Scene;
extern StructRNA RNA_SceneBases;
extern StructRNA RNA_SceneObjects;
extern StructRNA RNA_KeyingSets;
extern StructRNA RNA_KeyingSetsAll;
extern StructRNA RNA_TimelineMarkers;
extern StructRNA RNA_ToolSettings;
extern StructRNA RNA_UnifiedPaintSettings;
extern StructRNA RNA_MeshStatVis;
extern StructRNA RNA_UnitSettings;
extern StructRNA RNA_ImageFormatSettings;
extern StructRNA RNA_SceneGameData;
extern StructRNA RNA_SceneGameRecastData;
extern StructRNA RNA_TransformOrientation;
extern StructRNA RNA_SelectedUvElement;
extern StructRNA RNA_FFmpegSettings;
extern StructRNA RNA_RenderSettings;
extern StructRNA RNA_RenderLayers;
extern StructRNA RNA_BakeSettings;
extern StructRNA RNA_SceneRenderLayer;
extern StructRNA RNA_FreestyleLineSet;
extern StructRNA RNA_FreestyleModuleSettings;
extern StructRNA RNA_FreestyleSettings;
extern StructRNA RNA_FreestyleModules;
extern StructRNA RNA_Linesets;
extern StructRNA RNA_Screen;
extern StructRNA RNA_Area;
extern StructRNA RNA_AreaSpaces;
extern StructRNA RNA_Region;
extern StructRNA RNA_View2D;
extern StructRNA RNA_PaletteColor;
extern StructRNA RNA_Palette;
extern StructRNA RNA_PaintCurve;
extern StructRNA RNA_Paint;
extern StructRNA RNA_Sculpt;
extern StructRNA RNA_UvSculpt;
extern StructRNA RNA_VertexPaint;
extern StructRNA RNA_ImagePaint;
extern StructRNA RNA_ParticleEdit;
extern StructRNA RNA_ParticleBrush;
extern StructRNA RNA_Sensor;
extern StructRNA RNA_AlwaysSensor;
extern StructRNA RNA_NearSensor;
extern StructRNA RNA_MouseSensor;
extern StructRNA RNA_KeyboardSensor;
extern StructRNA RNA_PropertySensor;
extern StructRNA RNA_ArmatureSensor;
extern StructRNA RNA_ActuatorSensor;
extern StructRNA RNA_DelaySensor;
extern StructRNA RNA_CollisionSensor;
extern StructRNA RNA_RadarSensor;
extern StructRNA RNA_RandomSensor;
extern StructRNA RNA_RaySensor;
extern StructRNA RNA_MessageSensor;
extern StructRNA RNA_JoystickSensor;
extern StructRNA RNA_SequenceColorBalanceData;
extern StructRNA RNA_SequenceElement;
extern StructRNA RNA_SequenceProxy;
extern StructRNA RNA_SequenceColorBalance;
extern StructRNA RNA_SequenceCrop;
extern StructRNA RNA_SequenceTransform;
extern StructRNA RNA_Sequence;
extern StructRNA RNA_SequenceModifiers;
extern StructRNA RNA_SequenceEditor;
extern StructRNA RNA_Sequences;
extern StructRNA RNA_ImageSequence;
extern StructRNA RNA_SequenceElements;
extern StructRNA RNA_MetaSequence;
extern StructRNA RNA_SceneSequence;
extern StructRNA RNA_MovieSequence;
extern StructRNA RNA_MovieClipSequence;
extern StructRNA RNA_MaskSequence;
extern StructRNA RNA_SoundSequence;
extern StructRNA RNA_EffectSequence;
extern StructRNA RNA_AddSequence;
extern StructRNA RNA_AdjustmentSequence;
extern StructRNA RNA_AlphaOverSequence;
extern StructRNA RNA_AlphaUnderSequence;
extern StructRNA RNA_ColorSequence;
extern StructRNA RNA_CrossSequence;
extern StructRNA RNA_GammaCrossSequence;
extern StructRNA RNA_GlowSequence;
extern StructRNA RNA_MulticamSequence;
extern StructRNA RNA_MultiplySequence;
extern StructRNA RNA_OverDropSequence;
extern StructRNA RNA_SpeedControlSequence;
extern StructRNA RNA_SubtractSequence;
extern StructRNA RNA_TransformSequence;
extern StructRNA RNA_WipeSequence;
extern StructRNA RNA_GaussianBlurSequence;
extern StructRNA RNA_SequenceModifier;
extern StructRNA RNA_ColorBalanceModifier;
extern StructRNA RNA_CurvesModifier;
extern StructRNA RNA_HueCorrectModifier;
extern StructRNA RNA_BrightContrastModifier;
extern StructRNA RNA_SmokeDomainSettings;
extern StructRNA RNA_SmokeFlowSettings;
extern StructRNA RNA_SmokeCollSettings;
extern StructRNA RNA_Space;
extern StructRNA RNA_SpaceImageEditor;
extern StructRNA RNA_SpaceUVEditor;
extern StructRNA RNA_SpaceSequenceEditor;
extern StructRNA RNA_SpaceTextEditor;
extern StructRNA RNA_FileSelectParams;
extern StructRNA RNA_SpaceFileBrowser;
extern StructRNA RNA_SpaceOutliner;
extern StructRNA RNA_BackgroundImage;
extern StructRNA RNA_SpaceView3D;
extern StructRNA RNA_BackgroundImages;
extern StructRNA RNA_RegionView3D;
extern StructRNA RNA_SpaceProperties;
extern StructRNA RNA_SpaceDopeSheetEditor;
extern StructRNA RNA_SpaceGraphEditor;
extern StructRNA RNA_SpaceNLA;
extern StructRNA RNA_SpaceTimeline;
extern StructRNA RNA_SpaceConsole;
extern StructRNA RNA_ConsoleLine;
extern StructRNA RNA_SpaceInfo;
extern StructRNA RNA_SpaceUserPreferences;
extern StructRNA RNA_NodeTreePath;
extern StructRNA RNA_SpaceNodeEditor;
extern StructRNA RNA_SpaceNodeEditorPath;
extern StructRNA RNA_SpaceLogicEditor;
extern StructRNA RNA_SpaceClipEditor;
extern StructRNA RNA_Speaker;
extern StructRNA RNA_TextLine;
extern StructRNA RNA_Text;
extern StructRNA RNA_TimelineMarker;
extern StructRNA RNA_Sound;
extern StructRNA RNA_UILayout;
extern StructRNA RNA_Panel;
extern StructRNA RNA_UIList;
extern StructRNA RNA_Header;
extern StructRNA RNA_Menu;
extern StructRNA RNA_ThemeFontStyle;
extern StructRNA RNA_ThemeStyle;
extern StructRNA RNA_ThemeWidgetColors;
extern StructRNA RNA_ThemeWidgetStateColors;
extern StructRNA RNA_ThemePanelColors;
extern StructRNA RNA_ThemeGradientColors;
extern StructRNA RNA_ThemeUserInterface;
extern StructRNA RNA_ThemeSpaceGeneric;
extern StructRNA RNA_ThemeSpaceGradient;
extern StructRNA RNA_ThemeSpaceListGeneric;
extern StructRNA RNA_ThemeView3D;
extern StructRNA RNA_ThemeGraphEditor;
extern StructRNA RNA_ThemeFileBrowser;
extern StructRNA RNA_ThemeNLAEditor;
extern StructRNA RNA_ThemeDopeSheet;
extern StructRNA RNA_ThemeImageEditor;
extern StructRNA RNA_ThemeSequenceEditor;
extern StructRNA RNA_ThemeProperties;
extern StructRNA RNA_ThemeTextEditor;
extern StructRNA RNA_ThemeTimeline;
extern StructRNA RNA_ThemeNodeEditor;
extern StructRNA RNA_ThemeOutliner;
extern StructRNA RNA_ThemeInfo;
extern StructRNA RNA_ThemeUserPreferences;
extern StructRNA RNA_ThemeConsole;
extern StructRNA RNA_ThemeLogicEditor;
extern StructRNA RNA_ThemeClipEditor;
extern StructRNA RNA_ThemeBoneColorSet;
extern StructRNA RNA_Theme;
extern StructRNA RNA_UserSolidLight;
extern StructRNA RNA_WalkNavigation;
extern StructRNA RNA_UserPreferences;
extern StructRNA RNA_Addons;
extern StructRNA RNA_PathCompareCollection;
extern StructRNA RNA_UserPreferencesView;
extern StructRNA RNA_UserPreferencesEdit;
extern StructRNA RNA_UserPreferencesInput;
extern StructRNA RNA_UserPreferencesFilePaths;
extern StructRNA RNA_UserPreferencesSystem;
extern StructRNA RNA_Addon;
extern StructRNA RNA_AddonPreferences;
extern StructRNA RNA_PathCompare;
extern StructRNA RNA_VectorFont;
extern StructRNA RNA_Operator;
extern StructRNA RNA_OperatorProperties;
extern StructRNA RNA_OperatorMousePath;
extern StructRNA RNA_OperatorFileListElement;
extern StructRNA RNA_Macro;
extern StructRNA RNA_OperatorMacro;
extern StructRNA RNA_Event;
extern StructRNA RNA_Timer;
extern StructRNA RNA_UIPopupMenu;
extern StructRNA RNA_UIPieMenu;
extern StructRNA RNA_Window;
extern StructRNA RNA_WindowManager;
extern StructRNA RNA_KeyConfigurations;
extern StructRNA RNA_KeyConfig;
extern StructRNA RNA_KeyMaps;
extern StructRNA RNA_KeyMap;
extern StructRNA RNA_KeyMapItems;
extern StructRNA RNA_KeyMapItem;
extern StructRNA RNA_World;
extern StructRNA RNA_WorldTextureSlots;
extern StructRNA RNA_WorldLighting;
extern StructRNA RNA_WorldMistSettings;
extern StructRNA RNA_WorldTextureSlot;
extern StructRNA RNA_MovieClip;
extern StructRNA RNA_MovieClipProxy;
extern StructRNA RNA_MovieClipUser;
extern StructRNA RNA_MovieClipScopes;
extern StructRNA RNA_MovieTrackingSettings;
extern StructRNA RNA_MovieTrackingCamera;
extern StructRNA RNA_MovieTrackingMarker;
extern StructRNA RNA_MovieTrackingTrack;
extern StructRNA RNA_MovieTrackingMarkers;
extern StructRNA RNA_MovieTrackingPlaneMarker;
extern StructRNA RNA_MovieTrackingPlaneTrack;
extern StructRNA RNA_MovieTrackingPlaneMarkers;
extern StructRNA RNA_MovieTrackingTracks;
extern StructRNA RNA_MovieTrackingPlaneTracks;
extern StructRNA RNA_MovieTrackingObjectTracks;
extern StructRNA RNA_MovieTrackingObjectPlaneTracks;
extern StructRNA RNA_MovieTrackingStabilization;
extern StructRNA RNA_MovieTrackingReconstructedCameras;
extern StructRNA RNA_MovieReconstructedCamera;
extern StructRNA RNA_MovieTrackingReconstruction;
extern StructRNA RNA_MovieTrackingObject;
extern StructRNA RNA_MovieTrackingDopesheet;
extern StructRNA RNA_MovieTracking;
extern StructRNA RNA_MovieTrackingObjects;
extern StructRNA RNA_MaskParent;
extern StructRNA RNA_MaskSplinePointUW;
extern StructRNA RNA_MaskSplinePoint;
extern StructRNA RNA_MaskSpline;
extern StructRNA RNA_MaskSplines;
extern StructRNA RNA_MaskSplinePoints;
extern StructRNA RNA_MaskLayer;
extern StructRNA RNA_Mask;
extern StructRNA RNA_MaskLayers;

#include "rna_wm.c"
#include "rna_wm_api.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_Operator_rna_properties;
PointerPropertyRNA rna_Operator_rna_type;
StringPropertyRNA rna_Operator_name;
PointerPropertyRNA rna_Operator_properties;
BoolPropertyRNA rna_Operator_has_reports;
PointerPropertyRNA rna_Operator_layout;
StringPropertyRNA rna_Operator_bl_idname;
StringPropertyRNA rna_Operator_bl_label;
StringPropertyRNA rna_Operator_bl_translation_context;
StringPropertyRNA rna_Operator_bl_description;
EnumPropertyRNA rna_Operator_bl_options;

extern FunctionRNA rna_Operator_report_func;
extern EnumPropertyRNA rna_Operator_report_type;
extern StringPropertyRNA rna_Operator_report_message;

extern FunctionRNA rna_Operator_poll_func;
extern BoolPropertyRNA rna_Operator_poll_visible;
extern PointerPropertyRNA rna_Operator_poll_context;

extern FunctionRNA rna_Operator_execute_func;
extern PointerPropertyRNA rna_Operator_execute_context;
extern EnumPropertyRNA rna_Operator_execute_result;

extern FunctionRNA rna_Operator_check_func;
extern PointerPropertyRNA rna_Operator_check_context;
extern BoolPropertyRNA rna_Operator_check_result;

extern FunctionRNA rna_Operator_invoke_func;
extern PointerPropertyRNA rna_Operator_invoke_context;
extern PointerPropertyRNA rna_Operator_invoke_event;
extern EnumPropertyRNA rna_Operator_invoke_result;

extern FunctionRNA rna_Operator_modal_func;
extern PointerPropertyRNA rna_Operator_modal_context;
extern PointerPropertyRNA rna_Operator_modal_event;
extern EnumPropertyRNA rna_Operator_modal_result;

extern FunctionRNA rna_Operator_draw_func;
extern PointerPropertyRNA rna_Operator_draw_context;

extern FunctionRNA rna_Operator_cancel_func;
extern PointerPropertyRNA rna_Operator_cancel_context;



CollectionPropertyRNA rna_OperatorProperties_rna_properties;
PointerPropertyRNA rna_OperatorProperties_rna_type;


extern CollectionPropertyRNA rna_PropertyGroup_rna_properties;
extern PointerPropertyRNA rna_PropertyGroup_rna_type;
extern StringPropertyRNA rna_PropertyGroup_name;

FloatPropertyRNA rna_OperatorMousePath_loc;
FloatPropertyRNA rna_OperatorMousePath_time;


extern CollectionPropertyRNA rna_PropertyGroup_rna_properties;
extern PointerPropertyRNA rna_PropertyGroup_rna_type;
extern StringPropertyRNA rna_PropertyGroup_name;

StringPropertyRNA rna_OperatorFileListElement_name;


CollectionPropertyRNA rna_Macro_rna_properties;
PointerPropertyRNA rna_Macro_rna_type;
StringPropertyRNA rna_Macro_name;
PointerPropertyRNA rna_Macro_properties;
StringPropertyRNA rna_Macro_bl_idname;
StringPropertyRNA rna_Macro_bl_label;
StringPropertyRNA rna_Macro_bl_translation_context;
StringPropertyRNA rna_Macro_bl_description;
EnumPropertyRNA rna_Macro_bl_options;

extern FunctionRNA rna_Macro_report_func;
extern EnumPropertyRNA rna_Macro_report_type;
extern StringPropertyRNA rna_Macro_report_message;

extern FunctionRNA rna_Macro_poll_func;
extern BoolPropertyRNA rna_Macro_poll_visible;
extern PointerPropertyRNA rna_Macro_poll_context;

extern FunctionRNA rna_Macro_draw_func;
extern PointerPropertyRNA rna_Macro_draw_context;



CollectionPropertyRNA rna_OperatorMacro_rna_properties;
PointerPropertyRNA rna_OperatorMacro_rna_type;
PointerPropertyRNA rna_OperatorMacro_properties;


CollectionPropertyRNA rna_Event_rna_properties;
PointerPropertyRNA rna_Event_rna_type;
StringPropertyRNA rna_Event_ascii;
StringPropertyRNA rna_Event_unicode;
EnumPropertyRNA rna_Event_value;
EnumPropertyRNA rna_Event_type;
IntPropertyRNA rna_Event_mouse_x;
IntPropertyRNA rna_Event_mouse_y;
IntPropertyRNA rna_Event_mouse_region_x;
IntPropertyRNA rna_Event_mouse_region_y;
IntPropertyRNA rna_Event_mouse_prev_x;
IntPropertyRNA rna_Event_mouse_prev_y;
FloatPropertyRNA rna_Event_pressure;
FloatPropertyRNA rna_Event_tilt;
BoolPropertyRNA rna_Event_is_tablet;
BoolPropertyRNA rna_Event_shift;
BoolPropertyRNA rna_Event_ctrl;
BoolPropertyRNA rna_Event_alt;
BoolPropertyRNA rna_Event_oskey;


CollectionPropertyRNA rna_Timer_rna_properties;
PointerPropertyRNA rna_Timer_rna_type;
FloatPropertyRNA rna_Timer_time_step;
FloatPropertyRNA rna_Timer_time_delta;
FloatPropertyRNA rna_Timer_time_duration;


CollectionPropertyRNA rna_UIPopupMenu_rna_properties;
PointerPropertyRNA rna_UIPopupMenu_rna_type;
PointerPropertyRNA rna_UIPopupMenu_layout;


CollectionPropertyRNA rna_UIPieMenu_rna_properties;
PointerPropertyRNA rna_UIPieMenu_rna_type;
PointerPropertyRNA rna_UIPieMenu_layout;


CollectionPropertyRNA rna_Window_rna_properties;
PointerPropertyRNA rna_Window_rna_type;
PointerPropertyRNA rna_Window_screen;
IntPropertyRNA rna_Window_x;
IntPropertyRNA rna_Window_y;
IntPropertyRNA rna_Window_width;
IntPropertyRNA rna_Window_height;

extern FunctionRNA rna_Window_cursor_warp_func;
extern IntPropertyRNA rna_Window_cursor_warp_x;
extern IntPropertyRNA rna_Window_cursor_warp_y;

extern FunctionRNA rna_Window_cursor_set_func;
extern EnumPropertyRNA rna_Window_cursor_set_cursor;

extern FunctionRNA rna_Window_cursor_modal_set_func;
extern EnumPropertyRNA rna_Window_cursor_modal_set_cursor;

extern FunctionRNA rna_Window_cursor_modal_restore_func;


extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

CollectionPropertyRNA rna_WindowManager_operators;
CollectionPropertyRNA rna_WindowManager_windows;
CollectionPropertyRNA rna_WindowManager_keyconfigs;
StringPropertyRNA rna_WindowManager_clipboard;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;


extern FunctionRNA rna_WindowManager_fileselect_add_func;
extern PointerPropertyRNA rna_WindowManager_fileselect_add_operator;

extern FunctionRNA rna_WindowManager_modal_handler_add_func;
extern PointerPropertyRNA rna_WindowManager_modal_handler_add_operator;
extern BoolPropertyRNA rna_WindowManager_modal_handler_add_handle;

extern FunctionRNA rna_WindowManager_event_timer_add_func;
extern FloatPropertyRNA rna_WindowManager_event_timer_add_time_step;
extern PointerPropertyRNA rna_WindowManager_event_timer_add_window;
extern PointerPropertyRNA rna_WindowManager_event_timer_add_result;

extern FunctionRNA rna_WindowManager_event_timer_remove_func;
extern PointerPropertyRNA rna_WindowManager_event_timer_remove_timer;

extern FunctionRNA rna_WindowManager_progress_begin_func;
extern FloatPropertyRNA rna_WindowManager_progress_begin_min;
extern FloatPropertyRNA rna_WindowManager_progress_begin_max;

extern FunctionRNA rna_WindowManager_progress_update_func;
extern FloatPropertyRNA rna_WindowManager_progress_update_value;

extern FunctionRNA rna_WindowManager_progress_end_func;
extern FunctionRNA rna_WindowManager_invoke_props_popup_func;
extern PointerPropertyRNA rna_WindowManager_invoke_props_popup_operator;
extern PointerPropertyRNA rna_WindowManager_invoke_props_popup_event;
extern EnumPropertyRNA rna_WindowManager_invoke_props_popup_result;

extern FunctionRNA rna_WindowManager_invoke_props_dialog_func;
extern PointerPropertyRNA rna_WindowManager_invoke_props_dialog_operator;
extern IntPropertyRNA rna_WindowManager_invoke_props_dialog_width;
extern IntPropertyRNA rna_WindowManager_invoke_props_dialog_height;
extern EnumPropertyRNA rna_WindowManager_invoke_props_dialog_result;

extern FunctionRNA rna_WindowManager_invoke_search_popup_func;
extern PointerPropertyRNA rna_WindowManager_invoke_search_popup_operator;

extern FunctionRNA rna_WindowManager_invoke_popup_func;
extern PointerPropertyRNA rna_WindowManager_invoke_popup_operator;
extern IntPropertyRNA rna_WindowManager_invoke_popup_width;
extern IntPropertyRNA rna_WindowManager_invoke_popup_height;
extern EnumPropertyRNA rna_WindowManager_invoke_popup_result;

extern FunctionRNA rna_WindowManager_invoke_confirm_func;
extern PointerPropertyRNA rna_WindowManager_invoke_confirm_operator;
extern PointerPropertyRNA rna_WindowManager_invoke_confirm_event;
extern EnumPropertyRNA rna_WindowManager_invoke_confirm_result;

extern FunctionRNA rna_WindowManager_pupmenu_begin__internal_func;
extern StringPropertyRNA rna_WindowManager_pupmenu_begin__internal_title;
extern EnumPropertyRNA rna_WindowManager_pupmenu_begin__internal_icon;
extern PointerPropertyRNA rna_WindowManager_pupmenu_begin__internal_menu;

extern FunctionRNA rna_WindowManager_pupmenu_end__internal_func;
extern PointerPropertyRNA rna_WindowManager_pupmenu_end__internal_menu;

extern FunctionRNA rna_WindowManager_piemenu_begin__internal_func;
extern StringPropertyRNA rna_WindowManager_piemenu_begin__internal_title;
extern EnumPropertyRNA rna_WindowManager_piemenu_begin__internal_icon;
extern PointerPropertyRNA rna_WindowManager_piemenu_begin__internal_event;
extern PointerPropertyRNA rna_WindowManager_piemenu_begin__internal_menu_pie;

extern FunctionRNA rna_WindowManager_piemenu_end__internal_func;
extern PointerPropertyRNA rna_WindowManager_piemenu_end__internal_menu;



CollectionPropertyRNA rna_KeyConfigurations_rna_properties;
PointerPropertyRNA rna_KeyConfigurations_rna_type;
PointerPropertyRNA rna_KeyConfigurations_active;
PointerPropertyRNA rna_KeyConfigurations_default;
PointerPropertyRNA rna_KeyConfigurations_addon;
PointerPropertyRNA rna_KeyConfigurations_user;

extern FunctionRNA rna_KeyConfigurations_new_func;
extern StringPropertyRNA rna_KeyConfigurations_new_name;
extern PointerPropertyRNA rna_KeyConfigurations_new_keyconfig;

extern FunctionRNA rna_KeyConfigurations_remove_func;
extern PointerPropertyRNA rna_KeyConfigurations_remove_keyconfig;



CollectionPropertyRNA rna_KeyConfig_rna_properties;
PointerPropertyRNA rna_KeyConfig_rna_type;
StringPropertyRNA rna_KeyConfig_name;
CollectionPropertyRNA rna_KeyConfig_keymaps;
BoolPropertyRNA rna_KeyConfig_is_user_defined;


CollectionPropertyRNA rna_KeyMaps_rna_properties;
PointerPropertyRNA rna_KeyMaps_rna_type;

extern FunctionRNA rna_KeyMaps_new_func;
extern StringPropertyRNA rna_KeyMaps_new_name;
extern EnumPropertyRNA rna_KeyMaps_new_space_type;
extern EnumPropertyRNA rna_KeyMaps_new_region_type;
extern BoolPropertyRNA rna_KeyMaps_new_modal;
extern PointerPropertyRNA rna_KeyMaps_new_keymap;

extern FunctionRNA rna_KeyMaps_remove_func;
extern PointerPropertyRNA rna_KeyMaps_remove_keymap;

extern FunctionRNA rna_KeyMaps_find_func;
extern StringPropertyRNA rna_KeyMaps_find_name;
extern EnumPropertyRNA rna_KeyMaps_find_space_type;
extern EnumPropertyRNA rna_KeyMaps_find_region_type;
extern PointerPropertyRNA rna_KeyMaps_find_keymap;

extern FunctionRNA rna_KeyMaps_find_modal_func;
extern StringPropertyRNA rna_KeyMaps_find_modal_name;
extern PointerPropertyRNA rna_KeyMaps_find_modal_keymap;



CollectionPropertyRNA rna_KeyMap_rna_properties;
PointerPropertyRNA rna_KeyMap_rna_type;
StringPropertyRNA rna_KeyMap_name;
EnumPropertyRNA rna_KeyMap_space_type;
EnumPropertyRNA rna_KeyMap_region_type;
CollectionPropertyRNA rna_KeyMap_keymap_items;
BoolPropertyRNA rna_KeyMap_is_user_modified;
BoolPropertyRNA rna_KeyMap_is_modal;
BoolPropertyRNA rna_KeyMap_show_expanded_items;
BoolPropertyRNA rna_KeyMap_show_expanded_children;

extern FunctionRNA rna_KeyMap_active_func;
extern PointerPropertyRNA rna_KeyMap_active_keymap;

extern FunctionRNA rna_KeyMap_restore_to_default_func;
extern FunctionRNA rna_KeyMap_restore_item_to_default_func;
extern PointerPropertyRNA rna_KeyMap_restore_item_to_default_item;



CollectionPropertyRNA rna_KeyMapItems_rna_properties;
PointerPropertyRNA rna_KeyMapItems_rna_type;

extern FunctionRNA rna_KeyMapItems_new_func;
extern StringPropertyRNA rna_KeyMapItems_new_idname;
extern EnumPropertyRNA rna_KeyMapItems_new_type;
extern EnumPropertyRNA rna_KeyMapItems_new_value;
extern BoolPropertyRNA rna_KeyMapItems_new_any;
extern BoolPropertyRNA rna_KeyMapItems_new_shift;
extern BoolPropertyRNA rna_KeyMapItems_new_ctrl;
extern BoolPropertyRNA rna_KeyMapItems_new_alt;
extern BoolPropertyRNA rna_KeyMapItems_new_oskey;
extern EnumPropertyRNA rna_KeyMapItems_new_key_modifier;
extern BoolPropertyRNA rna_KeyMapItems_new_head;
extern PointerPropertyRNA rna_KeyMapItems_new_item;

extern FunctionRNA rna_KeyMapItems_new_modal_func;
extern StringPropertyRNA rna_KeyMapItems_new_modal_propvalue;
extern EnumPropertyRNA rna_KeyMapItems_new_modal_type;
extern EnumPropertyRNA rna_KeyMapItems_new_modal_value;
extern BoolPropertyRNA rna_KeyMapItems_new_modal_any;
extern BoolPropertyRNA rna_KeyMapItems_new_modal_shift;
extern BoolPropertyRNA rna_KeyMapItems_new_modal_ctrl;
extern BoolPropertyRNA rna_KeyMapItems_new_modal_alt;
extern BoolPropertyRNA rna_KeyMapItems_new_modal_oskey;
extern EnumPropertyRNA rna_KeyMapItems_new_modal_key_modifier;
extern PointerPropertyRNA rna_KeyMapItems_new_modal_item;

extern FunctionRNA rna_KeyMapItems_remove_func;
extern PointerPropertyRNA rna_KeyMapItems_remove_item;

extern FunctionRNA rna_KeyMapItems_from_id_func;
extern IntPropertyRNA rna_KeyMapItems_from_id_id;
extern PointerPropertyRNA rna_KeyMapItems_from_id_item;



CollectionPropertyRNA rna_KeyMapItem_rna_properties;
PointerPropertyRNA rna_KeyMapItem_rna_type;
StringPropertyRNA rna_KeyMapItem_idname;
StringPropertyRNA rna_KeyMapItem_name;
PointerPropertyRNA rna_KeyMapItem_properties;
EnumPropertyRNA rna_KeyMapItem_map_type;
EnumPropertyRNA rna_KeyMapItem_type;
EnumPropertyRNA rna_KeyMapItem_value;
IntPropertyRNA rna_KeyMapItem_id;
BoolPropertyRNA rna_KeyMapItem_any;
BoolPropertyRNA rna_KeyMapItem_shift;
BoolPropertyRNA rna_KeyMapItem_ctrl;
BoolPropertyRNA rna_KeyMapItem_alt;
BoolPropertyRNA rna_KeyMapItem_oskey;
EnumPropertyRNA rna_KeyMapItem_key_modifier;
BoolPropertyRNA rna_KeyMapItem_show_expanded;
EnumPropertyRNA rna_KeyMapItem_propvalue;
BoolPropertyRNA rna_KeyMapItem_active;
BoolPropertyRNA rna_KeyMapItem_is_user_modified;
BoolPropertyRNA rna_KeyMapItem_is_user_defined;

extern FunctionRNA rna_KeyMapItem_compare_func;
extern PointerPropertyRNA rna_KeyMapItem_compare_item;
extern BoolPropertyRNA rna_KeyMapItem_compare_result;


static PointerRNA Operator_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Operator_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Operator_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Operator_rna_properties_get(iter);
}

void Operator_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Operator_rna_properties_get(iter);
}

void Operator_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Operator_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Operator_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void Operator_name_get(PointerRNA *ptr, char *value)
{
	rna_Operator_name_get(ptr, value);
}

int Operator_name_length(PointerRNA *ptr)
{
	return rna_Operator_name_length(ptr);
}

PointerRNA Operator_properties_get(PointerRNA *ptr)
{
	return rna_Operator_properties_get(ptr);
}

int Operator_has_reports_get(PointerRNA *ptr)
{
	return rna_Operator_has_reports_get(ptr);
}

PointerRNA Operator_layout_get(PointerRNA *ptr)
{
	wmOperator *data = (wmOperator *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_UILayout, data->layout);
}

void Operator_bl_idname_get(PointerRNA *ptr, char *value)
{
	wmOperator *data = (wmOperator *)(ptr->data);
	BLI_strncpy_utf8(value, data->type->idname, 61);
}

int Operator_bl_idname_length(PointerRNA *ptr)
{
	wmOperator *data = (wmOperator *)(ptr->data);
	return strlen(data->type->idname);
}

void Operator_bl_idname_set(PointerRNA *ptr, const char *value)
{
	rna_Operator_bl_idname_set(ptr, value);
}

void Operator_bl_label_get(PointerRNA *ptr, char *value)
{
	wmOperator *data = (wmOperator *)(ptr->data);
	BLI_strncpy_utf8(value, data->type->name, 240);
}

int Operator_bl_label_length(PointerRNA *ptr)
{
	wmOperator *data = (wmOperator *)(ptr->data);
	return strlen(data->type->name);
}

void Operator_bl_label_set(PointerRNA *ptr, const char *value)
{
	rna_Operator_bl_label_set(ptr, value);
}

void Operator_bl_translation_context_get(PointerRNA *ptr, char *value)
{
	wmOperator *data = (wmOperator *)(ptr->data);
	if (data->type->translation_context == NULL) {
		*value = '\0';
		return;
	}
	BLI_strncpy_utf8(value, data->type->translation_context, 240);
}

int Operator_bl_translation_context_length(PointerRNA *ptr)
{
	wmOperator *data = (wmOperator *)(ptr->data);
	if (data->type->translation_context == NULL) return 0;
	return strlen(data->type->translation_context);
}

void Operator_bl_translation_context_set(PointerRNA *ptr, const char *value)
{
	rna_Operator_bl_translation_context_set(ptr, value);
}

void Operator_bl_description_get(PointerRNA *ptr, char *value)
{
	wmOperator *data = (wmOperator *)(ptr->data);
	if (data->type->description == NULL) {
		*value = '\0';
		return;
	}
	BLI_strncpy_utf8(value, data->type->description, 240);
}

int Operator_bl_description_length(PointerRNA *ptr)
{
	wmOperator *data = (wmOperator *)(ptr->data);
	if (data->type->description == NULL) return 0;
	return strlen(data->type->description);
}

void Operator_bl_description_set(PointerRNA *ptr, const char *value)
{
	rna_Operator_bl_description_set(ptr, value);
}

int Operator_bl_options_get(PointerRNA *ptr)
{
	wmOperator *data = (wmOperator *)(ptr->data);
	return (int)(data->type->flag);
}

void Operator_bl_options_set(PointerRNA *ptr, int value)
{
	wmOperator *data = (wmOperator *)(ptr->data);
	data->type->flag = value;
}

static PointerRNA OperatorProperties_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void OperatorProperties_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_OperatorProperties_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = OperatorProperties_rna_properties_get(iter);
}

void OperatorProperties_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = OperatorProperties_rna_properties_get(iter);
}

void OperatorProperties_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int OperatorProperties_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA OperatorProperties_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA Macro_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Macro_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Macro_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Macro_rna_properties_get(iter);
}

void Macro_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Macro_rna_properties_get(iter);
}

void Macro_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Macro_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Macro_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void Macro_name_get(PointerRNA *ptr, char *value)
{
	rna_Operator_name_get(ptr, value);
}

int Macro_name_length(PointerRNA *ptr)
{
	return rna_Operator_name_length(ptr);
}

PointerRNA Macro_properties_get(PointerRNA *ptr)
{
	return rna_Operator_properties_get(ptr);
}

void Macro_bl_idname_get(PointerRNA *ptr, char *value)
{
	wmOperator *data = (wmOperator *)(ptr->data);
	BLI_strncpy_utf8(value, data->type->idname, 64);
}

int Macro_bl_idname_length(PointerRNA *ptr)
{
	wmOperator *data = (wmOperator *)(ptr->data);
	return strlen(data->type->idname);
}

void Macro_bl_idname_set(PointerRNA *ptr, const char *value)
{
	rna_Operator_bl_idname_set(ptr, value);
}

void Macro_bl_label_get(PointerRNA *ptr, char *value)
{
	wmOperator *data = (wmOperator *)(ptr->data);
	BLI_strncpy_utf8(value, data->type->name, 240);
}

int Macro_bl_label_length(PointerRNA *ptr)
{
	wmOperator *data = (wmOperator *)(ptr->data);
	return strlen(data->type->name);
}

void Macro_bl_label_set(PointerRNA *ptr, const char *value)
{
	rna_Operator_bl_label_set(ptr, value);
}

void Macro_bl_translation_context_get(PointerRNA *ptr, char *value)
{
	wmOperator *data = (wmOperator *)(ptr->data);
	if (data->type->translation_context == NULL) {
		*value = '\0';
		return;
	}
	BLI_strncpy_utf8(value, data->type->translation_context, 240);
}

int Macro_bl_translation_context_length(PointerRNA *ptr)
{
	wmOperator *data = (wmOperator *)(ptr->data);
	if (data->type->translation_context == NULL) return 0;
	return strlen(data->type->translation_context);
}

void Macro_bl_translation_context_set(PointerRNA *ptr, const char *value)
{
	rna_Operator_bl_translation_context_set(ptr, value);
}

void Macro_bl_description_get(PointerRNA *ptr, char *value)
{
	wmOperator *data = (wmOperator *)(ptr->data);
	if (data->type->description == NULL) {
		*value = '\0';
		return;
	}
	BLI_strncpy_utf8(value, data->type->description, 240);
}

int Macro_bl_description_length(PointerRNA *ptr)
{
	wmOperator *data = (wmOperator *)(ptr->data);
	if (data->type->description == NULL) return 0;
	return strlen(data->type->description);
}

void Macro_bl_description_set(PointerRNA *ptr, const char *value)
{
	rna_Operator_bl_description_set(ptr, value);
}

int Macro_bl_options_get(PointerRNA *ptr)
{
	wmOperator *data = (wmOperator *)(ptr->data);
	return (int)(data->type->flag);
}

void Macro_bl_options_set(PointerRNA *ptr, int value)
{
	wmOperator *data = (wmOperator *)(ptr->data);
	data->type->flag = value;
}

static PointerRNA OperatorMacro_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void OperatorMacro_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_OperatorMacro_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = OperatorMacro_rna_properties_get(iter);
}

void OperatorMacro_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = OperatorMacro_rna_properties_get(iter);
}

void OperatorMacro_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int OperatorMacro_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA OperatorMacro_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA OperatorMacro_properties_get(PointerRNA *ptr)
{
	return rna_OperatorMacro_properties_get(ptr);
}

static PointerRNA Event_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Event_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Event_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Event_rna_properties_get(iter);
}

void Event_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Event_rna_properties_get(iter);
}

void Event_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Event_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Event_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void Event_ascii_get(PointerRNA *ptr, char *value)
{
	rna_Event_ascii_get(ptr, value);
}

int Event_ascii_length(PointerRNA *ptr)
{
	return rna_Event_ascii_length(ptr);
}

void Event_unicode_get(PointerRNA *ptr, char *value)
{
	rna_Event_unicode_get(ptr, value);
}

int Event_unicode_length(PointerRNA *ptr)
{
	return rna_Event_unicode_length(ptr);
}

int Event_value_get(PointerRNA *ptr)
{
	wmEvent *data = (wmEvent *)(ptr->data);
	return (int)(data->val);
}

int Event_type_get(PointerRNA *ptr)
{
	wmEvent *data = (wmEvent *)(ptr->data);
	return (int)(data->type);
}

int Event_mouse_x_get(PointerRNA *ptr)
{
	wmEvent *data = (wmEvent *)(ptr->data);
	return (int)(data->x);
}

int Event_mouse_y_get(PointerRNA *ptr)
{
	wmEvent *data = (wmEvent *)(ptr->data);
	return (int)(data->y);
}

int Event_mouse_region_x_get(PointerRNA *ptr)
{
	wmEvent *data = (wmEvent *)(ptr->data);
	return (int)(data->mval[0]);
}

int Event_mouse_region_y_get(PointerRNA *ptr)
{
	wmEvent *data = (wmEvent *)(ptr->data);
	return (int)(data->mval[1]);
}

int Event_mouse_prev_x_get(PointerRNA *ptr)
{
	wmEvent *data = (wmEvent *)(ptr->data);
	return (int)(data->prevx);
}

int Event_mouse_prev_y_get(PointerRNA *ptr)
{
	wmEvent *data = (wmEvent *)(ptr->data);
	return (int)(data->prevy);
}

float Event_pressure_get(PointerRNA *ptr)
{
	return rna_Event_pressure_get(ptr);
}

void Event_tilt_get(PointerRNA *ptr, float values[2])
{
	rna_Event_tilt_get(ptr, values);
}

int Event_is_tablet_get(PointerRNA *ptr)
{
	return rna_Event_is_tablet_get(ptr);
}

int Event_shift_get(PointerRNA *ptr)
{
	wmEvent *data = (wmEvent *)(ptr->data);
	return (((data->shift) & 1) != 0);
}

int Event_ctrl_get(PointerRNA *ptr)
{
	wmEvent *data = (wmEvent *)(ptr->data);
	return (((data->ctrl) & 1) != 0);
}

int Event_alt_get(PointerRNA *ptr)
{
	wmEvent *data = (wmEvent *)(ptr->data);
	return (((data->alt) & 1) != 0);
}

int Event_oskey_get(PointerRNA *ptr)
{
	wmEvent *data = (wmEvent *)(ptr->data);
	return (((data->oskey) & 1) != 0);
}

static PointerRNA Timer_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Timer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Timer_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Timer_rna_properties_get(iter);
}

void Timer_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Timer_rna_properties_get(iter);
}

void Timer_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Timer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Timer_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

float Timer_time_step_get(PointerRNA *ptr)
{
	wmTimer *data = (wmTimer *)(ptr->data);
	return (float)(data->timestep);
}

float Timer_time_delta_get(PointerRNA *ptr)
{
	wmTimer *data = (wmTimer *)(ptr->data);
	return (float)(data->delta);
}

float Timer_time_duration_get(PointerRNA *ptr)
{
	wmTimer *data = (wmTimer *)(ptr->data);
	return (float)(data->duration);
}

static PointerRNA UIPopupMenu_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void UIPopupMenu_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_UIPopupMenu_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = UIPopupMenu_rna_properties_get(iter);
}

void UIPopupMenu_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = UIPopupMenu_rna_properties_get(iter);
}

void UIPopupMenu_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int UIPopupMenu_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA UIPopupMenu_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA UIPopupMenu_layout_get(PointerRNA *ptr)
{
	return rna_PopupMenu_layout_get(ptr);
}

static PointerRNA UIPieMenu_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void UIPieMenu_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_UIPieMenu_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = UIPieMenu_rna_properties_get(iter);
}

void UIPieMenu_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = UIPieMenu_rna_properties_get(iter);
}

void UIPieMenu_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int UIPieMenu_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA UIPieMenu_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA UIPieMenu_layout_get(PointerRNA *ptr)
{
	return rna_PieMenu_layout_get(ptr);
}

static PointerRNA Window_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Window_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Window_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Window_rna_properties_get(iter);
}

void Window_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Window_rna_properties_get(iter);
}

void Window_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Window_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Window_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA Window_screen_get(PointerRNA *ptr)
{
	wmWindow *data = (wmWindow *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Screen, data->screen);
}

void Window_screen_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Window_screen_set(ptr, value);
}

int Window_x_get(PointerRNA *ptr)
{
	wmWindow *data = (wmWindow *)(ptr->data);
	return (int)(data->posx);
}

int Window_y_get(PointerRNA *ptr)
{
	wmWindow *data = (wmWindow *)(ptr->data);
	return (int)(data->posy);
}

int Window_width_get(PointerRNA *ptr)
{
	wmWindow *data = (wmWindow *)(ptr->data);
	return (int)(data->sizex);
}

int Window_height_get(PointerRNA *ptr)
{
	wmWindow *data = (wmWindow *)(ptr->data);
	return (int)(data->sizey);
}

static PointerRNA WindowManager_operators_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Operator, rna_iterator_listbase_get(iter));
}

void WindowManager_operators_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	wmWindowManager *data = (wmWindowManager *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_WindowManager_operators;

	rna_iterator_listbase_begin(iter, &data->operators, NULL);

	if (iter->valid)
		iter->ptr = WindowManager_operators_get(iter);
}

void WindowManager_operators_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = WindowManager_operators_get(iter);
}

void WindowManager_operators_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int WindowManager_operators_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	WindowManager_operators_begin(&iter, ptr);

	if (iter.valid) {
		ListBaseIterator *internal = &iter.internal.listbase;
		if (internal->skip) {
			while (index-- > 0 && iter.valid) {
				rna_iterator_listbase_next(&iter);
			}
			found = (index == -1 && iter.valid);
		}
		else {
			while (index-- > 0 && internal->link)
				internal->link = internal->link->next;
			found = (index == -1 && internal->link);
		}
		if (found) *r_ptr = WindowManager_operators_get(&iter);
	}

	WindowManager_operators_end(&iter);

	return found;
}

int WindowManager_operators_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int Operator_bl_idname_length(PointerRNA *);
	extern void Operator_bl_idname_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	WindowManager_operators_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = Operator_bl_idname_length(&iter.ptr);
			if (namelen < 1024) {
				Operator_bl_idname_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				Operator_bl_idname_get(&iter.ptr, name);
				if (strcmp(name, key) == 0) {
					MEM_freeN(name);

					found = true;
					*r_ptr = iter.ptr;
					break;
				}
				else {
					MEM_freeN(name);
				}
			}
		}
		WindowManager_operators_next(&iter);
	}
	WindowManager_operators_end(&iter);

	return found;
}

static PointerRNA WindowManager_windows_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Window, rna_iterator_listbase_get(iter));
}

void WindowManager_windows_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	wmWindowManager *data = (wmWindowManager *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_WindowManager_windows;

	rna_iterator_listbase_begin(iter, &data->windows, NULL);

	if (iter->valid)
		iter->ptr = WindowManager_windows_get(iter);
}

void WindowManager_windows_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = WindowManager_windows_get(iter);
}

void WindowManager_windows_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int WindowManager_windows_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	WindowManager_windows_begin(&iter, ptr);

	if (iter.valid) {
		ListBaseIterator *internal = &iter.internal.listbase;
		if (internal->skip) {
			while (index-- > 0 && iter.valid) {
				rna_iterator_listbase_next(&iter);
			}
			found = (index == -1 && iter.valid);
		}
		else {
			while (index-- > 0 && internal->link)
				internal->link = internal->link->next;
			found = (index == -1 && internal->link);
		}
		if (found) *r_ptr = WindowManager_windows_get(&iter);
	}

	WindowManager_windows_end(&iter);

	return found;
}

static PointerRNA WindowManager_keyconfigs_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_KeyConfig, rna_iterator_listbase_get(iter));
}

void WindowManager_keyconfigs_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	wmWindowManager *data = (wmWindowManager *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_WindowManager_keyconfigs;

	rna_iterator_listbase_begin(iter, &data->keyconfigs, NULL);

	if (iter->valid)
		iter->ptr = WindowManager_keyconfigs_get(iter);
}

void WindowManager_keyconfigs_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = WindowManager_keyconfigs_get(iter);
}

void WindowManager_keyconfigs_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int WindowManager_keyconfigs_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	WindowManager_keyconfigs_begin(&iter, ptr);

	if (iter.valid) {
		ListBaseIterator *internal = &iter.internal.listbase;
		if (internal->skip) {
			while (index-- > 0 && iter.valid) {
				rna_iterator_listbase_next(&iter);
			}
			found = (index == -1 && iter.valid);
		}
		else {
			while (index-- > 0 && internal->link)
				internal->link = internal->link->next;
			found = (index == -1 && internal->link);
		}
		if (found) *r_ptr = WindowManager_keyconfigs_get(&iter);
	}

	WindowManager_keyconfigs_end(&iter);

	return found;
}

int WindowManager_keyconfigs_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int KeyConfig_name_length(PointerRNA *);
	extern void KeyConfig_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	WindowManager_keyconfigs_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = KeyConfig_name_length(&iter.ptr);
			if (namelen < 1024) {
				KeyConfig_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				KeyConfig_name_get(&iter.ptr, name);
				if (strcmp(name, key) == 0) {
					MEM_freeN(name);

					found = true;
					*r_ptr = iter.ptr;
					break;
				}
				else {
					MEM_freeN(name);
				}
			}
		}
		WindowManager_keyconfigs_next(&iter);
	}
	WindowManager_keyconfigs_end(&iter);

	return found;
}

void WindowManager_clipboard_get(PointerRNA *ptr, char *value)
{
	rna_wmClipboard_get(ptr, value);
}

int WindowManager_clipboard_length(PointerRNA *ptr)
{
	return rna_wmClipboard_length(ptr);
}

void WindowManager_clipboard_set(PointerRNA *ptr, const char *value)
{
	rna_wmClipboard_set(ptr, value);
}

static PointerRNA KeyConfigurations_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void KeyConfigurations_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_KeyConfigurations_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = KeyConfigurations_rna_properties_get(iter);
}

void KeyConfigurations_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = KeyConfigurations_rna_properties_get(iter);
}

void KeyConfigurations_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int KeyConfigurations_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA KeyConfigurations_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA KeyConfigurations_active_get(PointerRNA *ptr)
{
	return rna_WindowManager_active_keyconfig_get(ptr);
}

void KeyConfigurations_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_WindowManager_active_keyconfig_set(ptr, value);
}

PointerRNA KeyConfigurations_default_value_get(PointerRNA *ptr)
{
	wmWindowManager *data = (wmWindowManager *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_KeyConfig, data->defaultconf);
}

PointerRNA KeyConfigurations_addon_get(PointerRNA *ptr)
{
	wmWindowManager *data = (wmWindowManager *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_KeyConfig, data->addonconf);
}

PointerRNA KeyConfigurations_user_get(PointerRNA *ptr)
{
	wmWindowManager *data = (wmWindowManager *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_KeyConfig, data->userconf);
}

static PointerRNA KeyConfig_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void KeyConfig_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_KeyConfig_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = KeyConfig_rna_properties_get(iter);
}

void KeyConfig_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = KeyConfig_rna_properties_get(iter);
}

void KeyConfig_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int KeyConfig_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA KeyConfig_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void KeyConfig_name_get(PointerRNA *ptr, char *value)
{
	wmKeyConfig *data = (wmKeyConfig *)(ptr->data);
	BLI_strncpy_utf8(value, data->idname, 64);
}

int KeyConfig_name_length(PointerRNA *ptr)
{
	wmKeyConfig *data = (wmKeyConfig *)(ptr->data);
	return strlen(data->idname);
}

void KeyConfig_name_set(PointerRNA *ptr, const char *value)
{
	wmKeyConfig *data = (wmKeyConfig *)(ptr->data);
	BLI_strncpy_utf8(data->idname, value, 64);
}

static PointerRNA KeyConfig_keymaps_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_KeyMap, rna_iterator_listbase_get(iter));
}

void KeyConfig_keymaps_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	wmKeyConfig *data = (wmKeyConfig *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_KeyConfig_keymaps;

	rna_iterator_listbase_begin(iter, &data->keymaps, NULL);

	if (iter->valid)
		iter->ptr = KeyConfig_keymaps_get(iter);
}

void KeyConfig_keymaps_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = KeyConfig_keymaps_get(iter);
}

void KeyConfig_keymaps_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int KeyConfig_keymaps_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	KeyConfig_keymaps_begin(&iter, ptr);

	if (iter.valid) {
		ListBaseIterator *internal = &iter.internal.listbase;
		if (internal->skip) {
			while (index-- > 0 && iter.valid) {
				rna_iterator_listbase_next(&iter);
			}
			found = (index == -1 && iter.valid);
		}
		else {
			while (index-- > 0 && internal->link)
				internal->link = internal->link->next;
			found = (index == -1 && internal->link);
		}
		if (found) *r_ptr = KeyConfig_keymaps_get(&iter);
	}

	KeyConfig_keymaps_end(&iter);

	return found;
}

int KeyConfig_keymaps_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int KeyMap_name_length(PointerRNA *);
	extern void KeyMap_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	KeyConfig_keymaps_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = KeyMap_name_length(&iter.ptr);
			if (namelen < 1024) {
				KeyMap_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				KeyMap_name_get(&iter.ptr, name);
				if (strcmp(name, key) == 0) {
					MEM_freeN(name);

					found = true;
					*r_ptr = iter.ptr;
					break;
				}
				else {
					MEM_freeN(name);
				}
			}
		}
		KeyConfig_keymaps_next(&iter);
	}
	KeyConfig_keymaps_end(&iter);

	return found;
}

int KeyConfig_is_user_defined_get(PointerRNA *ptr)
{
	wmKeyConfig *data = (wmKeyConfig *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

static PointerRNA KeyMaps_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void KeyMaps_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_KeyMaps_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = KeyMaps_rna_properties_get(iter);
}

void KeyMaps_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = KeyMaps_rna_properties_get(iter);
}

void KeyMaps_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int KeyMaps_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA KeyMaps_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA KeyMap_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void KeyMap_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_KeyMap_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = KeyMap_rna_properties_get(iter);
}

void KeyMap_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = KeyMap_rna_properties_get(iter);
}

void KeyMap_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int KeyMap_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA KeyMap_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void KeyMap_name_get(PointerRNA *ptr, char *value)
{
	wmKeyMap *data = (wmKeyMap *)(ptr->data);
	BLI_strncpy_utf8(value, data->idname, 64);
}

int KeyMap_name_length(PointerRNA *ptr)
{
	wmKeyMap *data = (wmKeyMap *)(ptr->data);
	return strlen(data->idname);
}

int KeyMap_space_type_get(PointerRNA *ptr)
{
	wmKeyMap *data = (wmKeyMap *)(ptr->data);
	return (int)(data->spaceid);
}

int KeyMap_region_type_get(PointerRNA *ptr)
{
	wmKeyMap *data = (wmKeyMap *)(ptr->data);
	return (int)(data->regionid);
}

static PointerRNA KeyMap_keymap_items_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_KeyMapItem, rna_iterator_listbase_get(iter));
}

void KeyMap_keymap_items_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	wmKeyMap *data = (wmKeyMap *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_KeyMap_keymap_items;

	rna_iterator_listbase_begin(iter, &data->items, NULL);

	if (iter->valid)
		iter->ptr = KeyMap_keymap_items_get(iter);
}

void KeyMap_keymap_items_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = KeyMap_keymap_items_get(iter);
}

void KeyMap_keymap_items_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int KeyMap_keymap_items_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	KeyMap_keymap_items_begin(&iter, ptr);

	if (iter.valid) {
		ListBaseIterator *internal = &iter.internal.listbase;
		if (internal->skip) {
			while (index-- > 0 && iter.valid) {
				rna_iterator_listbase_next(&iter);
			}
			found = (index == -1 && iter.valid);
		}
		else {
			while (index-- > 0 && internal->link)
				internal->link = internal->link->next;
			found = (index == -1 && internal->link);
		}
		if (found) *r_ptr = KeyMap_keymap_items_get(&iter);
	}

	KeyMap_keymap_items_end(&iter);

	return found;
}

int KeyMap_keymap_items_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int KeyMapItem_idname_length(PointerRNA *);
	extern void KeyMapItem_idname_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	KeyMap_keymap_items_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = KeyMapItem_idname_length(&iter.ptr);
			if (namelen < 1024) {
				KeyMapItem_idname_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				KeyMapItem_idname_get(&iter.ptr, name);
				if (strcmp(name, key) == 0) {
					MEM_freeN(name);

					found = true;
					*r_ptr = iter.ptr;
					break;
				}
				else {
					MEM_freeN(name);
				}
			}
		}
		KeyMap_keymap_items_next(&iter);
	}
	KeyMap_keymap_items_end(&iter);

	return found;
}

int KeyMap_is_user_modified_get(PointerRNA *ptr)
{
	wmKeyMap *data = (wmKeyMap *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void KeyMap_is_user_modified_set(PointerRNA *ptr, int value)
{
	wmKeyMap *data = (wmKeyMap *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int KeyMap_is_modal_get(PointerRNA *ptr)
{
	wmKeyMap *data = (wmKeyMap *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

int KeyMap_show_expanded_items_get(PointerRNA *ptr)
{
	wmKeyMap *data = (wmKeyMap *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void KeyMap_show_expanded_items_set(PointerRNA *ptr, int value)
{
	wmKeyMap *data = (wmKeyMap *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int KeyMap_show_expanded_children_get(PointerRNA *ptr)
{
	wmKeyMap *data = (wmKeyMap *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void KeyMap_show_expanded_children_set(PointerRNA *ptr, int value)
{
	wmKeyMap *data = (wmKeyMap *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

static PointerRNA KeyMapItems_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void KeyMapItems_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_KeyMapItems_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = KeyMapItems_rna_properties_get(iter);
}

void KeyMapItems_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = KeyMapItems_rna_properties_get(iter);
}

void KeyMapItems_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int KeyMapItems_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA KeyMapItems_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA KeyMapItem_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void KeyMapItem_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_KeyMapItem_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = KeyMapItem_rna_properties_get(iter);
}

void KeyMapItem_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = KeyMapItem_rna_properties_get(iter);
}

void KeyMapItem_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int KeyMapItem_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA KeyMapItem_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void KeyMapItem_idname_get(PointerRNA *ptr, char *value)
{
	rna_wmKeyMapItem_idname_get(ptr, value);
}

int KeyMapItem_idname_length(PointerRNA *ptr)
{
	return rna_wmKeyMapItem_idname_length(ptr);
}

void KeyMapItem_idname_set(PointerRNA *ptr, const char *value)
{
	rna_wmKeyMapItem_idname_set(ptr, value);
}

void KeyMapItem_name_get(PointerRNA *ptr, char *value)
{
	rna_wmKeyMapItem_name_get(ptr, value);
}

int KeyMapItem_name_length(PointerRNA *ptr)
{
	return rna_wmKeyMapItem_name_length(ptr);
}

PointerRNA KeyMapItem_properties_get(PointerRNA *ptr)
{
	return rna_KeyMapItem_properties_get(ptr);
}

int KeyMapItem_map_type_get(PointerRNA *ptr)
{
	return rna_wmKeyMapItem_map_type_get(ptr);
}

void KeyMapItem_map_type_set(PointerRNA *ptr, int value)
{
	rna_wmKeyMapItem_map_type_set(ptr, value);
}

int KeyMapItem_type_get(PointerRNA *ptr)
{
	wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
	return (int)(data->type);
}

void KeyMapItem_type_set(PointerRNA *ptr, int value)
{
	wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
	data->type = value;
}

int KeyMapItem_value_get(PointerRNA *ptr)
{
	wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
	return (int)(data->val);
}

void KeyMapItem_value_set(PointerRNA *ptr, int value)
{
	wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
	data->val = value;
}

int KeyMapItem_id_get(PointerRNA *ptr)
{
	wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
	return (int)(data->id);
}

int KeyMapItem_any_get(PointerRNA *ptr)
{
	return rna_KeyMapItem_any_getf(ptr);
}

void KeyMapItem_any_set(PointerRNA *ptr, int value)
{
	rna_KeyMapItem_any_setf(ptr, value);
}

int KeyMapItem_shift_get(PointerRNA *ptr)
{
	wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
	return (int)(data->shift);
}

void KeyMapItem_shift_set(PointerRNA *ptr, int value)
{
	wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
	data->shift = value;
}

int KeyMapItem_ctrl_get(PointerRNA *ptr)
{
	wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
	return (int)(data->ctrl);
}

void KeyMapItem_ctrl_set(PointerRNA *ptr, int value)
{
	wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
	data->ctrl = value;
}

int KeyMapItem_alt_get(PointerRNA *ptr)
{
	wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
	return (int)(data->alt);
}

void KeyMapItem_alt_set(PointerRNA *ptr, int value)
{
	wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
	data->alt = value;
}

int KeyMapItem_oskey_get(PointerRNA *ptr)
{
	wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
	return (int)(data->oskey);
}

void KeyMapItem_oskey_set(PointerRNA *ptr, int value)
{
	wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
	data->oskey = value;
}

int KeyMapItem_key_modifier_get(PointerRNA *ptr)
{
	wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
	return (int)(data->keymodifier);
}

void KeyMapItem_key_modifier_set(PointerRNA *ptr, int value)
{
	rna_wmKeyMapItem_keymodifier_set(ptr, value);
}

int KeyMapItem_show_expanded_get(PointerRNA *ptr)
{
	wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void KeyMapItem_show_expanded_set(PointerRNA *ptr, int value)
{
	wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int KeyMapItem_propvalue_get(PointerRNA *ptr)
{
	wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
	return (int)(data->propvalue);
}

void KeyMapItem_propvalue_set(PointerRNA *ptr, int value)
{
	wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
	data->propvalue = value;
}

int KeyMapItem_active_get(PointerRNA *ptr)
{
	wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
	return !(((data->flag) & 1) != 0);
}

void KeyMapItem_active_set(PointerRNA *ptr, int value)
{
	wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
	if (!value) data->flag |= 1;
	else data->flag &= ~1;
}

int KeyMapItem_is_user_modified_get(PointerRNA *ptr)
{
	wmKeyMapItem *data = (wmKeyMapItem *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

int KeyMapItem_is_user_defined_get(PointerRNA *ptr)
{
	return rna_KeyMapItem_userdefined_get(ptr);
}

void Operator_report(struct wmOperator *_self, int type, const char * message)
{
	rna_Operator_report(_self, type, message);
}

void Operator_report_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *_self;
	int type;
	const char * message;
	char *_data;
	
	_self = (struct wmOperator *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 4;
	message = *((const char * *)_data);
	
	rna_Operator_report(_self, type, message);
}

/* Repeated prototypes to detect errors */

void rna_Operator_report(struct wmOperator *_self, int type, const char * message);




void Macro_report(struct wmOperator *_self, int type, const char * message)
{
	rna_Operator_report(_self, type, message);
}

void Macro_report_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *_self;
	int type;
	const char * message;
	char *_data;
	
	_self = (struct wmOperator *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 4;
	message = *((const char * *)_data);
	
	rna_Operator_report(_self, type, message);
}

/* Repeated prototypes to detect errors */

void rna_Operator_report(struct wmOperator *_self, int type, const char * message);






void Window_cursor_warp(struct wmWindow *_self, int x, int y)
{
	WM_cursor_warp(_self, x, y);
}

void Window_cursor_warp_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindow *_self;
	int x;
	int y;
	char *_data;
	
	_self = (struct wmWindow *)_ptr->data;
	_data = (char *)_parms->data;
	x = *((int *)_data);
	_data += 4;
	y = *((int *)_data);
	
	WM_cursor_warp(_self, x, y);
}

void Window_cursor_set(struct wmWindow *_self, int cursor)
{
	WM_cursor_set(_self, cursor);
}

void Window_cursor_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindow *_self;
	int cursor;
	char *_data;
	
	_self = (struct wmWindow *)_ptr->data;
	_data = (char *)_parms->data;
	cursor = *((int *)_data);
	
	WM_cursor_set(_self, cursor);
}

void Window_cursor_modal_set(struct wmWindow *_self, int cursor)
{
	WM_cursor_modal_set(_self, cursor);
}

void Window_cursor_modal_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindow *_self;
	int cursor;
	char *_data;
	
	_self = (struct wmWindow *)_ptr->data;
	_data = (char *)_parms->data;
	cursor = *((int *)_data);
	
	WM_cursor_modal_set(_self, cursor);
}

void Window_cursor_modal_restore(struct wmWindow *_self)
{
	WM_cursor_modal_restore(_self);
}

void Window_cursor_modal_restore_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindow *_self;
	_self = (struct wmWindow *)_ptr->data;
	
	WM_cursor_modal_restore(_self);
}

/* Repeated prototypes to detect errors */

void WM_cursor_warp(struct wmWindow *_self, int x, int y);
void WM_cursor_set(struct wmWindow *_self, int cursor);
void WM_cursor_modal_set(struct wmWindow *_self, int cursor);
void WM_cursor_modal_restore(struct wmWindow *_self);

void WindowManager_fileselect_add(bContext *C, struct wmOperator *operator_value)
{
	WM_event_add_fileselect(C, operator_value);
}

void WindowManager_fileselect_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *operator;
	char *_data;
	
	_data = (char *)_parms->data;
	operator = *((struct wmOperator **)_data);
	
	WM_event_add_fileselect(C, operator);
}

int WindowManager_modal_handler_add(bContext *C, struct wmOperator *operator_value)
{
	return rna_event_modal_handler_add(C, operator_value);
}

void WindowManager_modal_handler_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *operator;
	int handle;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	operator = *((struct wmOperator **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	handle = rna_event_modal_handler_add(C, operator);
	*((int *)_retdata) = handle;
}

struct wmTimer *WindowManager_event_timer_add(struct wmWindowManager *_self, float time_step, struct wmWindow *window)
{
	return rna_event_timer_add(_self, time_step, window);
}

void WindowManager_event_timer_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindowManager *_self;
	float time_step;
	struct wmWindow *window;
	struct wmTimer *result;
	char *_data, *_retdata;
	
	_self = (struct wmWindowManager *)_ptr->data;
	_data = (char *)_parms->data;
	time_step = *((float *)_data);
	_data += 4;
	window = *((struct wmWindow **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	result = rna_event_timer_add(_self, time_step, window);
	*((struct wmTimer **)_retdata) = result;
}

void WindowManager_event_timer_remove(struct wmWindowManager *_self, struct wmTimer *timer)
{
	rna_event_timer_remove(_self, timer);
}

void WindowManager_event_timer_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindowManager *_self;
	struct wmTimer *timer;
	char *_data;
	
	_self = (struct wmWindowManager *)_ptr->data;
	_data = (char *)_parms->data;
	timer = *((struct wmTimer **)_data);
	
	rna_event_timer_remove(_self, timer);
}

void WindowManager_progress_begin(struct wmWindowManager *_self, float min, float max)
{
	rna_progress_begin(_self, min, max);
}

void WindowManager_progress_begin_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindowManager *_self;
	float min;
	float max;
	char *_data;
	
	_self = (struct wmWindowManager *)_ptr->data;
	_data = (char *)_parms->data;
	min = *((float *)_data);
	_data += 4;
	max = *((float *)_data);
	
	rna_progress_begin(_self, min, max);
}

void WindowManager_progress_update(struct wmWindowManager *_self, float value)
{
	rna_progress_update(_self, value);
}

void WindowManager_progress_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindowManager *_self;
	float value;
	char *_data;
	
	_self = (struct wmWindowManager *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((float *)_data);
	
	rna_progress_update(_self, value);
}

void WindowManager_progress_end(struct wmWindowManager *_self)
{
	rna_progress_end(_self);
}

void WindowManager_progress_end_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindowManager *_self;
	_self = (struct wmWindowManager *)_ptr->data;
	
	rna_progress_end(_self);
}

int WindowManager_invoke_props_popup(bContext *C, struct wmOperator *operator_value, struct wmEvent *event)
{
	return rna_Operator_props_popup(C, operator_value, event);
}

void WindowManager_invoke_props_popup_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *operator;
	struct wmEvent *event;
	int result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	operator = *((struct wmOperator **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	event = *((struct wmEvent **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	result = rna_Operator_props_popup(C, operator, event);
	*((int *)_retdata) = result;
}

int WindowManager_invoke_props_dialog(bContext *C, struct wmOperator *operator_value, int width, int height)
{
	return WM_operator_props_dialog_popup(C, operator_value, width, height);
}

void WindowManager_invoke_props_dialog_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *operator;
	int width;
	int height;
	int result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	operator = *((struct wmOperator **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	width = *((int *)_data);
	_data += 4;
	height = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	result = WM_operator_props_dialog_popup(C, operator, width, height);
	*((int *)_retdata) = result;
}

void WindowManager_invoke_search_popup(bContext *C, struct wmOperator *operator_value)
{
	rna_Operator_enum_search_invoke(C, operator_value);
}

void WindowManager_invoke_search_popup_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *operator;
	char *_data;
	
	_data = (char *)_parms->data;
	operator = *((struct wmOperator **)_data);
	
	rna_Operator_enum_search_invoke(C, operator);
}

int WindowManager_invoke_popup(bContext *C, struct wmOperator *operator_value, int width, int height)
{
	return WM_operator_ui_popup(C, operator_value, width, height);
}

void WindowManager_invoke_popup_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *operator;
	int width;
	int height;
	int result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	operator = *((struct wmOperator **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	width = *((int *)_data);
	_data += 4;
	height = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	result = WM_operator_ui_popup(C, operator, width, height);
	*((int *)_retdata) = result;
}

int WindowManager_invoke_confirm(bContext *C, struct wmOperator *operator_value, struct wmEvent *event)
{
	return rna_Operator_confirm(C, operator_value, event);
}

void WindowManager_invoke_confirm_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *operator;
	struct wmEvent *event;
	int result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	operator = *((struct wmOperator **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	event = *((struct wmEvent **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	result = rna_Operator_confirm(C, operator, event);
	*((int *)_retdata) = result;
}

struct PointerRNA WindowManager_pupmenu_begin__internal(bContext *C, const char * title, int icon)
{
	return rna_PupMenuBegin(C, title, icon);
}

void WindowManager_pupmenu_begin__internal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * title;
	int icon;
	struct PointerRNA menu;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	title = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	icon = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	menu = rna_PupMenuBegin(C, title, icon);
	*((struct PointerRNA *)_retdata) = menu;
}

void WindowManager_pupmenu_end__internal(bContext *C, struct PointerRNA *menu)
{
	rna_PupMenuEnd(C, menu);
}

void WindowManager_pupmenu_end__internal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct PointerRNA *menu;
	char *_data;
	
	_data = (char *)_parms->data;
	menu = ((struct PointerRNA *)_data);
	
	rna_PupMenuEnd(C, menu);
}

struct PointerRNA WindowManager_piemenu_begin__internal(bContext *C, const char * title, int icon, struct PointerRNA *event)
{
	return rna_PieMenuBegin(C, title, icon, event);
}

void WindowManager_piemenu_begin__internal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * title;
	int icon;
	struct PointerRNA *event;
	struct PointerRNA menu_pie;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	title = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	icon = *((int *)_data);
	_data += 4;
	event = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	_retdata = _data;
	
	menu_pie = rna_PieMenuBegin(C, title, icon, event);
	*((struct PointerRNA *)_retdata) = menu_pie;
}

void WindowManager_piemenu_end__internal(bContext *C, struct PointerRNA *menu)
{
	rna_PieMenuEnd(C, menu);
}

void WindowManager_piemenu_end__internal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct PointerRNA *menu;
	char *_data;
	
	_data = (char *)_parms->data;
	menu = ((struct PointerRNA *)_data);
	
	rna_PieMenuEnd(C, menu);
}

/* Repeated prototypes to detect errors */

void WM_event_add_fileselect(bContext *C, struct wmOperator *operator_value);
int rna_event_modal_handler_add(bContext *C, struct wmOperator *operator_value);
struct wmTimer *rna_event_timer_add(struct wmWindowManager *_self, float time_step, struct wmWindow *window);
void rna_event_timer_remove(struct wmWindowManager *_self, struct wmTimer *timer);
void rna_progress_begin(struct wmWindowManager *_self, float min, float max);
void rna_progress_update(struct wmWindowManager *_self, float value);
void rna_progress_end(struct wmWindowManager *_self);
int rna_Operator_props_popup(bContext *C, struct wmOperator *operator_value, struct wmEvent *event);
int WM_operator_props_dialog_popup(bContext *C, struct wmOperator *operator_value, int width, int height);
void rna_Operator_enum_search_invoke(bContext *C, struct wmOperator *operator_value);
int WM_operator_ui_popup(bContext *C, struct wmOperator *operator_value, int width, int height);
int rna_Operator_confirm(bContext *C, struct wmOperator *operator_value, struct wmEvent *event);
struct PointerRNA rna_PupMenuBegin(bContext *C, const char * title, int icon);
void rna_PupMenuEnd(bContext *C, struct PointerRNA *menu);
struct PointerRNA rna_PieMenuBegin(bContext *C, const char * title, int icon, struct PointerRNA *event);
void rna_PieMenuEnd(bContext *C, struct PointerRNA *menu);

struct wmKeyConfig *KeyConfigurations_new(struct wmWindowManager *_self, const char * name)
{
	return WM_keyconfig_new_user(_self, name);
}

void KeyConfigurations_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindowManager *_self;
	const char * name;
	struct wmKeyConfig *keyconfig;
	char *_data, *_retdata;
	
	_self = (struct wmWindowManager *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	keyconfig = WM_keyconfig_new_user(_self, name);
	*((struct wmKeyConfig **)_retdata) = keyconfig;
}

void KeyConfigurations_remove(struct wmWindowManager *_self, ReportList *reports, struct PointerRNA *keyconfig)
{
	rna_KeyConfig_remove(_self, reports, keyconfig);
}

void KeyConfigurations_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindowManager *_self;
	struct PointerRNA *keyconfig;
	char *_data;
	
	_self = (struct wmWindowManager *)_ptr->data;
	_data = (char *)_parms->data;
	keyconfig = *((struct PointerRNA **)_data);
	
	rna_KeyConfig_remove(_self, reports, keyconfig);
}

/* Repeated prototypes to detect errors */

struct wmKeyConfig *WM_keyconfig_new_user(struct wmWindowManager *_self, const char * name);
void rna_KeyConfig_remove(struct wmWindowManager *_self, ReportList *reports, struct PointerRNA *keyconfig);


struct wmKeyMap *KeyMaps_new(struct wmKeyConfig *_self, const char * name, int space_type, int region_type, int modal)
{
	return rna_keymap_new(_self, name, space_type, region_type, modal);
}

void KeyMaps_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyConfig *_self;
	const char * name;
	int space_type;
	int region_type;
	int modal;
	struct wmKeyMap *keymap;
	char *_data, *_retdata;
	
	_self = (struct wmKeyConfig *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	space_type = *((int *)_data);
	_data += 4;
	region_type = *((int *)_data);
	_data += 4;
	modal = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	keymap = rna_keymap_new(_self, name, space_type, region_type, modal);
	*((struct wmKeyMap **)_retdata) = keymap;
}

void KeyMaps_remove(struct wmKeyConfig *_self, ReportList *reports, struct PointerRNA *keymap)
{
	rna_KeyMap_remove(_self, reports, keymap);
}

void KeyMaps_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyConfig *_self;
	struct PointerRNA *keymap;
	char *_data;
	
	_self = (struct wmKeyConfig *)_ptr->data;
	_data = (char *)_parms->data;
	keymap = *((struct PointerRNA **)_data);
	
	rna_KeyMap_remove(_self, reports, keymap);
}

struct wmKeyMap *KeyMaps_find(struct wmKeyConfig *_self, const char * name, int space_type, int region_type)
{
	return rna_keymap_find(_self, name, space_type, region_type);
}

void KeyMaps_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyConfig *_self;
	const char * name;
	int space_type;
	int region_type;
	struct wmKeyMap *keymap;
	char *_data, *_retdata;
	
	_self = (struct wmKeyConfig *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	space_type = *((int *)_data);
	_data += 4;
	region_type = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	keymap = rna_keymap_find(_self, name, space_type, region_type);
	*((struct wmKeyMap **)_retdata) = keymap;
}

struct wmKeyMap *KeyMaps_find_modal(struct wmKeyConfig *_self, const char * name)
{
	return rna_keymap_find_modal(_self, name);
}

void KeyMaps_find_modal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyConfig *_self;
	const char * name;
	struct wmKeyMap *keymap;
	char *_data, *_retdata;
	
	_self = (struct wmKeyConfig *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	keymap = rna_keymap_find_modal(_self, name);
	*((struct wmKeyMap **)_retdata) = keymap;
}

/* Repeated prototypes to detect errors */

struct wmKeyMap *rna_keymap_new(struct wmKeyConfig *_self, const char * name, int space_type, int region_type, int modal);
void rna_KeyMap_remove(struct wmKeyConfig *_self, ReportList *reports, struct PointerRNA *keymap);
struct wmKeyMap *rna_keymap_find(struct wmKeyConfig *_self, const char * name, int space_type, int region_type);
struct wmKeyMap *rna_keymap_find_modal(struct wmKeyConfig *_self, const char * name);

struct wmKeyMap *KeyMap_active(struct wmKeyMap *_self, bContext *C)
{
	return rna_keymap_active(_self, C);
}

void KeyMap_active_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMap *_self;
	struct wmKeyMap *keymap;
	char *_data, *_retdata;
	
	_self = (struct wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	keymap = rna_keymap_active(_self, C);
	*((struct wmKeyMap **)_retdata) = keymap;
}

void KeyMap_restore_to_default(struct wmKeyMap *_self, bContext *C)
{
	WM_keymap_restore_to_default(_self, C);
}

void KeyMap_restore_to_default_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMap *_self;
	_self = (struct wmKeyMap *)_ptr->data;
	
	WM_keymap_restore_to_default(_self, C);
}

void KeyMap_restore_item_to_default(struct wmKeyMap *_self, bContext *C, struct wmKeyMapItem *item)
{
	rna_keymap_restore_item_to_default(_self, C, item);
}

void KeyMap_restore_item_to_default_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMap *_self;
	struct wmKeyMapItem *item;
	char *_data;
	
	_self = (struct wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	item = *((struct wmKeyMapItem **)_data);
	
	rna_keymap_restore_item_to_default(_self, C, item);
}

/* Repeated prototypes to detect errors */

struct wmKeyMap *rna_keymap_active(struct wmKeyMap *_self, bContext *C);
void WM_keymap_restore_to_default(struct wmKeyMap *_self, bContext *C);
void rna_keymap_restore_item_to_default(struct wmKeyMap *_self, bContext *C, struct wmKeyMapItem *item);

struct wmKeyMapItem *KeyMapItems_new(struct wmKeyMap *_self, ReportList *reports, const char * idname, int type, int value, int any, int shift, int ctrl, int alt, int oskey, int key_modifier, int head)
{
	return rna_KeyMap_item_new(_self, reports, idname, type, value, any, shift, ctrl, alt, oskey, key_modifier, head);
}

void KeyMapItems_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMap *_self;
	const char * idname;
	int type;
	int value;
	int any;
	int shift;
	int ctrl;
	int alt;
	int oskey;
	int key_modifier;
	int head;
	struct wmKeyMapItem *item;
	char *_data, *_retdata;
	
	_self = (struct wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	idname = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	type = *((int *)_data);
	_data += 4;
	value = *((int *)_data);
	_data += 4;
	any = *((int *)_data);
	_data += 4;
	shift = *((int *)_data);
	_data += 4;
	ctrl = *((int *)_data);
	_data += 4;
	alt = *((int *)_data);
	_data += 4;
	oskey = *((int *)_data);
	_data += 4;
	key_modifier = *((int *)_data);
	_data += 4;
	head = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	item = rna_KeyMap_item_new(_self, reports, idname, type, value, any, shift, ctrl, alt, oskey, key_modifier, head);
	*((struct wmKeyMapItem **)_retdata) = item;
}

struct wmKeyMapItem *KeyMapItems_new_modal(struct wmKeyMap *_self, ReportList *reports, const char * propvalue, int type, int value, int any, int shift, int ctrl, int alt, int oskey, int key_modifier)
{
	return rna_KeyMap_item_new_modal(_self, reports, propvalue, type, value, any, shift, ctrl, alt, oskey, key_modifier);
}

void KeyMapItems_new_modal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMap *_self;
	const char * propvalue;
	int type;
	int value;
	int any;
	int shift;
	int ctrl;
	int alt;
	int oskey;
	int key_modifier;
	struct wmKeyMapItem *item;
	char *_data, *_retdata;
	
	_self = (struct wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	propvalue = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	type = *((int *)_data);
	_data += 4;
	value = *((int *)_data);
	_data += 4;
	any = *((int *)_data);
	_data += 4;
	shift = *((int *)_data);
	_data += 4;
	ctrl = *((int *)_data);
	_data += 4;
	alt = *((int *)_data);
	_data += 4;
	oskey = *((int *)_data);
	_data += 4;
	key_modifier = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	item = rna_KeyMap_item_new_modal(_self, reports, propvalue, type, value, any, shift, ctrl, alt, oskey, key_modifier);
	*((struct wmKeyMapItem **)_retdata) = item;
}

void KeyMapItems_remove(struct wmKeyMap *_self, ReportList *reports, struct PointerRNA *item)
{
	rna_KeyMap_item_remove(_self, reports, item);
}

void KeyMapItems_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMap *_self;
	struct PointerRNA *item;
	char *_data;
	
	_self = (struct wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	item = *((struct PointerRNA **)_data);
	
	rna_KeyMap_item_remove(_self, reports, item);
}

struct wmKeyMapItem *KeyMapItems_from_id(struct wmKeyMap *_self, int id)
{
	return WM_keymap_item_find_id(_self, id);
}

void KeyMapItems_from_id_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMap *_self;
	int id;
	struct wmKeyMapItem *item;
	char *_data, *_retdata;
	
	_self = (struct wmKeyMap *)_ptr->data;
	_data = (char *)_parms->data;
	id = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	item = WM_keymap_item_find_id(_self, id);
	*((struct wmKeyMapItem **)_retdata) = item;
}

/* Repeated prototypes to detect errors */

struct wmKeyMapItem *rna_KeyMap_item_new(struct wmKeyMap *_self, ReportList *reports, const char * idname, int type, int value, int any, int shift, int ctrl, int alt, int oskey, int key_modifier, int head);
struct wmKeyMapItem *rna_KeyMap_item_new_modal(struct wmKeyMap *_self, ReportList *reports, const char * propvalue, int type, int value, int any, int shift, int ctrl, int alt, int oskey, int key_modifier);
void rna_KeyMap_item_remove(struct wmKeyMap *_self, ReportList *reports, struct PointerRNA *item);
struct wmKeyMapItem *WM_keymap_item_find_id(struct wmKeyMap *_self, int id);

int KeyMapItem_compare(struct wmKeyMapItem *_self, struct wmKeyMapItem *item)
{
	return WM_keymap_item_compare(_self, item);
}

void KeyMapItem_compare_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMapItem *_self;
	struct wmKeyMapItem *item;
	int result;
	char *_data, *_retdata;
	
	_self = (struct wmKeyMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	item = *((struct wmKeyMapItem **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	result = WM_keymap_item_compare(_self, item);
	*((int *)_retdata) = result;
}

/* Repeated prototypes to detect errors */

int WM_keymap_item_compare(struct wmKeyMapItem *_self, struct wmKeyMapItem *item);

/* Operator */
CollectionPropertyRNA rna_Operator_rna_properties = {
	{(PropertyRNA *)&rna_Operator_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Operator_rna_properties_begin, Operator_rna_properties_next, Operator_rna_properties_end, Operator_rna_properties_get, NULL, NULL, Operator_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Operator_rna_type = {
	{(PropertyRNA *)&rna_Operator_name, (PropertyRNA *)&rna_Operator_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Operator_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Operator_name = {
	{(PropertyRNA *)&rna_Operator_properties, (PropertyRNA *)&rna_Operator_rna_type,
	-1, "name", 262144, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Operator_name_get, Operator_name_length, NULL, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_Operator_properties = {
	{(PropertyRNA *)&rna_Operator_has_reports, (PropertyRNA *)&rna_Operator_name,
	-1, "properties", 8650752, "Properties",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Operator_properties_get, NULL, NULL, NULL,&RNA_OperatorProperties
};

BoolPropertyRNA rna_Operator_has_reports = {
	{(PropertyRNA *)&rna_Operator_layout, (PropertyRNA *)&rna_Operator_properties,
	-1, "has_reports", 2, "Has Reports",
	"Operator has a set of reports (warnings and errors) from last execution",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Operator_has_reports_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Operator_layout = {
	{(PropertyRNA *)&rna_Operator_bl_idname, (PropertyRNA *)&rna_Operator_has_reports,
	-1, "layout", 8388608, "layout",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Operator_layout_get, NULL, NULL, NULL,&RNA_UILayout
};

StringPropertyRNA rna_Operator_bl_idname = {
	{(PropertyRNA *)&rna_Operator_bl_label, (PropertyRNA *)&rna_Operator_layout,
	-1, "bl_idname", 262161, "bl_idname",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Operator_bl_idname_get, Operator_bl_idname_length, Operator_bl_idname_set, NULL, NULL, NULL, 61, ""
};

StringPropertyRNA rna_Operator_bl_label = {
	{(PropertyRNA *)&rna_Operator_bl_translation_context, (PropertyRNA *)&rna_Operator_bl_idname,
	-1, "bl_label", 262161, "bl_label",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Operator_bl_label_get, Operator_bl_label_length, Operator_bl_label_set, NULL, NULL, NULL, 240, ""
};

StringPropertyRNA rna_Operator_bl_translation_context = {
	{(PropertyRNA *)&rna_Operator_bl_description, (PropertyRNA *)&rna_Operator_bl_label,
	-1, "bl_translation_context", 49, "bl_translation_context",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Operator_bl_translation_context_get, Operator_bl_translation_context_length, Operator_bl_translation_context_set, NULL, NULL, NULL, 240, "Operator"
};

StringPropertyRNA rna_Operator_bl_description = {
	{(PropertyRNA *)&rna_Operator_bl_options, (PropertyRNA *)&rna_Operator_bl_translation_context,
	-1, "bl_description", 49, "bl_description",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Operator_bl_description_get, Operator_bl_description_length, Operator_bl_description_set, NULL, NULL, NULL, 240, ""
};

static EnumPropertyItem rna_Operator_bl_options_items[8] = {
	{1, "REGISTER", 0, "Register", "Display in the info window and support the redo toolbar panel"},
	{2, "UNDO", 0, "Undo", "Push an undo event (needed for operator redo)"},
	{4, "BLOCKING", 0, "Blocking", "Block anything else from using the cursor"},
	{8, "MACRO", 0, "Macro", "Use to check if an operator is a macro"},
	{16, "GRAB_POINTER", 0, "Grab Pointer", "Use so the operator grabs the mouse focus, enables wrapping when continuous grab is enabled"},
	{32, "PRESET", 0, "Preset", "Display a preset button with the operators settings"},
	{64, "INTERNAL", 0, "Internal", "Removes the operator from search results"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Operator_bl_options = {
	{NULL, (PropertyRNA *)&rna_Operator_bl_description,
	-1, "bl_options", 2097203, "Options",
	"Options for this operator type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Operator_bl_options_get, Operator_bl_options_set, NULL, NULL, NULL, NULL, rna_Operator_bl_options_items, 7, 1
};

static EnumPropertyItem rna_Operator_report_type_items[10] = {
	{1, "DEBUG", 0, "Debug", ""},
	{2, "INFO", 0, "Info", ""},
	{4, "OPERATOR", 0, "Operator", ""},
	{8, "PROPERTY", 0, "Property", ""},
	{16, "WARNING", 0, "Warning", ""},
	{32, "ERROR", 0, "Error", ""},
	{64, "ERROR_INVALID_INPUT", 0, "Invalid Input", ""},
	{128, "ERROR_INVALID_CONTEXT", 0, "Invalid Context", ""},
	{256, "ERROR_OUT_OF_MEMORY", 0, "Out of Memory", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Operator_report_type = {
	{(PropertyRNA *)&rna_Operator_report_message, NULL,
	-1, "type", 2097159, "Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_Operator_report_type_items, 9, 0
};

StringPropertyRNA rna_Operator_report_message = {
	{NULL, (PropertyRNA *)&rna_Operator_report_type,
	-1, "message", 262149, "Report Message",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

FunctionRNA rna_Operator_report_func = {
	{(FunctionRNA *)&rna_Operator_poll_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_Operator_report_type, (PropertyRNA *)&rna_Operator_report_message}},
	"report", 0, "report",
	Operator_report_call,
	NULL
};

BoolPropertyRNA rna_Operator_poll_visible = {
	{(PropertyRNA *)&rna_Operator_poll_context, NULL,
	-1, "visible", 11, "",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_Operator_poll_context = {
	{NULL, (PropertyRNA *)&rna_Operator_poll_visible,
	-1, "context", 8650756, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_Operator_poll_func = {
	{(FunctionRNA *)&rna_Operator_execute_func, (FunctionRNA *)&rna_Operator_report_func,
	NULL,
	{(PropertyRNA *)&rna_Operator_poll_visible, (PropertyRNA *)&rna_Operator_poll_context}},
	"poll", 97, "Test if the operator can be called or not",
	NULL,
	(PropertyRNA *)&rna_Operator_poll_visible
};

PointerPropertyRNA rna_Operator_execute_context = {
	{(PropertyRNA *)&rna_Operator_execute_result, NULL,
	-1, "context", 8650756, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

static EnumPropertyItem rna_Operator_execute_result_items[6] = {
	{1, "RUNNING_MODAL", 0, "Running Modal", "Keep the operator running with blender"},
	{2, "CANCELLED", 0, "Cancelled", "When no action has been taken, operator exits"},
	{4, "FINISHED", 0, "Finished", "When the operator is complete, operator exits"},
	{8, "PASS_THROUGH", 0, "Pass Through", "Do nothing and pass the event on"},
	{32, "INTERFACE", 0, "Interface", "Handled but not executed (popup menus)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Operator_execute_result = {
	{NULL, (PropertyRNA *)&rna_Operator_execute_context,
	-1, "result", 2097163, "result",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_Operator_execute_result_items, 5, 2
};

FunctionRNA rna_Operator_execute_func = {
	{(FunctionRNA *)&rna_Operator_check_func, (FunctionRNA *)&rna_Operator_poll_func,
	NULL,
	{(PropertyRNA *)&rna_Operator_execute_context, (PropertyRNA *)&rna_Operator_execute_result}},
	"execute", 4192, "Execute the operator",
	NULL,
	(PropertyRNA *)&rna_Operator_execute_result
};

PointerPropertyRNA rna_Operator_check_context = {
	{(PropertyRNA *)&rna_Operator_check_result, NULL,
	-1, "context", 8650756, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

BoolPropertyRNA rna_Operator_check_result = {
	{NULL, (PropertyRNA *)&rna_Operator_check_context,
	-1, "result", 11, "result",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Operator_check_func = {
	{(FunctionRNA *)&rna_Operator_invoke_func, (FunctionRNA *)&rna_Operator_execute_func,
	NULL,
	{(PropertyRNA *)&rna_Operator_check_context, (PropertyRNA *)&rna_Operator_check_result}},
	"check", 4192, "Check the operator settings, return True to signal a change to redraw",
	NULL,
	(PropertyRNA *)&rna_Operator_check_result
};

PointerPropertyRNA rna_Operator_invoke_context = {
	{(PropertyRNA *)&rna_Operator_invoke_event, NULL,
	-1, "context", 8650756, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

PointerPropertyRNA rna_Operator_invoke_event = {
	{(PropertyRNA *)&rna_Operator_invoke_result, (PropertyRNA *)&rna_Operator_invoke_context,
	-1, "event", 8650756, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Event
};

static EnumPropertyItem rna_Operator_invoke_result_items[6] = {
	{1, "RUNNING_MODAL", 0, "Running Modal", "Keep the operator running with blender"},
	{2, "CANCELLED", 0, "Cancelled", "When no action has been taken, operator exits"},
	{4, "FINISHED", 0, "Finished", "When the operator is complete, operator exits"},
	{8, "PASS_THROUGH", 0, "Pass Through", "Do nothing and pass the event on"},
	{32, "INTERFACE", 0, "Interface", "Handled but not executed (popup menus)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Operator_invoke_result = {
	{NULL, (PropertyRNA *)&rna_Operator_invoke_event,
	-1, "result", 2097163, "result",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_Operator_invoke_result_items, 5, 2
};

FunctionRNA rna_Operator_invoke_func = {
	{(FunctionRNA *)&rna_Operator_modal_func, (FunctionRNA *)&rna_Operator_check_func,
	NULL,
	{(PropertyRNA *)&rna_Operator_invoke_context, (PropertyRNA *)&rna_Operator_invoke_result}},
	"invoke", 4192, "Invoke the operator",
	NULL,
	(PropertyRNA *)&rna_Operator_invoke_result
};

PointerPropertyRNA rna_Operator_modal_context = {
	{(PropertyRNA *)&rna_Operator_modal_event, NULL,
	-1, "context", 8650756, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

PointerPropertyRNA rna_Operator_modal_event = {
	{(PropertyRNA *)&rna_Operator_modal_result, (PropertyRNA *)&rna_Operator_modal_context,
	-1, "event", 8650756, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Event
};

static EnumPropertyItem rna_Operator_modal_result_items[6] = {
	{1, "RUNNING_MODAL", 0, "Running Modal", "Keep the operator running with blender"},
	{2, "CANCELLED", 0, "Cancelled", "When no action has been taken, operator exits"},
	{4, "FINISHED", 0, "Finished", "When the operator is complete, operator exits"},
	{8, "PASS_THROUGH", 0, "Pass Through", "Do nothing and pass the event on"},
	{32, "INTERFACE", 0, "Interface", "Handled but not executed (popup menus)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Operator_modal_result = {
	{NULL, (PropertyRNA *)&rna_Operator_modal_event,
	-1, "result", 2097163, "result",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_Operator_modal_result_items, 5, 2
};

FunctionRNA rna_Operator_modal_func = {
	{(FunctionRNA *)&rna_Operator_draw_func, (FunctionRNA *)&rna_Operator_invoke_func,
	NULL,
	{(PropertyRNA *)&rna_Operator_modal_context, (PropertyRNA *)&rna_Operator_modal_result}},
	"modal", 4192, "Modal operator function",
	NULL,
	(PropertyRNA *)&rna_Operator_modal_result
};

PointerPropertyRNA rna_Operator_draw_context = {
	{NULL, NULL,
	-1, "context", 8650756, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_Operator_draw_func = {
	{(FunctionRNA *)&rna_Operator_cancel_func, (FunctionRNA *)&rna_Operator_modal_func,
	NULL,
	{(PropertyRNA *)&rna_Operator_draw_context, (PropertyRNA *)&rna_Operator_draw_context}},
	"draw", 96, "Draw function for the operator",
	NULL,
	NULL
};

PointerPropertyRNA rna_Operator_cancel_context = {
	{NULL, NULL,
	-1, "context", 8650756, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_Operator_cancel_func = {
	{NULL, (FunctionRNA *)&rna_Operator_draw_func,
	NULL,
	{(PropertyRNA *)&rna_Operator_cancel_context, (PropertyRNA *)&rna_Operator_cancel_context}},
	"cancel", 4192, "Called when the operator is canceled",
	NULL,
	NULL
};

StructRNA RNA_Operator = {
	{(ContainerRNA *)&RNA_OperatorProperties, (ContainerRNA *)&RNA_VectorFont,
	NULL,
	{(PropertyRNA *)&rna_Operator_rna_properties, (PropertyRNA *)&rna_Operator_bl_options}},
	"Operator", NULL, NULL, 4, "Operator",
	"Storage of an operator being executed, or registered after execution",
	"Operator", 17,
	(PropertyRNA *)&rna_Operator_bl_idname, (PropertyRNA *)&rna_Operator_rna_properties,
	NULL,
	NULL,
	rna_Operator_refine,
	NULL,
#if !defined(SPEC)
        rna_Operator_register,
        rna_Operator_unregister,
        rna_Operator_instance,
#else
	NULL,
	NULL,
	NULL,
#endif
	NULL,
	{(FunctionRNA *)&rna_Operator_report_func, (FunctionRNA *)&rna_Operator_cancel_func}
};

/* Operator Properties */
CollectionPropertyRNA rna_OperatorProperties_rna_properties = {
	{(PropertyRNA *)&rna_OperatorProperties_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	OperatorProperties_rna_properties_begin, OperatorProperties_rna_properties_next, OperatorProperties_rna_properties_end, OperatorProperties_rna_properties_get, NULL, NULL, OperatorProperties_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_OperatorProperties_rna_type = {
	{NULL, (PropertyRNA *)&rna_OperatorProperties_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	OperatorProperties_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StructRNA RNA_OperatorProperties = {
	{(ContainerRNA *)&RNA_OperatorMousePath, (ContainerRNA *)&RNA_Operator,
	NULL,
	{(PropertyRNA *)&rna_OperatorProperties_rna_properties, (PropertyRNA *)&rna_OperatorProperties_rna_type}},
	"OperatorProperties", NULL, NULL, 4, "Operator Properties",
	"Input properties of an Operator",
	"*", 17,
	NULL, (PropertyRNA *)&rna_OperatorProperties_rna_properties,
	NULL,
	NULL,
	rna_OperatorProperties_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_OperatorProperties_idprops,
	{NULL, NULL}
};

/* Operator Mouse Path */
static float rna_OperatorMousePath_loc_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_OperatorMousePath_loc = {
	{(PropertyRNA *)&rna_OperatorMousePath_time, NULL,
	-1, "loc", 1027, "Location",
	"Mouse location",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_OperatorMousePath_loc_default
};

FloatPropertyRNA rna_OperatorMousePath_time = {
	{NULL, (PropertyRNA *)&rna_OperatorMousePath_loc,
	-1, "time", 1027, "Time",
	"Time of mouse location",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_OperatorMousePath = {
	{(ContainerRNA *)&RNA_OperatorFileListElement, (ContainerRNA *)&RNA_OperatorProperties,
	NULL,
	{(PropertyRNA *)&rna_OperatorMousePath_loc, (PropertyRNA *)&rna_OperatorMousePath_time}},
	"OperatorMousePath", NULL, NULL, 4, "Operator Mouse Path",
	"Mouse path values for operators that record such paths",
	"*", 17,
	(PropertyRNA *)&rna_PropertyGroup_name, (PropertyRNA *)&rna_PropertyGroup_rna_properties,
	&RNA_PropertyGroup,
	NULL,
	rna_PropertyGroup_refine,
	NULL,
	rna_PropertyGroup_register,
	rna_PropertyGroup_unregister,
	NULL,
	rna_PropertyGroup_idprops,
	{NULL, NULL}
};

/* Operator File List Element */
StringPropertyRNA rna_OperatorFileListElement_name = {
	{NULL, NULL,
	-1, "name", 263169, "Name",
	"Name of a file or directory within a file list",
	0, "*",
	PROP_STRING, PROP_FILENAME | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StructRNA RNA_OperatorFileListElement = {
	{(ContainerRNA *)&RNA_Macro, (ContainerRNA *)&RNA_OperatorMousePath,
	NULL,
	{(PropertyRNA *)&rna_OperatorFileListElement_name, (PropertyRNA *)&rna_OperatorFileListElement_name}},
	"OperatorFileListElement", NULL, NULL, 4, "Operator File List Element",
	"",
	"*", 17,
	(PropertyRNA *)&rna_PropertyGroup_name, (PropertyRNA *)&rna_PropertyGroup_rna_properties,
	&RNA_PropertyGroup,
	NULL,
	rna_PropertyGroup_refine,
	NULL,
	rna_PropertyGroup_register,
	rna_PropertyGroup_unregister,
	NULL,
	rna_PropertyGroup_idprops,
	{NULL, NULL}
};

/* Macro Operator */
CollectionPropertyRNA rna_Macro_rna_properties = {
	{(PropertyRNA *)&rna_Macro_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Macro_rna_properties_begin, Macro_rna_properties_next, Macro_rna_properties_end, Macro_rna_properties_get, NULL, NULL, Macro_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Macro_rna_type = {
	{(PropertyRNA *)&rna_Macro_name, (PropertyRNA *)&rna_Macro_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Macro_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Macro_name = {
	{(PropertyRNA *)&rna_Macro_properties, (PropertyRNA *)&rna_Macro_rna_type,
	-1, "name", 262144, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Macro_name_get, Macro_name_length, NULL, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_Macro_properties = {
	{(PropertyRNA *)&rna_Macro_bl_idname, (PropertyRNA *)&rna_Macro_name,
	-1, "properties", 8650752, "Properties",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Macro_properties_get, NULL, NULL, NULL,&RNA_OperatorProperties
};

StringPropertyRNA rna_Macro_bl_idname = {
	{(PropertyRNA *)&rna_Macro_bl_label, (PropertyRNA *)&rna_Macro_properties,
	-1, "bl_idname", 262161, "bl_idname",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Macro_bl_idname_get, Macro_bl_idname_length, Macro_bl_idname_set, NULL, NULL, NULL, 64, ""
};

StringPropertyRNA rna_Macro_bl_label = {
	{(PropertyRNA *)&rna_Macro_bl_translation_context, (PropertyRNA *)&rna_Macro_bl_idname,
	-1, "bl_label", 262161, "bl_label",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Macro_bl_label_get, Macro_bl_label_length, Macro_bl_label_set, NULL, NULL, NULL, 240, ""
};

StringPropertyRNA rna_Macro_bl_translation_context = {
	{(PropertyRNA *)&rna_Macro_bl_description, (PropertyRNA *)&rna_Macro_bl_label,
	-1, "bl_translation_context", 49, "bl_translation_context",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Macro_bl_translation_context_get, Macro_bl_translation_context_length, Macro_bl_translation_context_set, NULL, NULL, NULL, 240, "Operator"
};

StringPropertyRNA rna_Macro_bl_description = {
	{(PropertyRNA *)&rna_Macro_bl_options, (PropertyRNA *)&rna_Macro_bl_translation_context,
	-1, "bl_description", 49, "bl_description",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Macro_bl_description_get, Macro_bl_description_length, Macro_bl_description_set, NULL, NULL, NULL, 240, ""
};

static EnumPropertyItem rna_Macro_bl_options_items[8] = {
	{1, "REGISTER", 0, "Register", "Display in the info window and support the redo toolbar panel"},
	{2, "UNDO", 0, "Undo", "Push an undo event (needed for operator redo)"},
	{4, "BLOCKING", 0, "Blocking", "Block anything else from using the cursor"},
	{8, "MACRO", 0, "Macro", "Use to check if an operator is a macro"},
	{16, "GRAB_POINTER", 0, "Grab Pointer", "Use so the operator grabs the mouse focus, enables wrapping when continuous grab is enabled"},
	{32, "PRESET", 0, "Preset", "Display a preset button with the operators settings"},
	{64, "INTERNAL", 0, "Internal", "Removes the operator from search results"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Macro_bl_options = {
	{NULL, (PropertyRNA *)&rna_Macro_bl_description,
	-1, "bl_options", 2097203, "Options",
	"Options for this operator type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Macro_bl_options_get, Macro_bl_options_set, NULL, NULL, NULL, NULL, rna_Macro_bl_options_items, 7, 1
};

static EnumPropertyItem rna_Macro_report_type_items[10] = {
	{1, "DEBUG", 0, "Debug", ""},
	{2, "INFO", 0, "Info", ""},
	{4, "OPERATOR", 0, "Operator", ""},
	{8, "PROPERTY", 0, "Property", ""},
	{16, "WARNING", 0, "Warning", ""},
	{32, "ERROR", 0, "Error", ""},
	{64, "ERROR_INVALID_INPUT", 0, "Invalid Input", ""},
	{128, "ERROR_INVALID_CONTEXT", 0, "Invalid Context", ""},
	{256, "ERROR_OUT_OF_MEMORY", 0, "Out of Memory", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Macro_report_type = {
	{(PropertyRNA *)&rna_Macro_report_message, NULL,
	-1, "type", 2097159, "Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_Macro_report_type_items, 9, 0
};

StringPropertyRNA rna_Macro_report_message = {
	{NULL, (PropertyRNA *)&rna_Macro_report_type,
	-1, "message", 262149, "Report Message",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

FunctionRNA rna_Macro_report_func = {
	{(FunctionRNA *)&rna_Macro_poll_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_Macro_report_type, (PropertyRNA *)&rna_Macro_report_message}},
	"report", 0, "report",
	Macro_report_call,
	NULL
};

BoolPropertyRNA rna_Macro_poll_visible = {
	{(PropertyRNA *)&rna_Macro_poll_context, NULL,
	-1, "visible", 11, "",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_Macro_poll_context = {
	{NULL, (PropertyRNA *)&rna_Macro_poll_visible,
	-1, "context", 8650756, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_Macro_poll_func = {
	{(FunctionRNA *)&rna_Macro_draw_func, (FunctionRNA *)&rna_Macro_report_func,
	NULL,
	{(PropertyRNA *)&rna_Macro_poll_visible, (PropertyRNA *)&rna_Macro_poll_context}},
	"poll", 97, "Test if the operator can be called or not",
	NULL,
	(PropertyRNA *)&rna_Macro_poll_visible
};

PointerPropertyRNA rna_Macro_draw_context = {
	{NULL, NULL,
	-1, "context", 8650756, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_Macro_draw_func = {
	{NULL, (FunctionRNA *)&rna_Macro_poll_func,
	NULL,
	{(PropertyRNA *)&rna_Macro_draw_context, (PropertyRNA *)&rna_Macro_draw_context}},
	"draw", 96, "Draw function for the operator",
	NULL,
	NULL
};

StructRNA RNA_Macro = {
	{(ContainerRNA *)&RNA_OperatorMacro, (ContainerRNA *)&RNA_OperatorFileListElement,
	NULL,
	{(PropertyRNA *)&rna_Macro_rna_properties, (PropertyRNA *)&rna_Macro_bl_options}},
	"Macro", NULL, NULL, 4, "Macro Operator",
	"Storage of a macro operator being executed, or registered after execution",
	"Operator", 17,
	(PropertyRNA *)&rna_Macro_bl_idname, (PropertyRNA *)&rna_Macro_rna_properties,
	NULL,
	NULL,
	rna_MacroOperator_refine,
	NULL,
#if !defined(SPEC)
        rna_MacroOperator_register,
        rna_Operator_unregister,
        rna_Operator_instance,
#else
	NULL,
	NULL,
	NULL,
#endif
	NULL,
	{(FunctionRNA *)&rna_Macro_report_func, (FunctionRNA *)&rna_Macro_draw_func}
};

/* Operator Macro */
CollectionPropertyRNA rna_OperatorMacro_rna_properties = {
	{(PropertyRNA *)&rna_OperatorMacro_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	OperatorMacro_rna_properties_begin, OperatorMacro_rna_properties_next, OperatorMacro_rna_properties_end, OperatorMacro_rna_properties_get, NULL, NULL, OperatorMacro_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_OperatorMacro_rna_type = {
	{(PropertyRNA *)&rna_OperatorMacro_properties, (PropertyRNA *)&rna_OperatorMacro_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	OperatorMacro_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_OperatorMacro_properties = {
	{NULL, (PropertyRNA *)&rna_OperatorMacro_rna_type,
	-1, "properties", 8650752, "Properties",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	OperatorMacro_properties_get, NULL, NULL, NULL,&RNA_OperatorProperties
};

StructRNA RNA_OperatorMacro = {
	{(ContainerRNA *)&RNA_Event, (ContainerRNA *)&RNA_Macro,
	NULL,
	{(PropertyRNA *)&rna_OperatorMacro_rna_properties, (PropertyRNA *)&rna_OperatorMacro_properties}},
	"OperatorMacro", NULL, NULL, 4, "Operator Macro",
	"Storage of a sub operator in a macro after it has been added",
	"*", 17,
	NULL, (PropertyRNA *)&rna_OperatorMacro_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Event */
CollectionPropertyRNA rna_Event_rna_properties = {
	{(PropertyRNA *)&rna_Event_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_rna_properties_begin, Event_rna_properties_next, Event_rna_properties_end, Event_rna_properties_get, NULL, NULL, Event_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Event_rna_type = {
	{(PropertyRNA *)&rna_Event_ascii, (PropertyRNA *)&rna_Event_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Event_ascii = {
	{(PropertyRNA *)&rna_Event_unicode, (PropertyRNA *)&rna_Event_rna_type,
	-1, "ascii", 262144, "ASCII",
	"Single ASCII character for this event",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_ascii_get, Event_ascii_length, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_Event_unicode = {
	{(PropertyRNA *)&rna_Event_value, (PropertyRNA *)&rna_Event_ascii,
	-1, "unicode", 262144, "Unicode",
	"Single unicode character for this event",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_unicode_get, Event_unicode_length, NULL, NULL, NULL, NULL, 0, ""
};

static EnumPropertyItem rna_Event_value_items[15] = {
	{-1, "ANY", 0, "Any", ""},
	{0, "NOTHING", 0, "Nothing", ""},
	{1, "PRESS", 0, "Press", ""},
	{2, "RELEASE", 0, "Release", ""},
	{3, "CLICK", 0, "Click", ""},
	{4, "DOUBLE_CLICK", 0, "Double Click", ""},
	{1, "NORTH", 0, "North", ""},
	{2, "NORTH_EAST", 0, "North-East", ""},
	{3, "EAST", 0, "East", ""},
	{4, "SOUTH_EAST", 0, "South-East", ""},
	{5, "SOUTH", 0, "South", ""},
	{6, "SOUTH_WEST", 0, "South-West", ""},
	{7, "WEST", 0, "West", ""},
	{8, "NORTH_WEST", 0, "North-West", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Event_value = {
	{(PropertyRNA *)&rna_Event_type, (PropertyRNA *)&rna_Event_unicode,
	-1, "value", 2, "Value",
	"The type of event, only applies to some",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_value_get, NULL, NULL, NULL, NULL, NULL, rna_Event_value_items, 14, 0
};

static EnumPropertyItem rna_Event_type_items[196] = {
	{0, "NONE", 0, "", ""},
	{1, "LEFTMOUSE", 0, "Left Mouse", ""},
	{2, "MIDDLEMOUSE", 0, "Middle Mouse", ""},
	{3, "RIGHTMOUSE", 0, "Right Mouse", ""},
	{7, "BUTTON4MOUSE", 0, "Button4 Mouse", ""},
	{8, "BUTTON5MOUSE", 0, "Button5 Mouse", ""},
	{18, "BUTTON6MOUSE", 0, "Button6 Mouse", ""},
	{19, "BUTTON7MOUSE", 0, "Button7 Mouse", ""},
	{5, "ACTIONMOUSE", 0, "Action Mouse", ""},
	{6, "SELECTMOUSE", 0, "Select Mouse", ""},
	{0, "", 0, NULL, NULL},
	{4, "MOUSEMOVE", 0, "Mouse Move", ""},
	{17, "INBETWEEN_MOUSEMOVE", 0, "In-between Move", ""},
	{14, "TRACKPADPAN", 0, "Mouse/Trackpad Pan", ""},
	{15, "TRACKPADZOOM", 0, "Mouse/Trackpad Zoom", ""},
	{16, "MOUSEROTATE", 0, "Mouse/Trackpad Rotate", ""},
	{0, "", 0, NULL, NULL},
	{10, "WHEELUPMOUSE", 0, "Wheel Up", ""},
	{11, "WHEELDOWNMOUSE", 0, "Wheel Down", ""},
	{12, "WHEELINMOUSE", 0, "Wheel In", ""},
	{13, "WHEELOUTMOUSE", 0, "Wheel Out", ""},
	{0, "", 0, NULL, NULL},
	{20483, "EVT_TWEAK_L", 0, "Tweak Left", ""},
	{20484, "EVT_TWEAK_M", 0, "Tweak Middle", ""},
	{20485, "EVT_TWEAK_R", 0, "Tweak Right", ""},
	{20486, "EVT_TWEAK_A", 0, "Tweak Action", ""},
	{20487, "EVT_TWEAK_S", 0, "Tweak Select", ""},
	{0, "", 0, NULL, NULL},
	{97, "A", 0, "A", ""},
	{98, "B", 0, "B", ""},
	{99, "C", 0, "C", ""},
	{100, "D", 0, "D", ""},
	{101, "E", 0, "E", ""},
	{102, "F", 0, "F", ""},
	{103, "G", 0, "G", ""},
	{104, "H", 0, "H", ""},
	{105, "I", 0, "I", ""},
	{106, "J", 0, "J", ""},
	{107, "K", 0, "K", ""},
	{108, "L", 0, "L", ""},
	{109, "M", 0, "M", ""},
	{110, "N", 0, "N", ""},
	{111, "O", 0, "O", ""},
	{112, "P", 0, "P", ""},
	{113, "Q", 0, "Q", ""},
	{114, "R", 0, "R", ""},
	{115, "S", 0, "S", ""},
	{116, "T", 0, "T", ""},
	{117, "U", 0, "U", ""},
	{118, "V", 0, "V", ""},
	{119, "W", 0, "W", ""},
	{120, "X", 0, "X", ""},
	{121, "Y", 0, "Y", ""},
	{122, "Z", 0, "Z", ""},
	{0, "", 0, NULL, NULL},
	{48, "ZERO", 0, "0", ""},
	{49, "ONE", 0, "1", ""},
	{50, "TWO", 0, "2", ""},
	{51, "THREE", 0, "3", ""},
	{52, "FOUR", 0, "4", ""},
	{53, "FIVE", 0, "5", ""},
	{54, "SIX", 0, "6", ""},
	{55, "SEVEN", 0, "7", ""},
	{56, "EIGHT", 0, "8", ""},
	{57, "NINE", 0, "9", ""},
	{0, "", 0, NULL, NULL},
	{212, "LEFT_CTRL", 0, "Left Ctrl", ""},
	{213, "LEFT_ALT", 0, "Left Alt", ""},
	{217, "LEFT_SHIFT", 0, "Left Shift", ""},
	{214, "RIGHT_ALT", 0, "Right Alt", ""},
	{215, "RIGHT_CTRL", 0, "Right Ctrl", ""},
	{216, "RIGHT_SHIFT", 0, "Right Shift", ""},
	{0, "", 0, NULL, NULL},
	{172, "OSKEY", 0, "OS Key", ""},
	{173, "GRLESS", 0, "Grless", ""},
	{218, "ESC", 0, "Esc", ""},
	{219, "TAB", 0, "Tab", ""},
	{220, "RET", 0, "Return", ""},
	{221, "SPACE", 0, "Spacebar", ""},
	{222, "LINE_FEED", 0, "Line Feed", ""},
	{223, "BACK_SPACE", 0, "Back Space", ""},
	{224, "DEL", 0, "Delete", ""},
	{225, "SEMI_COLON", 0, ";", ""},
	{226, "PERIOD", 0, ".", ""},
	{227, "COMMA", 0, ",", ""},
	{228, "QUOTE", 0, "\"", ""},
	{229, "ACCENT_GRAVE", 0, "`", ""},
	{230, "MINUS", 0, "-", ""},
	{232, "SLASH", 0, "/", ""},
	{233, "BACK_SLASH", 0, "\\", ""},
	{234, "EQUAL", 0, "=", ""},
	{235, "LEFT_BRACKET", 0, "[", ""},
	{236, "RIGHT_BRACKET", 0, "]", ""},
	{137, "LEFT_ARROW", 0, "Left Arrow", ""},
	{138, "DOWN_ARROW", 0, "Down Arrow", ""},
	{139, "RIGHT_ARROW", 0, "Right Arrow", ""},
	{140, "UP_ARROW", 0, "Up Arrow", ""},
	{152, "NUMPAD_2", 0, "Numpad 2", ""},
	{154, "NUMPAD_4", 0, "Numpad 4", ""},
	{156, "NUMPAD_6", 0, "Numpad 6", ""},
	{158, "NUMPAD_8", 0, "Numpad 8", ""},
	{151, "NUMPAD_1", 0, "Numpad 1", ""},
	{153, "NUMPAD_3", 0, "Numpad 3", ""},
	{155, "NUMPAD_5", 0, "Numpad 5", ""},
	{157, "NUMPAD_7", 0, "Numpad 7", ""},
	{159, "NUMPAD_9", 0, "Numpad 9", ""},
	{199, "NUMPAD_PERIOD", 0, "Numpad .", ""},
	{161, "NUMPAD_SLASH", 0, "Numpad /", ""},
	{160, "NUMPAD_ASTERIX", 0, "Numpad *", ""},
	{150, "NUMPAD_0", 0, "Numpad 0", ""},
	{162, "NUMPAD_MINUS", 0, "Numpad -", ""},
	{163, "NUMPAD_ENTER", 0, "Numpad Enter", ""},
	{164, "NUMPAD_PLUS", 0, "Numpad +", ""},
	{300, "F1", 0, "F1", ""},
	{301, "F2", 0, "F2", ""},
	{302, "F3", 0, "F3", ""},
	{303, "F4", 0, "F4", ""},
	{304, "F5", 0, "F5", ""},
	{305, "F6", 0, "F6", ""},
	{306, "F7", 0, "F7", ""},
	{307, "F8", 0, "F8", ""},
	{308, "F9", 0, "F9", ""},
	{309, "F10", 0, "F10", ""},
	{310, "F11", 0, "F11", ""},
	{311, "F12", 0, "F12", ""},
	{312, "F13", 0, "F13", ""},
	{313, "F14", 0, "F14", ""},
	{314, "F15", 0, "F15", ""},
	{315, "F16", 0, "F16", ""},
	{316, "F17", 0, "F17", ""},
	{317, "F18", 0, "F18", ""},
	{318, "F19", 0, "F19", ""},
	{165, "PAUSE", 0, "Pause", ""},
	{166, "INSERT", 0, "Insert", ""},
	{167, "HOME", 0, "Home", ""},
	{168, "PAGE_UP", 0, "Page Up", ""},
	{169, "PAGE_DOWN", 0, "Page Down", ""},
	{170, "END", 0, "End", ""},
	{0, "", 0, NULL, NULL},
	{174, "MEDIA_PLAY", 0, "Media Play/Pause", ""},
	{175, "MEDIA_STOP", 0, "Media Stop", ""},
	{176, "MEDIA_FIRST", 0, "Media First", ""},
	{177, "MEDIA_LAST", 0, "Media Last", ""},
	{0, "", 0, NULL, NULL},
	{-2, "TEXTINPUT", 0, "Text Input", ""},
	{0, "", 0, NULL, NULL},
	{260, "WINDOW_DEACTIVATE", 0, "Window Deactivate", ""},
	{272, "TIMER", 0, "Timer", ""},
	{273, "TIMER0", 0, "Timer 0", ""},
	{274, "TIMER1", 0, "Timer 1", ""},
	{275, "TIMER2", 0, "Timer 2", ""},
	{276, "TIMER_JOBS", 0, "Timer Jobs", ""},
	{277, "TIMER_AUTOSAVE", 0, "Timer Autosave", ""},
	{278, "TIMER_REPORT", 0, "Timer Report", ""},
	{279, "TIMERREGION", 0, "Timer Region", ""},
	{0, "", 0, NULL, NULL},
	{400, "NDOF_MOTION", 0, "NDOF Motion", ""},
	{401, "NDOF_BUTTON_MENU", 0, "NDOF Menu", ""},
	{402, "NDOF_BUTTON_FIT", 0, "NDOF Fit", ""},
	{403, "NDOF_BUTTON_TOP", 0, "NDOF Top", ""},
	{404, "NDOF_BUTTON_BOTTOM", 0, "NDOF Bottom", ""},
	{405, "NDOF_BUTTON_LEFT", 0, "NDOF Left", ""},
	{406, "NDOF_BUTTON_RIGHT", 0, "NDOF Right", ""},
	{407, "NDOF_BUTTON_FRONT", 0, "NDOF Front", ""},
	{408, "NDOF_BUTTON_BACK", 0, "NDOF Back", ""},
	{409, "NDOF_BUTTON_ISO1", 0, "NDOF Isometric 1", ""},
	{410, "NDOF_BUTTON_ISO2", 0, "NDOF Isometric 2", ""},
	{411, "NDOF_BUTTON_ROLL_CW", 0, "NDOF Roll CW", ""},
	{412, "NDOF_BUTTON_ROLL_CCW", 0, "NDOF Roll CCW", ""},
	{413, "NDOF_BUTTON_SPIN_CW", 0, "NDOF Spin CW", ""},
	{414, "NDOF_BUTTON_SPIN_CCW", 0, "NDOF Spin CCW", ""},
	{415, "NDOF_BUTTON_TILT_CW", 0, "NDOF Tilt CW", ""},
	{416, "NDOF_BUTTON_TILT_CCW", 0, "NDOF Tilt CCW", ""},
	{417, "NDOF_BUTTON_ROTATE", 0, "NDOF Rotate", ""},
	{418, "NDOF_BUTTON_PANZOOM", 0, "NDOF Pan/Zoom", ""},
	{419, "NDOF_BUTTON_DOMINANT", 0, "NDOF Dominant", ""},
	{420, "NDOF_BUTTON_PLUS", 0, "NDOF Plus", ""},
	{421, "NDOF_BUTTON_MINUS", 0, "NDOF Minus", ""},
	{422, "NDOF_BUTTON_ESC", 0, "NDOF Esc", NULL},
	{423, "NDOF_BUTTON_ALT", 0, "NDOF Alt", NULL},
	{424, "NDOF_BUTTON_SHIFT", 0, "NDOF Shift", NULL},
	{425, "NDOF_BUTTON_CTRL", 0, "NDOF Ctrl", NULL},
	{426, "NDOF_BUTTON_1", 0, "NDOF Button 1", ""},
	{427, "NDOF_BUTTON_2", 0, "NDOF Button 2", ""},
	{428, "NDOF_BUTTON_3", 0, "NDOF Button 3", ""},
	{429, "NDOF_BUTTON_4", 0, "NDOF Button 4", ""},
	{430, "NDOF_BUTTON_5", 0, "NDOF Button 5", ""},
	{431, "NDOF_BUTTON_6", 0, "NDOF Button 6", ""},
	{432, "NDOF_BUTTON_7", 0, "NDOF Button 7", ""},
	{433, "NDOF_BUTTON_8", 0, "NDOF Button 8", ""},
	{434, "NDOF_BUTTON_9", 0, "NDOF Button 9", ""},
	{435, "NDOF_BUTTON_10", 0, "NDOF Button 10", ""},
	{436, "NDOF_BUTTON_A", 0, "NDOF Button A", ""},
	{437, "NDOF_BUTTON_B", 0, "NDOF Button B", ""},
	{438, "NDOF_BUTTON_C", 0, "NDOF Button C", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Event_type = {
	{(PropertyRNA *)&rna_Event_mouse_x, (PropertyRNA *)&rna_Event_value,
	-1, "type", 2, "Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_type_get, NULL, NULL, NULL, NULL, NULL, rna_Event_type_items, 195, 0
};

IntPropertyRNA rna_Event_mouse_x = {
	{(PropertyRNA *)&rna_Event_mouse_y, (PropertyRNA *)&rna_Event_type,
	-1, "mouse_x", 2, "Mouse X Position",
	"The window relative horizontal location of the mouse",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_mouse_x_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Event_mouse_y = {
	{(PropertyRNA *)&rna_Event_mouse_region_x, (PropertyRNA *)&rna_Event_mouse_x,
	-1, "mouse_y", 2, "Mouse Y Position",
	"The window relative vertical location of the mouse",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_mouse_y_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Event_mouse_region_x = {
	{(PropertyRNA *)&rna_Event_mouse_region_y, (PropertyRNA *)&rna_Event_mouse_y,
	-1, "mouse_region_x", 2, "Mouse X Position",
	"The region relative horizontal location of the mouse",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_mouse_region_x_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Event_mouse_region_y = {
	{(PropertyRNA *)&rna_Event_mouse_prev_x, (PropertyRNA *)&rna_Event_mouse_region_x,
	-1, "mouse_region_y", 2, "Mouse Y Position",
	"The region relative vertical location of the mouse",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_mouse_region_y_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Event_mouse_prev_x = {
	{(PropertyRNA *)&rna_Event_mouse_prev_y, (PropertyRNA *)&rna_Event_mouse_region_y,
	-1, "mouse_prev_x", 2, "Mouse Previous X Position",
	"The window relative horizontal location of the mouse",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_mouse_prev_x_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Event_mouse_prev_y = {
	{(PropertyRNA *)&rna_Event_pressure, (PropertyRNA *)&rna_Event_mouse_prev_x,
	-1, "mouse_prev_y", 2, "Mouse Previous Y Position",
	"The window relative vertical location of the mouse",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_mouse_prev_y_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_Event_pressure = {
	{(PropertyRNA *)&rna_Event_tilt, (PropertyRNA *)&rna_Event_mouse_prev_y,
	-1, "pressure", 2, "Tablet Pressure",
	"The pressure of the tablet or 1.0 if no tablet present",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_pressure_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static float rna_Event_tilt_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Event_tilt = {
	{(PropertyRNA *)&rna_Event_is_tablet, (PropertyRNA *)&rna_Event_pressure,
	-1, "tilt", 2, "Tablet Tilt",
	"The pressure of the tablet or zeroes if no tablet present",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_LENGTH, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, Event_tilt_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Event_tilt_default
};

BoolPropertyRNA rna_Event_is_tablet = {
	{(PropertyRNA *)&rna_Event_shift, (PropertyRNA *)&rna_Event_tilt,
	-1, "is_tablet", 2, "Tablet Pressure",
	"The pressure of the tablet or 1.0 if no tablet present",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_is_tablet_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Event_shift = {
	{(PropertyRNA *)&rna_Event_ctrl, (PropertyRNA *)&rna_Event_is_tablet,
	-1, "shift", 2, "Shift",
	"True when the Shift key is held",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_shift_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Event_ctrl = {
	{(PropertyRNA *)&rna_Event_alt, (PropertyRNA *)&rna_Event_shift,
	-1, "ctrl", 2, "Ctrl",
	"True when the Ctrl key is held",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_ctrl_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Event_alt = {
	{(PropertyRNA *)&rna_Event_oskey, (PropertyRNA *)&rna_Event_ctrl,
	-1, "alt", 2, "Alt",
	"True when the Alt/Option key is held",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_alt_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Event_oskey = {
	{NULL, (PropertyRNA *)&rna_Event_alt,
	-1, "oskey", 2, "OS Key",
	"True when the Cmd key is held",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_oskey_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_Event = {
	{(ContainerRNA *)&RNA_Timer, (ContainerRNA *)&RNA_OperatorMacro,
	NULL,
	{(PropertyRNA *)&rna_Event_rna_properties, (PropertyRNA *)&rna_Event_oskey}},
	"Event", NULL, NULL, 4, "Event",
	"Window Manager Event",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Event_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Timer */
CollectionPropertyRNA rna_Timer_rna_properties = {
	{(PropertyRNA *)&rna_Timer_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Timer_rna_properties_begin, Timer_rna_properties_next, Timer_rna_properties_end, Timer_rna_properties_get, NULL, NULL, Timer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Timer_rna_type = {
	{(PropertyRNA *)&rna_Timer_time_step, (PropertyRNA *)&rna_Timer_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Timer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_Timer_time_step = {
	{(PropertyRNA *)&rna_Timer_time_delta, (PropertyRNA *)&rna_Timer_rna_type,
	-1, "time_step", 2, "Time Step",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Timer_time_step_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Timer_time_delta = {
	{(PropertyRNA *)&rna_Timer_time_duration, (PropertyRNA *)&rna_Timer_time_step,
	-1, "time_delta", 2, "Delta",
	"Time since last step in seconds",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Timer_time_delta_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Timer_time_duration = {
	{NULL, (PropertyRNA *)&rna_Timer_time_delta,
	-1, "time_duration", 2, "Delta",
	"Time since last step in seconds",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Timer_time_duration_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_Timer = {
	{(ContainerRNA *)&RNA_UIPopupMenu, (ContainerRNA *)&RNA_Event,
	NULL,
	{(PropertyRNA *)&rna_Timer_rna_properties, (PropertyRNA *)&rna_Timer_time_duration}},
	"Timer", NULL, NULL, 4, "Timer",
	"Window event timer",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Timer_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* PopupMenu */
CollectionPropertyRNA rna_UIPopupMenu_rna_properties = {
	{(PropertyRNA *)&rna_UIPopupMenu_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UIPopupMenu_rna_properties_begin, UIPopupMenu_rna_properties_next, UIPopupMenu_rna_properties_end, UIPopupMenu_rna_properties_get, NULL, NULL, UIPopupMenu_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_UIPopupMenu_rna_type = {
	{(PropertyRNA *)&rna_UIPopupMenu_layout, (PropertyRNA *)&rna_UIPopupMenu_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UIPopupMenu_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_UIPopupMenu_layout = {
	{NULL, (PropertyRNA *)&rna_UIPopupMenu_rna_type,
	-1, "layout", 8388608, "layout",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UIPopupMenu_layout_get, NULL, NULL, NULL,&RNA_UILayout
};

StructRNA RNA_UIPopupMenu = {
	{(ContainerRNA *)&RNA_UIPieMenu, (ContainerRNA *)&RNA_Timer,
	NULL,
	{(PropertyRNA *)&rna_UIPopupMenu_rna_properties, (PropertyRNA *)&rna_UIPopupMenu_layout}},
	"UIPopupMenu", NULL, NULL, 4, "PopupMenu",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_UIPopupMenu_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* PieMenu */
CollectionPropertyRNA rna_UIPieMenu_rna_properties = {
	{(PropertyRNA *)&rna_UIPieMenu_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UIPieMenu_rna_properties_begin, UIPieMenu_rna_properties_next, UIPieMenu_rna_properties_end, UIPieMenu_rna_properties_get, NULL, NULL, UIPieMenu_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_UIPieMenu_rna_type = {
	{(PropertyRNA *)&rna_UIPieMenu_layout, (PropertyRNA *)&rna_UIPieMenu_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UIPieMenu_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_UIPieMenu_layout = {
	{NULL, (PropertyRNA *)&rna_UIPieMenu_rna_type,
	-1, "layout", 8388608, "layout",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UIPieMenu_layout_get, NULL, NULL, NULL,&RNA_UILayout
};

StructRNA RNA_UIPieMenu = {
	{(ContainerRNA *)&RNA_Window, (ContainerRNA *)&RNA_UIPopupMenu,
	NULL,
	{(PropertyRNA *)&rna_UIPieMenu_rna_properties, (PropertyRNA *)&rna_UIPieMenu_layout}},
	"UIPieMenu", NULL, NULL, 4, "PieMenu",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_UIPieMenu_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Window */
CollectionPropertyRNA rna_Window_rna_properties = {
	{(PropertyRNA *)&rna_Window_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Window_rna_properties_begin, Window_rna_properties_next, Window_rna_properties_end, Window_rna_properties_get, NULL, NULL, Window_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Window_rna_type = {
	{(PropertyRNA *)&rna_Window_screen, (PropertyRNA *)&rna_Window_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Window_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_Window_screen = {
	{(PropertyRNA *)&rna_Window_x, (PropertyRNA *)&rna_Window_rna_type,
	-1, "screen", 12845121, "Screen",
	"Active screen showing in the window",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_Window_screen_update, 0, NULL, NULL,
	0, -1, NULL},
	Window_screen_get, Window_screen_set, NULL, rna_Window_screen_assign_poll,&RNA_Screen
};

IntPropertyRNA rna_Window_x = {
	{(PropertyRNA *)&rna_Window_y, (PropertyRNA *)&rna_Window_screen,
	-1, "x", 8194, "X Position",
	"Horizontal location of the window",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(wmWindow, posx), 1, NULL},
	Window_x_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-32768, 32767, -32768, 32767, 1, 0, NULL
};

IntPropertyRNA rna_Window_y = {
	{(PropertyRNA *)&rna_Window_width, (PropertyRNA *)&rna_Window_x,
	-1, "y", 8194, "Y Position",
	"Vertical location of the window",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(wmWindow, posy), 1, NULL},
	Window_y_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-32768, 32767, -32768, 32767, 1, 0, NULL
};

IntPropertyRNA rna_Window_width = {
	{(PropertyRNA *)&rna_Window_height, (PropertyRNA *)&rna_Window_y,
	-1, "width", 8194, "Width",
	"Window width",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(wmWindow, sizex), 1, NULL},
	Window_width_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

IntPropertyRNA rna_Window_height = {
	{NULL, (PropertyRNA *)&rna_Window_width,
	-1, "height", 8194, "Height",
	"Window height",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(wmWindow, sizey), 1, NULL},
	Window_height_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

IntPropertyRNA rna_Window_cursor_warp_x = {
	{(PropertyRNA *)&rna_Window_cursor_warp_y, NULL,
	-1, "x", 7, "",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Window_cursor_warp_y = {
	{NULL, (PropertyRNA *)&rna_Window_cursor_warp_x,
	-1, "y", 7, "",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_Window_cursor_warp_func = {
	{(FunctionRNA *)&rna_Window_cursor_set_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_Window_cursor_warp_x, (PropertyRNA *)&rna_Window_cursor_warp_y}},
	"cursor_warp", 0, "Set the cursor position",
	Window_cursor_warp_call,
	NULL
};

static EnumPropertyItem rna_Window_cursor_set_cursor_items[15] = {
	{1006, "DEFAULT", 0, "Default", ""},
	{1007, "NONE", 0, "None", ""},
	{1001, "WAIT", 0, "Wait", ""},
	{1002, "CROSSHAIR", 0, "Crosshair", ""},
	{1003, "MOVE_X", 0, "Move-X", ""},
	{1004, "MOVE_Y", 0, "Move-Y", ""},
	{9, "KNIFE", 0, "Knife", ""},
	{11, "TEXT", 0, "Text", ""},
	{12, "PAINT_BRUSH", 0, "Paint Brush", ""},
	{13, "HAND", 0, "Hand", ""},
	{16, "SCROLL_X", 0, "Scroll-X", ""},
	{15, "SCROLL_Y", 0, "Scroll-Y", ""},
	{14, "SCROLL_XY", 0, "Scroll-XY", ""},
	{17, "EYEDROPPER", 0, "Eyedropper", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Window_cursor_set_cursor = {
	{NULL, NULL,
	-1, "cursor", 7, "cursor",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_Window_cursor_set_cursor_items, 14, 1006
};

FunctionRNA rna_Window_cursor_set_func = {
	{(FunctionRNA *)&rna_Window_cursor_modal_set_func, (FunctionRNA *)&rna_Window_cursor_warp_func,
	NULL,
	{(PropertyRNA *)&rna_Window_cursor_set_cursor, (PropertyRNA *)&rna_Window_cursor_set_cursor}},
	"cursor_set", 0, "Set the cursor",
	Window_cursor_set_call,
	NULL
};

static EnumPropertyItem rna_Window_cursor_modal_set_cursor_items[15] = {
	{1006, "DEFAULT", 0, "Default", ""},
	{1007, "NONE", 0, "None", ""},
	{1001, "WAIT", 0, "Wait", ""},
	{1002, "CROSSHAIR", 0, "Crosshair", ""},
	{1003, "MOVE_X", 0, "Move-X", ""},
	{1004, "MOVE_Y", 0, "Move-Y", ""},
	{9, "KNIFE", 0, "Knife", ""},
	{11, "TEXT", 0, "Text", ""},
	{12, "PAINT_BRUSH", 0, "Paint Brush", ""},
	{13, "HAND", 0, "Hand", ""},
	{16, "SCROLL_X", 0, "Scroll-X", ""},
	{15, "SCROLL_Y", 0, "Scroll-Y", ""},
	{14, "SCROLL_XY", 0, "Scroll-XY", ""},
	{17, "EYEDROPPER", 0, "Eyedropper", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Window_cursor_modal_set_cursor = {
	{NULL, NULL,
	-1, "cursor", 7, "cursor",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_Window_cursor_modal_set_cursor_items, 14, 1006
};

FunctionRNA rna_Window_cursor_modal_set_func = {
	{(FunctionRNA *)&rna_Window_cursor_modal_restore_func, (FunctionRNA *)&rna_Window_cursor_set_func,
	NULL,
	{(PropertyRNA *)&rna_Window_cursor_modal_set_cursor, (PropertyRNA *)&rna_Window_cursor_modal_set_cursor}},
	"cursor_modal_set", 0, "Restore the previous cursor after calling ``cursor_modal_set``",
	Window_cursor_modal_set_call,
	NULL
};

FunctionRNA rna_Window_cursor_modal_restore_func = {
	{NULL, (FunctionRNA *)&rna_Window_cursor_modal_set_func,
	NULL,
	{NULL, NULL}},
	"cursor_modal_restore", 0, "cursor_modal_restore",
	Window_cursor_modal_restore_call,
	NULL
};

StructRNA RNA_Window = {
	{(ContainerRNA *)&RNA_WindowManager, (ContainerRNA *)&RNA_UIPieMenu,
	NULL,
	{(PropertyRNA *)&rna_Window_rna_properties, (PropertyRNA *)&rna_Window_height}},
	"Window", NULL, NULL, 4, "Window",
	"Open window",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Window_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_Window_cursor_warp_func, (FunctionRNA *)&rna_Window_cursor_modal_restore_func}
};

/* Window Manager */
CollectionPropertyRNA rna_WindowManager_operators = {
	{(PropertyRNA *)&rna_WindowManager_windows, NULL,
	-1, "operators", 0, "Operators",
	"Operator registry",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	WindowManager_operators_begin, WindowManager_operators_next, WindowManager_operators_end, WindowManager_operators_get, NULL, WindowManager_operators_lookup_int, WindowManager_operators_lookup_string, NULL, &RNA_Operator
};

CollectionPropertyRNA rna_WindowManager_windows = {
	{(PropertyRNA *)&rna_WindowManager_keyconfigs, (PropertyRNA *)&rna_WindowManager_operators,
	-1, "windows", 0, "Windows",
	"Open windows",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	WindowManager_windows_begin, WindowManager_windows_next, WindowManager_windows_end, WindowManager_windows_get, NULL, WindowManager_windows_lookup_int, NULL, NULL, &RNA_Window
};

CollectionPropertyRNA rna_WindowManager_keyconfigs = {
	{(PropertyRNA *)&rna_WindowManager_clipboard, (PropertyRNA *)&rna_WindowManager_windows,
	-1, "keyconfigs", 0, "Key Configurations",
	"Registered key configurations",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_KeyConfigurations},
	WindowManager_keyconfigs_begin, WindowManager_keyconfigs_next, WindowManager_keyconfigs_end, WindowManager_keyconfigs_get, NULL, WindowManager_keyconfigs_lookup_int, WindowManager_keyconfigs_lookup_string, NULL, &RNA_KeyConfig
};

StringPropertyRNA rna_WindowManager_clipboard = {
	{NULL, (PropertyRNA *)&rna_WindowManager_keyconfigs,
	-1, "clipboard", 262145, "Text Clipboard",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	WindowManager_clipboard_get, WindowManager_clipboard_length, WindowManager_clipboard_set, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_WindowManager_fileselect_add_operator = {
	{NULL, NULL,
	-1, "operator", 8388612, "",
	"Operator to call",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Operator
};

FunctionRNA rna_WindowManager_fileselect_add_func = {
	{(FunctionRNA *)&rna_WindowManager_modal_handler_add_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_WindowManager_fileselect_add_operator, (PropertyRNA *)&rna_WindowManager_fileselect_add_operator}},
	"fileselect_add", 9, "Opens a file selector with an operator. The string properties \'filepath\', \'filename\', \'directory\' and a \'files\' collection are assigned when present in the operator",
	WindowManager_fileselect_add_call,
	NULL
};

PointerPropertyRNA rna_WindowManager_modal_handler_add_operator = {
	{(PropertyRNA *)&rna_WindowManager_modal_handler_add_handle, NULL,
	-1, "operator", 8388612, "",
	"Operator to call",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Operator
};

BoolPropertyRNA rna_WindowManager_modal_handler_add_handle = {
	{NULL, (PropertyRNA *)&rna_WindowManager_modal_handler_add_operator,
	-1, "handle", 11, "",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

FunctionRNA rna_WindowManager_modal_handler_add_func = {
	{(FunctionRNA *)&rna_WindowManager_event_timer_add_func, (FunctionRNA *)&rna_WindowManager_fileselect_add_func,
	NULL,
	{(PropertyRNA *)&rna_WindowManager_modal_handler_add_operator, (PropertyRNA *)&rna_WindowManager_modal_handler_add_handle}},
	"modal_handler_add", 9, "modal_handler_add",
	WindowManager_modal_handler_add_call,
	(PropertyRNA *)&rna_WindowManager_modal_handler_add_handle
};

FloatPropertyRNA rna_WindowManager_event_timer_add_time_step = {
	{(PropertyRNA *)&rna_WindowManager_event_timer_add_window, NULL,
	-1, "time_step", 7, "Time Step",
	"Interval in seconds between timer events",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_WindowManager_event_timer_add_window = {
	{(PropertyRNA *)&rna_WindowManager_event_timer_add_result, (PropertyRNA *)&rna_WindowManager_event_timer_add_time_step,
	-1, "window", 8388608, "",
	"Window to attach the timer to or None",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Window
};

PointerPropertyRNA rna_WindowManager_event_timer_add_result = {
	{NULL, (PropertyRNA *)&rna_WindowManager_event_timer_add_window,
	-1, "result", 8388616, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Timer
};

FunctionRNA rna_WindowManager_event_timer_add_func = {
	{(FunctionRNA *)&rna_WindowManager_event_timer_remove_func, (FunctionRNA *)&rna_WindowManager_modal_handler_add_func,
	NULL,
	{(PropertyRNA *)&rna_WindowManager_event_timer_add_time_step, (PropertyRNA *)&rna_WindowManager_event_timer_add_result}},
	"event_timer_add", 0, "event_timer_add",
	WindowManager_event_timer_add_call,
	(PropertyRNA *)&rna_WindowManager_event_timer_add_result
};

PointerPropertyRNA rna_WindowManager_event_timer_remove_timer = {
	{NULL, NULL,
	-1, "timer", 8650756, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Timer
};

FunctionRNA rna_WindowManager_event_timer_remove_func = {
	{(FunctionRNA *)&rna_WindowManager_progress_begin_func, (FunctionRNA *)&rna_WindowManager_event_timer_add_func,
	NULL,
	{(PropertyRNA *)&rna_WindowManager_event_timer_remove_timer, (PropertyRNA *)&rna_WindowManager_event_timer_remove_timer}},
	"event_timer_remove", 0, "event_timer_remove",
	WindowManager_event_timer_remove_call,
	NULL
};

FloatPropertyRNA rna_WindowManager_progress_begin_min = {
	{(PropertyRNA *)&rna_WindowManager_progress_begin_max, NULL,
	-1, "min", 7, "min",
	"any value in range [0,9999]",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_WindowManager_progress_begin_max = {
	{NULL, (PropertyRNA *)&rna_WindowManager_progress_begin_min,
	-1, "max", 7, "max",
	"any value in range [min+1,9998]",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FunctionRNA rna_WindowManager_progress_begin_func = {
	{(FunctionRNA *)&rna_WindowManager_progress_update_func, (FunctionRNA *)&rna_WindowManager_event_timer_remove_func,
	NULL,
	{(PropertyRNA *)&rna_WindowManager_progress_begin_min, (PropertyRNA *)&rna_WindowManager_progress_begin_max}},
	"progress_begin", 0, "Start Progress bar",
	WindowManager_progress_begin_call,
	NULL
};

FloatPropertyRNA rna_WindowManager_progress_update_value = {
	{NULL, NULL,
	-1, "value", 7, "value",
	"any value between min and max as set in progress_begin()",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FunctionRNA rna_WindowManager_progress_update_func = {
	{(FunctionRNA *)&rna_WindowManager_progress_end_func, (FunctionRNA *)&rna_WindowManager_progress_begin_func,
	NULL,
	{(PropertyRNA *)&rna_WindowManager_progress_update_value, (PropertyRNA *)&rna_WindowManager_progress_update_value}},
	"progress_update", 0, "progress_update",
	WindowManager_progress_update_call,
	NULL
};

FunctionRNA rna_WindowManager_progress_end_func = {
	{(FunctionRNA *)&rna_WindowManager_invoke_props_popup_func, (FunctionRNA *)&rna_WindowManager_progress_update_func,
	NULL,
	{NULL, NULL}},
	"progress_end", 0, "Terminate Progress bar",
	WindowManager_progress_end_call,
	NULL
};

PointerPropertyRNA rna_WindowManager_invoke_props_popup_operator = {
	{(PropertyRNA *)&rna_WindowManager_invoke_props_popup_event, NULL,
	-1, "operator", 8388612, "",
	"Operator to call",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Operator
};

PointerPropertyRNA rna_WindowManager_invoke_props_popup_event = {
	{(PropertyRNA *)&rna_WindowManager_invoke_props_popup_result, (PropertyRNA *)&rna_WindowManager_invoke_props_popup_operator,
	-1, "event", 8388612, "",
	"Event",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Event
};

static EnumPropertyItem rna_WindowManager_invoke_props_popup_result_items[6] = {
	{1, "RUNNING_MODAL", 0, "Running Modal", "Keep the operator running with blender"},
	{2, "CANCELLED", 0, "Cancelled", "When no action has been taken, operator exits"},
	{4, "FINISHED", 0, "Finished", "When the operator is complete, operator exits"},
	{8, "PASS_THROUGH", 0, "Pass Through", "Do nothing and pass the event on"},
	{32, "INTERFACE", 0, "Interface", "Handled but not executed (popup menus)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WindowManager_invoke_props_popup_result = {
	{NULL, (PropertyRNA *)&rna_WindowManager_invoke_props_popup_event,
	-1, "result", 2097163, "result",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_WindowManager_invoke_props_popup_result_items, 5, 2
};

FunctionRNA rna_WindowManager_invoke_props_popup_func = {
	{(FunctionRNA *)&rna_WindowManager_invoke_props_dialog_func, (FunctionRNA *)&rna_WindowManager_progress_end_func,
	NULL,
	{(PropertyRNA *)&rna_WindowManager_invoke_props_popup_operator, (PropertyRNA *)&rna_WindowManager_invoke_props_popup_result}},
	"invoke_props_popup", 9, "Operator popup invoke",
	WindowManager_invoke_props_popup_call,
	(PropertyRNA *)&rna_WindowManager_invoke_props_popup_result
};

PointerPropertyRNA rna_WindowManager_invoke_props_dialog_operator = {
	{(PropertyRNA *)&rna_WindowManager_invoke_props_dialog_width, NULL,
	-1, "operator", 8388612, "",
	"Operator to call",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Operator
};

IntPropertyRNA rna_WindowManager_invoke_props_dialog_width = {
	{(PropertyRNA *)&rna_WindowManager_invoke_props_dialog_height, (PropertyRNA *)&rna_WindowManager_invoke_props_dialog_operator,
	-1, "width", 3, "",
	"Width of the popup",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 300, NULL
};

IntPropertyRNA rna_WindowManager_invoke_props_dialog_height = {
	{(PropertyRNA *)&rna_WindowManager_invoke_props_dialog_result, (PropertyRNA *)&rna_WindowManager_invoke_props_dialog_width,
	-1, "height", 3, "",
	"Height of the popup",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 20, NULL
};

static EnumPropertyItem rna_WindowManager_invoke_props_dialog_result_items[6] = {
	{1, "RUNNING_MODAL", 0, "Running Modal", "Keep the operator running with blender"},
	{2, "CANCELLED", 0, "Cancelled", "When no action has been taken, operator exits"},
	{4, "FINISHED", 0, "Finished", "When the operator is complete, operator exits"},
	{8, "PASS_THROUGH", 0, "Pass Through", "Do nothing and pass the event on"},
	{32, "INTERFACE", 0, "Interface", "Handled but not executed (popup menus)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WindowManager_invoke_props_dialog_result = {
	{NULL, (PropertyRNA *)&rna_WindowManager_invoke_props_dialog_height,
	-1, "result", 2097163, "result",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_WindowManager_invoke_props_dialog_result_items, 5, 2
};

FunctionRNA rna_WindowManager_invoke_props_dialog_func = {
	{(FunctionRNA *)&rna_WindowManager_invoke_search_popup_func, (FunctionRNA *)&rna_WindowManager_invoke_props_popup_func,
	NULL,
	{(PropertyRNA *)&rna_WindowManager_invoke_props_dialog_operator, (PropertyRNA *)&rna_WindowManager_invoke_props_dialog_result}},
	"invoke_props_dialog", 9, "Operator dialog (non-autoexec popup) invoke",
	WindowManager_invoke_props_dialog_call,
	(PropertyRNA *)&rna_WindowManager_invoke_props_dialog_result
};

PointerPropertyRNA rna_WindowManager_invoke_search_popup_operator = {
	{NULL, NULL,
	-1, "operator", 8388612, "",
	"Operator to call",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Operator
};

FunctionRNA rna_WindowManager_invoke_search_popup_func = {
	{(FunctionRNA *)&rna_WindowManager_invoke_popup_func, (FunctionRNA *)&rna_WindowManager_invoke_props_dialog_func,
	NULL,
	{(PropertyRNA *)&rna_WindowManager_invoke_search_popup_operator, (PropertyRNA *)&rna_WindowManager_invoke_search_popup_operator}},
	"invoke_search_popup", 9, "invoke_search_popup",
	WindowManager_invoke_search_popup_call,
	NULL
};

PointerPropertyRNA rna_WindowManager_invoke_popup_operator = {
	{(PropertyRNA *)&rna_WindowManager_invoke_popup_width, NULL,
	-1, "operator", 8388612, "",
	"Operator to call",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Operator
};

IntPropertyRNA rna_WindowManager_invoke_popup_width = {
	{(PropertyRNA *)&rna_WindowManager_invoke_popup_height, (PropertyRNA *)&rna_WindowManager_invoke_popup_operator,
	-1, "width", 3, "",
	"Width of the popup",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 300, NULL
};

IntPropertyRNA rna_WindowManager_invoke_popup_height = {
	{(PropertyRNA *)&rna_WindowManager_invoke_popup_result, (PropertyRNA *)&rna_WindowManager_invoke_popup_width,
	-1, "height", 3, "",
	"Height of the popup",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 20, NULL
};

static EnumPropertyItem rna_WindowManager_invoke_popup_result_items[6] = {
	{1, "RUNNING_MODAL", 0, "Running Modal", "Keep the operator running with blender"},
	{2, "CANCELLED", 0, "Cancelled", "When no action has been taken, operator exits"},
	{4, "FINISHED", 0, "Finished", "When the operator is complete, operator exits"},
	{8, "PASS_THROUGH", 0, "Pass Through", "Do nothing and pass the event on"},
	{32, "INTERFACE", 0, "Interface", "Handled but not executed (popup menus)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WindowManager_invoke_popup_result = {
	{NULL, (PropertyRNA *)&rna_WindowManager_invoke_popup_height,
	-1, "result", 2097163, "result",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_WindowManager_invoke_popup_result_items, 5, 2
};

FunctionRNA rna_WindowManager_invoke_popup_func = {
	{(FunctionRNA *)&rna_WindowManager_invoke_confirm_func, (FunctionRNA *)&rna_WindowManager_invoke_search_popup_func,
	NULL,
	{(PropertyRNA *)&rna_WindowManager_invoke_popup_operator, (PropertyRNA *)&rna_WindowManager_invoke_popup_result}},
	"invoke_popup", 9, "Operator popup invoke",
	WindowManager_invoke_popup_call,
	(PropertyRNA *)&rna_WindowManager_invoke_popup_result
};

PointerPropertyRNA rna_WindowManager_invoke_confirm_operator = {
	{(PropertyRNA *)&rna_WindowManager_invoke_confirm_event, NULL,
	-1, "operator", 8388612, "",
	"Operator to call",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Operator
};

PointerPropertyRNA rna_WindowManager_invoke_confirm_event = {
	{(PropertyRNA *)&rna_WindowManager_invoke_confirm_result, (PropertyRNA *)&rna_WindowManager_invoke_confirm_operator,
	-1, "event", 8388612, "",
	"Event",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Event
};

static EnumPropertyItem rna_WindowManager_invoke_confirm_result_items[6] = {
	{1, "RUNNING_MODAL", 0, "Running Modal", "Keep the operator running with blender"},
	{2, "CANCELLED", 0, "Cancelled", "When no action has been taken, operator exits"},
	{4, "FINISHED", 0, "Finished", "When the operator is complete, operator exits"},
	{8, "PASS_THROUGH", 0, "Pass Through", "Do nothing and pass the event on"},
	{32, "INTERFACE", 0, "Interface", "Handled but not executed (popup menus)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WindowManager_invoke_confirm_result = {
	{NULL, (PropertyRNA *)&rna_WindowManager_invoke_confirm_event,
	-1, "result", 2097163, "result",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_WindowManager_invoke_confirm_result_items, 5, 2
};

FunctionRNA rna_WindowManager_invoke_confirm_func = {
	{(FunctionRNA *)&rna_WindowManager_pupmenu_begin__internal_func, (FunctionRNA *)&rna_WindowManager_invoke_popup_func,
	NULL,
	{(PropertyRNA *)&rna_WindowManager_invoke_confirm_operator, (PropertyRNA *)&rna_WindowManager_invoke_confirm_result}},
	"invoke_confirm", 9, "Operator confirmation",
	WindowManager_invoke_confirm_call,
	(PropertyRNA *)&rna_WindowManager_invoke_confirm_result
};

StringPropertyRNA rna_WindowManager_pupmenu_begin__internal_title = {
	{(PropertyRNA *)&rna_WindowManager_pupmenu_begin__internal_icon, NULL,
	-1, "title", 262149, "",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

static EnumPropertyItem rna_WindowManager_pupmenu_begin__internal_icon_items[543] = {
	{0, "NONE", 0, "NONE", ""},
	{1, "QUESTION", 0, "QUESTION", ""},
	{2, "ERROR", 0, "ERROR", ""},
	{3, "CANCEL", 0, "CANCEL", ""},
	{4, "TRIA_RIGHT", 0, "TRIA_RIGHT", ""},
	{5, "TRIA_DOWN", 0, "TRIA_DOWN", ""},
	{6, "TRIA_LEFT", 0, "TRIA_LEFT", ""},
	{7, "TRIA_UP", 0, "TRIA_UP", ""},
	{8, "ARROW_LEFTRIGHT", 0, "ARROW_LEFTRIGHT", ""},
	{9, "PLUS", 0, "PLUS", ""},
	{10, "DISCLOSURE_TRI_DOWN", 0, "DISCLOSURE_TRI_DOWN", ""},
	{11, "DISCLOSURE_TRI_RIGHT", 0, "DISCLOSURE_TRI_RIGHT", ""},
	{12, "RADIOBUT_OFF", 0, "RADIOBUT_OFF", ""},
	{13, "RADIOBUT_ON", 0, "RADIOBUT_ON", ""},
	{14, "MENU_PANEL", 0, "MENU_PANEL", ""},
	{15, "BLENDER", 0, "BLENDER", ""},
	{16, "GRIP", 0, "GRIP", ""},
	{17, "DOT", 0, "DOT", ""},
	{18, "COLLAPSEMENU", 0, "COLLAPSEMENU", ""},
	{19, "X", 0, "X", ""},
	{21, "GO_LEFT", 0, "GO_LEFT", ""},
	{22, "PLUG", 0, "PLUG", ""},
	{23, "UI", 0, "UI", ""},
	{24, "NODE", 0, "NODE", ""},
	{25, "NODE_SEL", 0, "NODE_SEL", ""},
	{26, "FULLSCREEN", 0, "FULLSCREEN", ""},
	{27, "SPLITSCREEN", 0, "SPLITSCREEN", ""},
	{28, "RIGHTARROW_THIN", 0, "RIGHTARROW_THIN", ""},
	{29, "BORDERMOVE", 0, "BORDERMOVE", ""},
	{30, "VIEWZOOM", 0, "VIEWZOOM", ""},
	{31, "ZOOMIN", 0, "ZOOMIN", ""},
	{32, "ZOOMOUT", 0, "ZOOMOUT", ""},
	{33, "PANEL_CLOSE", 0, "PANEL_CLOSE", ""},
	{34, "COPY_ID", 0, "COPY_ID", ""},
	{35, "EYEDROPPER", 0, "EYEDROPPER", ""},
	{36, "LINK_AREA", 0, "LINK_AREA", ""},
	{37, "AUTO", 0, "AUTO", ""},
	{38, "CHECKBOX_DEHLT", 0, "CHECKBOX_DEHLT", ""},
	{39, "CHECKBOX_HLT", 0, "CHECKBOX_HLT", ""},
	{40, "UNLOCKED", 0, "UNLOCKED", ""},
	{41, "LOCKED", 0, "LOCKED", ""},
	{42, "UNPINNED", 0, "UNPINNED", ""},
	{43, "PINNED", 0, "PINNED", ""},
	{44, "SCREEN_BACK", 0, "SCREEN_BACK", ""},
	{45, "RIGHTARROW", 0, "RIGHTARROW", ""},
	{46, "DOWNARROW_HLT", 0, "DOWNARROW_HLT", ""},
	{47, "DOTSUP", 0, "DOTSUP", ""},
	{48, "DOTSDOWN", 0, "DOTSDOWN", ""},
	{49, "LINK", 0, "LINK", ""},
	{50, "INLINK", 0, "INLINK", ""},
	{51, "PLUGIN", 0, "PLUGIN", ""},
	{52, "HELP", 0, "HELP", ""},
	{53, "GHOST_ENABLED", 0, "GHOST_ENABLED", ""},
	{54, "COLOR", 0, "COLOR", ""},
	{55, "LINKED", 0, "LINKED", ""},
	{56, "UNLINKED", 0, "UNLINKED", ""},
	{57, "HAND", 0, "HAND", ""},
	{58, "ZOOM_ALL", 0, "ZOOM_ALL", ""},
	{59, "ZOOM_SELECTED", 0, "ZOOM_SELECTED", ""},
	{60, "ZOOM_PREVIOUS", 0, "ZOOM_PREVIOUS", ""},
	{61, "ZOOM_IN", 0, "ZOOM_IN", ""},
	{62, "ZOOM_OUT", 0, "ZOOM_OUT", ""},
	{63, "RENDER_REGION", 0, "RENDER_REGION", ""},
	{64, "BORDER_RECT", 0, "BORDER_RECT", ""},
	{65, "BORDER_LASSO", 0, "BORDER_LASSO", ""},
	{66, "FREEZE", 0, "FREEZE", ""},
	{67, "STYLUS_PRESSURE", 0, "STYLUS_PRESSURE", ""},
	{68, "GHOST_DISABLED", 0, "GHOST_DISABLED", ""},
	{69, "NEW", 0, "NEW", ""},
	{70, "FILE_TICK", 0, "FILE_TICK", ""},
	{71, "QUIT", 0, "QUIT", ""},
	{72, "URL", 0, "URL", ""},
	{73, "RECOVER_LAST", 0, "RECOVER_LAST", ""},
	{75, "FULLSCREEN_ENTER", 0, "FULLSCREEN_ENTER", ""},
	{76, "FULLSCREEN_EXIT", 0, "FULLSCREEN_EXIT", ""},
	{77, "BLANK1", 0, "BLANK1", ""},
	{78, "LAMP", 0, "LAMP", ""},
	{79, "MATERIAL", 0, "MATERIAL", ""},
	{80, "TEXTURE", 0, "TEXTURE", ""},
	{81, "ANIM", 0, "ANIM", ""},
	{82, "WORLD", 0, "WORLD", ""},
	{83, "SCENE", 0, "SCENE", ""},
	{84, "EDIT", 0, "EDIT", ""},
	{85, "GAME", 0, "GAME", ""},
	{86, "RADIO", 0, "RADIO", ""},
	{87, "SCRIPT", 0, "SCRIPT", ""},
	{88, "PARTICLES", 0, "PARTICLES", ""},
	{89, "PHYSICS", 0, "PHYSICS", ""},
	{90, "SPEAKER", 0, "SPEAKER", ""},
	{91, "TEXTURE_SHADED", 0, "TEXTURE_SHADED", ""},
	{104, "VIEW3D", 0, "VIEW3D", ""},
	{105, "IPO", 0, "IPO", ""},
	{106, "OOPS", 0, "OOPS", ""},
	{107, "BUTS", 0, "BUTS", ""},
	{108, "FILESEL", 0, "FILESEL", ""},
	{109, "IMAGE_COL", 0, "IMAGE_COL", ""},
	{110, "INFO", 0, "INFO", ""},
	{111, "SEQUENCE", 0, "SEQUENCE", ""},
	{112, "TEXT", 0, "TEXT", ""},
	{113, "IMASEL", 0, "IMASEL", ""},
	{114, "SOUND", 0, "SOUND", ""},
	{115, "ACTION", 0, "ACTION", ""},
	{116, "NLA", 0, "NLA", ""},
	{117, "SCRIPTWIN", 0, "SCRIPTWIN", ""},
	{118, "TIME", 0, "TIME", ""},
	{119, "NODETREE", 0, "NODETREE", ""},
	{120, "LOGIC", 0, "LOGIC", ""},
	{121, "CONSOLE", 0, "CONSOLE", ""},
	{122, "PREFERENCES", 0, "PREFERENCES", ""},
	{123, "CLIP", 0, "CLIP", ""},
	{124, "ASSET_MANAGER", 0, "ASSET_MANAGER", ""},
	{130, "OBJECT_DATAMODE", 0, "OBJECT_DATAMODE", ""},
	{131, "EDITMODE_HLT", 0, "EDITMODE_HLT", ""},
	{132, "FACESEL_HLT", 0, "FACESEL_HLT", ""},
	{133, "VPAINT_HLT", 0, "VPAINT_HLT", ""},
	{134, "TPAINT_HLT", 0, "TPAINT_HLT", ""},
	{135, "WPAINT_HLT", 0, "WPAINT_HLT", ""},
	{136, "SCULPTMODE_HLT", 0, "SCULPTMODE_HLT", ""},
	{137, "POSE_HLT", 0, "POSE_HLT", ""},
	{138, "PARTICLEMODE", 0, "PARTICLEMODE", ""},
	{139, "LIGHTPAINT", 0, "LIGHTPAINT", ""},
	{156, "SCENE_DATA", 0, "SCENE_DATA", ""},
	{157, "RENDERLAYERS", 0, "RENDERLAYERS", ""},
	{158, "WORLD_DATA", 0, "WORLD_DATA", ""},
	{159, "OBJECT_DATA", 0, "OBJECT_DATA", ""},
	{160, "MESH_DATA", 0, "MESH_DATA", ""},
	{161, "CURVE_DATA", 0, "CURVE_DATA", ""},
	{162, "META_DATA", 0, "META_DATA", ""},
	{163, "LATTICE_DATA", 0, "LATTICE_DATA", ""},
	{164, "LAMP_DATA", 0, "LAMP_DATA", ""},
	{165, "MATERIAL_DATA", 0, "MATERIAL_DATA", ""},
	{166, "TEXTURE_DATA", 0, "TEXTURE_DATA", ""},
	{167, "ANIM_DATA", 0, "ANIM_DATA", ""},
	{168, "CAMERA_DATA", 0, "CAMERA_DATA", ""},
	{169, "PARTICLE_DATA", 0, "PARTICLE_DATA", ""},
	{170, "LIBRARY_DATA_DIRECT", 0, "LIBRARY_DATA_DIRECT", ""},
	{171, "GROUP", 0, "GROUP", ""},
	{172, "ARMATURE_DATA", 0, "ARMATURE_DATA", ""},
	{173, "POSE_DATA", 0, "POSE_DATA", ""},
	{174, "BONE_DATA", 0, "BONE_DATA", ""},
	{175, "CONSTRAINT", 0, "CONSTRAINT", ""},
	{176, "SHAPEKEY_DATA", 0, "SHAPEKEY_DATA", ""},
	{177, "CONSTRAINT_BONE", 0, "CONSTRAINT_BONE", ""},
	{178, "CAMERA_STEREO", 0, "CAMERA_STEREO", ""},
	{179, "PACKAGE", 0, "PACKAGE", ""},
	{180, "UGLYPACKAGE", 0, "UGLYPACKAGE", ""},
	{182, "BRUSH_DATA", 0, "BRUSH_DATA", ""},
	{183, "IMAGE_DATA", 0, "IMAGE_DATA", ""},
	{184, "FILE", 0, "FILE", ""},
	{185, "FCURVE", 0, "FCURVE", ""},
	{186, "FONT_DATA", 0, "FONT_DATA", ""},
	{187, "RENDER_RESULT", 0, "RENDER_RESULT", ""},
	{188, "SURFACE_DATA", 0, "SURFACE_DATA", ""},
	{189, "EMPTY_DATA", 0, "EMPTY_DATA", ""},
	{190, "SETTINGS", 0, "SETTINGS", ""},
	{191, "RENDER_ANIMATION", 0, "RENDER_ANIMATION", ""},
	{192, "RENDER_STILL", 0, "RENDER_STILL", ""},
	{194, "BOIDS", 0, "BOIDS", ""},
	{195, "STRANDS", 0, "STRANDS", ""},
	{196, "LIBRARY_DATA_INDIRECT", 0, "LIBRARY_DATA_INDIRECT", ""},
	{197, "GREASEPENCIL", 0, "GREASEPENCIL", ""},
	{198, "LINE_DATA", 0, "LINE_DATA", ""},
	{200, "GROUP_BONE", 0, "GROUP_BONE", ""},
	{201, "GROUP_VERTEX", 0, "GROUP_VERTEX", ""},
	{202, "GROUP_VCOL", 0, "GROUP_VCOL", ""},
	{203, "GROUP_UVS", 0, "GROUP_UVS", ""},
	{206, "RNA", 0, "RNA", ""},
	{207, "RNA_ADD", 0, "RNA_ADD", ""},
	{234, "OUTLINER_OB_EMPTY", 0, "OUTLINER_OB_EMPTY", ""},
	{235, "OUTLINER_OB_MESH", 0, "OUTLINER_OB_MESH", ""},
	{236, "OUTLINER_OB_CURVE", 0, "OUTLINER_OB_CURVE", ""},
	{237, "OUTLINER_OB_LATTICE", 0, "OUTLINER_OB_LATTICE", ""},
	{238, "OUTLINER_OB_META", 0, "OUTLINER_OB_META", ""},
	{239, "OUTLINER_OB_LAMP", 0, "OUTLINER_OB_LAMP", ""},
	{240, "OUTLINER_OB_CAMERA", 0, "OUTLINER_OB_CAMERA", ""},
	{241, "OUTLINER_OB_ARMATURE", 0, "OUTLINER_OB_ARMATURE", ""},
	{242, "OUTLINER_OB_FONT", 0, "OUTLINER_OB_FONT", ""},
	{243, "OUTLINER_OB_SURFACE", 0, "OUTLINER_OB_SURFACE", ""},
	{244, "OUTLINER_OB_SPEAKER", 0, "OUTLINER_OB_SPEAKER", ""},
	{253, "RESTRICT_VIEW_OFF", 0, "RESTRICT_VIEW_OFF", ""},
	{254, "RESTRICT_VIEW_ON", 0, "RESTRICT_VIEW_ON", ""},
	{255, "RESTRICT_SELECT_OFF", 0, "RESTRICT_SELECT_OFF", ""},
	{256, "RESTRICT_SELECT_ON", 0, "RESTRICT_SELECT_ON", ""},
	{257, "RESTRICT_RENDER_OFF", 0, "RESTRICT_RENDER_OFF", ""},
	{258, "RESTRICT_RENDER_ON", 0, "RESTRICT_RENDER_ON", ""},
	{260, "OUTLINER_DATA_EMPTY", 0, "OUTLINER_DATA_EMPTY", ""},
	{261, "OUTLINER_DATA_MESH", 0, "OUTLINER_DATA_MESH", ""},
	{262, "OUTLINER_DATA_CURVE", 0, "OUTLINER_DATA_CURVE", ""},
	{263, "OUTLINER_DATA_LATTICE", 0, "OUTLINER_DATA_LATTICE", ""},
	{264, "OUTLINER_DATA_META", 0, "OUTLINER_DATA_META", ""},
	{265, "OUTLINER_DATA_LAMP", 0, "OUTLINER_DATA_LAMP", ""},
	{266, "OUTLINER_DATA_CAMERA", 0, "OUTLINER_DATA_CAMERA", ""},
	{267, "OUTLINER_DATA_ARMATURE", 0, "OUTLINER_DATA_ARMATURE", ""},
	{268, "OUTLINER_DATA_FONT", 0, "OUTLINER_DATA_FONT", ""},
	{269, "OUTLINER_DATA_SURFACE", 0, "OUTLINER_DATA_SURFACE", ""},
	{270, "OUTLINER_DATA_SPEAKER", 0, "OUTLINER_DATA_SPEAKER", ""},
	{271, "OUTLINER_DATA_POSE", 0, "OUTLINER_DATA_POSE", ""},
	{286, "MESH_PLANE", 0, "MESH_PLANE", ""},
	{287, "MESH_CUBE", 0, "MESH_CUBE", ""},
	{288, "MESH_CIRCLE", 0, "MESH_CIRCLE", ""},
	{289, "MESH_UVSPHERE", 0, "MESH_UVSPHERE", ""},
	{290, "MESH_ICOSPHERE", 0, "MESH_ICOSPHERE", ""},
	{291, "MESH_GRID", 0, "MESH_GRID", ""},
	{292, "MESH_MONKEY", 0, "MESH_MONKEY", ""},
	{293, "MESH_CYLINDER", 0, "MESH_CYLINDER", ""},
	{294, "MESH_TORUS", 0, "MESH_TORUS", ""},
	{295, "MESH_CONE", 0, "MESH_CONE", ""},
	{298, "LAMP_POINT", 0, "LAMP_POINT", ""},
	{299, "LAMP_SUN", 0, "LAMP_SUN", ""},
	{300, "LAMP_SPOT", 0, "LAMP_SPOT", ""},
	{301, "LAMP_HEMI", 0, "LAMP_HEMI", ""},
	{302, "LAMP_AREA", 0, "LAMP_AREA", ""},
	{305, "META_EMPTY", 0, "META_EMPTY", ""},
	{306, "META_PLANE", 0, "META_PLANE", ""},
	{307, "META_CUBE", 0, "META_CUBE", ""},
	{308, "META_BALL", 0, "META_BALL", ""},
	{309, "META_ELLIPSOID", 0, "META_ELLIPSOID", ""},
	{310, "META_CAPSULE", 0, "META_CAPSULE", ""},
	{312, "SURFACE_NCURVE", 0, "SURFACE_NCURVE", ""},
	{313, "SURFACE_NCIRCLE", 0, "SURFACE_NCIRCLE", ""},
	{314, "SURFACE_NSURFACE", 0, "SURFACE_NSURFACE", ""},
	{315, "SURFACE_NCYLINDER", 0, "SURFACE_NCYLINDER", ""},
	{316, "SURFACE_NSPHERE", 0, "SURFACE_NSPHERE", ""},
	{317, "SURFACE_NTORUS", 0, "SURFACE_NTORUS", ""},
	{321, "CURVE_BEZCURVE", 0, "CURVE_BEZCURVE", ""},
	{322, "CURVE_BEZCIRCLE", 0, "CURVE_BEZCIRCLE", ""},
	{323, "CURVE_NCURVE", 0, "CURVE_NCURVE", ""},
	{324, "CURVE_NCIRCLE", 0, "CURVE_NCIRCLE", ""},
	{325, "CURVE_PATH", 0, "CURVE_PATH", ""},
	{331, "COLOR_RED", 0, "COLOR_RED", ""},
	{332, "COLOR_GREEN", 0, "COLOR_GREEN", ""},
	{333, "COLOR_BLUE", 0, "COLOR_BLUE", ""},
	{334, "TRIA_RIGHT_BAR", 0, "TRIA_RIGHT_BAR", ""},
	{335, "TRIA_DOWN_BAR", 0, "TRIA_DOWN_BAR", ""},
	{336, "TRIA_LEFT_BAR", 0, "TRIA_LEFT_BAR", ""},
	{337, "TRIA_UP_BAR", 0, "TRIA_UP_BAR", ""},
	{338, "FORCE_FORCE", 0, "FORCE_FORCE", ""},
	{339, "FORCE_WIND", 0, "FORCE_WIND", ""},
	{340, "FORCE_VORTEX", 0, "FORCE_VORTEX", ""},
	{341, "FORCE_MAGNETIC", 0, "FORCE_MAGNETIC", ""},
	{342, "FORCE_HARMONIC", 0, "FORCE_HARMONIC", ""},
	{343, "FORCE_CHARGE", 0, "FORCE_CHARGE", ""},
	{344, "FORCE_LENNARDJONES", 0, "FORCE_LENNARDJONES", ""},
	{345, "FORCE_TEXTURE", 0, "FORCE_TEXTURE", ""},
	{346, "FORCE_CURVE", 0, "FORCE_CURVE", ""},
	{347, "FORCE_BOID", 0, "FORCE_BOID", ""},
	{348, "FORCE_TURBULENCE", 0, "FORCE_TURBULENCE", ""},
	{349, "FORCE_DRAG", 0, "FORCE_DRAG", ""},
	{350, "FORCE_SMOKEFLOW", 0, "FORCE_SMOKEFLOW", ""},
	{442, "MODIFIER", 0, "MODIFIER", ""},
	{443, "MOD_WAVE", 0, "MOD_WAVE", ""},
	{444, "MOD_BUILD", 0, "MOD_BUILD", ""},
	{445, "MOD_DECIM", 0, "MOD_DECIM", ""},
	{446, "MOD_MIRROR", 0, "MOD_MIRROR", ""},
	{447, "MOD_SOFT", 0, "MOD_SOFT", ""},
	{448, "MOD_SUBSURF", 0, "MOD_SUBSURF", ""},
	{449, "HOOK", 0, "HOOK", ""},
	{450, "MOD_PHYSICS", 0, "MOD_PHYSICS", ""},
	{451, "MOD_PARTICLES", 0, "MOD_PARTICLES", ""},
	{452, "MOD_BOOLEAN", 0, "MOD_BOOLEAN", ""},
	{453, "MOD_EDGESPLIT", 0, "MOD_EDGESPLIT", ""},
	{454, "MOD_ARRAY", 0, "MOD_ARRAY", ""},
	{455, "MOD_UVPROJECT", 0, "MOD_UVPROJECT", ""},
	{456, "MOD_DISPLACE", 0, "MOD_DISPLACE", ""},
	{457, "MOD_CURVE", 0, "MOD_CURVE", ""},
	{458, "MOD_LATTICE", 0, "MOD_LATTICE", ""},
	{459, "CONSTRAINT_DATA", 0, "CONSTRAINT_DATA", ""},
	{460, "MOD_ARMATURE", 0, "MOD_ARMATURE", ""},
	{461, "MOD_SHRINKWRAP", 0, "MOD_SHRINKWRAP", ""},
	{462, "MOD_CAST", 0, "MOD_CAST", ""},
	{463, "MOD_MESHDEFORM", 0, "MOD_MESHDEFORM", ""},
	{464, "MOD_BEVEL", 0, "MOD_BEVEL", ""},
	{465, "MOD_SMOOTH", 0, "MOD_SMOOTH", ""},
	{466, "MOD_SIMPLEDEFORM", 0, "MOD_SIMPLEDEFORM", ""},
	{467, "MOD_MASK", 0, "MOD_MASK", ""},
	{468, "MOD_CLOTH", 0, "MOD_CLOTH", ""},
	{469, "MOD_EXPLODE", 0, "MOD_EXPLODE", ""},
	{470, "MOD_FLUIDSIM", 0, "MOD_FLUIDSIM", ""},
	{471, "MOD_MULTIRES", 0, "MOD_MULTIRES", ""},
	{472, "MOD_SMOKE", 0, "MOD_SMOKE", ""},
	{473, "MOD_SOLIDIFY", 0, "MOD_SOLIDIFY", ""},
	{474, "MOD_SCREW", 0, "MOD_SCREW", ""},
	{475, "MOD_VERTEX_WEIGHT", 0, "MOD_VERTEX_WEIGHT", ""},
	{476, "MOD_DYNAMICPAINT", 0, "MOD_DYNAMICPAINT", ""},
	{477, "MOD_REMESH", 0, "MOD_REMESH", ""},
	{478, "MOD_OCEAN", 0, "MOD_OCEAN", ""},
	{479, "MOD_WARP", 0, "MOD_WARP", ""},
	{480, "MOD_SKIN", 0, "MOD_SKIN", ""},
	{481, "MOD_TRIANGULATE", 0, "MOD_TRIANGULATE", ""},
	{482, "MOD_WIREFRAME", 0, "MOD_WIREFRAME", ""},
	{494, "REC", 0, "REC", ""},
	{495, "PLAY", 0, "PLAY", ""},
	{496, "FF", 0, "FF", ""},
	{497, "REW", 0, "REW", ""},
	{498, "PAUSE", 0, "PAUSE", ""},
	{499, "PREV_KEYFRAME", 0, "PREV_KEYFRAME", ""},
	{500, "NEXT_KEYFRAME", 0, "NEXT_KEYFRAME", ""},
	{501, "PLAY_AUDIO", 0, "PLAY_AUDIO", ""},
	{502, "PLAY_REVERSE", 0, "PLAY_REVERSE", ""},
	{503, "PREVIEW_RANGE", 0, "PREVIEW_RANGE", ""},
	{504, "ACTION_TWEAK", 0, "ACTION_TWEAK", ""},
	{505, "PMARKER_ACT", 0, "PMARKER_ACT", ""},
	{506, "PMARKER_SEL", 0, "PMARKER_SEL", ""},
	{507, "PMARKER", 0, "PMARKER", ""},
	{508, "MARKER_HLT", 0, "MARKER_HLT", ""},
	{509, "MARKER", 0, "MARKER", ""},
	{510, "SPACE2", 0, "SPACE2", ""},
	{511, "SPACE3", 0, "SPACE3", ""},
	{512, "KEYINGSET", 0, "KEYINGSET", ""},
	{513, "KEY_DEHLT", 0, "KEY_DEHLT", ""},
	{514, "KEY_HLT", 0, "KEY_HLT", ""},
	{515, "MUTE_IPO_OFF", 0, "MUTE_IPO_OFF", ""},
	{516, "MUTE_IPO_ON", 0, "MUTE_IPO_ON", ""},
	{517, "VISIBLE_IPO_OFF", 0, "VISIBLE_IPO_OFF", ""},
	{518, "VISIBLE_IPO_ON", 0, "VISIBLE_IPO_ON", ""},
	{519, "DRIVER", 0, "DRIVER", ""},
	{520, "SOLO_OFF", 0, "SOLO_OFF", ""},
	{521, "SOLO_ON", 0, "SOLO_ON", ""},
	{522, "FRAME_PREV", 0, "FRAME_PREV", ""},
	{523, "FRAME_NEXT", 0, "FRAME_NEXT", ""},
	{524, "NLA_PUSHDOWN", 0, "NLA_PUSHDOWN", ""},
	{525, "IPO_CONSTANT", 0, "IPO_CONSTANT", ""},
	{526, "IPO_LINEAR", 0, "IPO_LINEAR", ""},
	{527, "IPO_BEZIER", 0, "IPO_BEZIER", ""},
	{528, "IPO_SINE", 0, "IPO_SINE", ""},
	{529, "IPO_QUAD", 0, "IPO_QUAD", ""},
	{530, "IPO_CUBIC", 0, "IPO_CUBIC", ""},
	{531, "IPO_QUART", 0, "IPO_QUART", ""},
	{532, "IPO_QUINT", 0, "IPO_QUINT", ""},
	{533, "IPO_EXPO", 0, "IPO_EXPO", ""},
	{534, "IPO_CIRC", 0, "IPO_CIRC", ""},
	{535, "IPO_BOUNCE", 0, "IPO_BOUNCE", ""},
	{536, "IPO_ELASTIC", 0, "IPO_ELASTIC", ""},
	{537, "IPO_BACK", 0, "IPO_BACK", ""},
	{538, "IPO_EASE_IN", 0, "IPO_EASE_IN", ""},
	{539, "IPO_EASE_OUT", 0, "IPO_EASE_OUT", ""},
	{540, "IPO_EASE_IN_OUT", 0, "IPO_EASE_IN_OUT", ""},
	{546, "VERTEXSEL", 0, "VERTEXSEL", ""},
	{547, "EDGESEL", 0, "EDGESEL", ""},
	{548, "FACESEL", 0, "FACESEL", ""},
	{549, "LOOPSEL", 0, "LOOPSEL", ""},
	{551, "ROTATE", 0, "ROTATE", ""},
	{552, "CURSOR", 0, "CURSOR", ""},
	{553, "ROTATECOLLECTION", 0, "ROTATECOLLECTION", ""},
	{554, "ROTATECENTER", 0, "ROTATECENTER", ""},
	{555, "ROTACTIVE", 0, "ROTACTIVE", ""},
	{556, "ALIGN", 0, "ALIGN", ""},
	{558, "SMOOTHCURVE", 0, "SMOOTHCURVE", ""},
	{559, "SPHERECURVE", 0, "SPHERECURVE", ""},
	{560, "ROOTCURVE", 0, "ROOTCURVE", ""},
	{561, "SHARPCURVE", 0, "SHARPCURVE", ""},
	{562, "LINCURVE", 0, "LINCURVE", ""},
	{563, "NOCURVE", 0, "NOCURVE", ""},
	{564, "RNDCURVE", 0, "RNDCURVE", ""},
	{565, "PROP_OFF", 0, "PROP_OFF", ""},
	{566, "PROP_ON", 0, "PROP_ON", ""},
	{567, "PROP_CON", 0, "PROP_CON", ""},
	{568, "SCULPT_DYNTOPO", 0, "SCULPT_DYNTOPO", ""},
	{569, "PARTICLE_POINT", 0, "PARTICLE_POINT", ""},
	{570, "PARTICLE_TIP", 0, "PARTICLE_TIP", ""},
	{571, "PARTICLE_PATH", 0, "PARTICLE_PATH", ""},
	{572, "MAN_TRANS", 0, "MAN_TRANS", ""},
	{573, "MAN_ROT", 0, "MAN_ROT", ""},
	{574, "MAN_SCALE", 0, "MAN_SCALE", ""},
	{575, "MANIPUL", 0, "MANIPUL", ""},
	{576, "SNAP_OFF", 0, "SNAP_OFF", ""},
	{577, "SNAP_ON", 0, "SNAP_ON", ""},
	{578, "SNAP_NORMAL", 0, "SNAP_NORMAL", ""},
	{579, "SNAP_INCREMENT", 0, "SNAP_INCREMENT", ""},
	{580, "SNAP_VERTEX", 0, "SNAP_VERTEX", ""},
	{581, "SNAP_EDGE", 0, "SNAP_EDGE", ""},
	{582, "SNAP_FACE", 0, "SNAP_FACE", ""},
	{583, "SNAP_VOLUME", 0, "SNAP_VOLUME", ""},
	{585, "STICKY_UVS_LOC", 0, "STICKY_UVS_LOC", ""},
	{586, "STICKY_UVS_DISABLE", 0, "STICKY_UVS_DISABLE", ""},
	{587, "STICKY_UVS_VERT", 0, "STICKY_UVS_VERT", ""},
	{588, "CLIPUV_DEHLT", 0, "CLIPUV_DEHLT", ""},
	{589, "CLIPUV_HLT", 0, "CLIPUV_HLT", ""},
	{590, "SNAP_PEEL_OBJECT", 0, "SNAP_PEEL_OBJECT", ""},
	{591, "GRID", 0, "GRID", ""},
	{598, "PASTEDOWN", 0, "PASTEDOWN", ""},
	{599, "COPYDOWN", 0, "COPYDOWN", ""},
	{600, "PASTEFLIPUP", 0, "PASTEFLIPUP", ""},
	{601, "PASTEFLIPDOWN", 0, "PASTEFLIPDOWN", ""},
	{606, "SNAP_SURFACE", 0, "SNAP_SURFACE", ""},
	{607, "AUTOMERGE_ON", 0, "AUTOMERGE_ON", ""},
	{608, "AUTOMERGE_OFF", 0, "AUTOMERGE_OFF", ""},
	{609, "RETOPO", 0, "RETOPO", ""},
	{610, "UV_VERTEXSEL", 0, "UV_VERTEXSEL", ""},
	{611, "UV_EDGESEL", 0, "UV_EDGESEL", ""},
	{612, "UV_FACESEL", 0, "UV_FACESEL", ""},
	{613, "UV_ISLANDSEL", 0, "UV_ISLANDSEL", ""},
	{614, "UV_SYNC_SELECT", 0, "UV_SYNC_SELECT", ""},
	{624, "BBOX", 0, "BBOX", ""},
	{625, "WIRE", 0, "WIRE", ""},
	{626, "SOLID", 0, "SOLID", ""},
	{627, "SMOOTH", 0, "SMOOTH", ""},
	{628, "POTATO", 0, "POTATO", ""},
	{630, "ORTHO", 0, "ORTHO", ""},
	{633, "LOCKVIEW_OFF", 0, "LOCKVIEW_OFF", ""},
	{634, "LOCKVIEW_ON", 0, "LOCKVIEW_ON", ""},
	{636, "AXIS_SIDE", 0, "AXIS_SIDE", ""},
	{637, "AXIS_FRONT", 0, "AXIS_FRONT", ""},
	{638, "AXIS_TOP", 0, "AXIS_TOP", ""},
	{639, "NDOF_DOM", 0, "NDOF_DOM", ""},
	{640, "NDOF_TURN", 0, "NDOF_TURN", ""},
	{641, "NDOF_FLY", 0, "NDOF_FLY", ""},
	{642, "NDOF_TRANS", 0, "NDOF_TRANS", ""},
	{643, "LAYER_USED", 0, "LAYER_USED", ""},
	{644, "LAYER_ACTIVE", 0, "LAYER_ACTIVE", ""},
	{676, "SORTALPHA", 0, "SORTALPHA", ""},
	{677, "SORTBYEXT", 0, "SORTBYEXT", ""},
	{678, "SORTTIME", 0, "SORTTIME", ""},
	{679, "SORTSIZE", 0, "SORTSIZE", ""},
	{680, "LONGDISPLAY", 0, "LONGDISPLAY", ""},
	{681, "SHORTDISPLAY", 0, "SHORTDISPLAY", ""},
	{682, "GHOST", 0, "GHOST", ""},
	{683, "IMGDISPLAY", 0, "IMGDISPLAY", ""},
	{684, "SAVE_AS", 0, "SAVE_AS", ""},
	{685, "SAVE_COPY", 0, "SAVE_COPY", ""},
	{686, "BOOKMARKS", 0, "BOOKMARKS", ""},
	{687, "FONTPREVIEW", 0, "FONTPREVIEW", ""},
	{688, "FILTER", 0, "FILTER", ""},
	{689, "NEWFOLDER", 0, "NEWFOLDER", ""},
	{690, "OPEN_RECENT", 0, "OPEN_RECENT", ""},
	{691, "FILE_PARENT", 0, "FILE_PARENT", ""},
	{692, "FILE_REFRESH", 0, "FILE_REFRESH", ""},
	{693, "FILE_FOLDER", 0, "FILE_FOLDER", ""},
	{694, "FILE_BLANK", 0, "FILE_BLANK", ""},
	{695, "FILE_BLEND", 0, "FILE_BLEND", ""},
	{696, "FILE_IMAGE", 0, "FILE_IMAGE", ""},
	{697, "FILE_MOVIE", 0, "FILE_MOVIE", ""},
	{698, "FILE_SCRIPT", 0, "FILE_SCRIPT", ""},
	{699, "FILE_SOUND", 0, "FILE_SOUND", ""},
	{700, "FILE_FONT", 0, "FILE_FONT", ""},
	{701, "FILE_TEXT", 0, "FILE_TEXT", ""},
	{702, "RECOVER_AUTO", 0, "RECOVER_AUTO", ""},
	{703, "SAVE_PREFS", 0, "SAVE_PREFS", ""},
	{704, "LINK_BLEND", 0, "LINK_BLEND", ""},
	{705, "APPEND_BLEND", 0, "APPEND_BLEND", ""},
	{706, "IMPORT", 0, "IMPORT", ""},
	{707, "EXPORT", 0, "EXPORT", ""},
	{708, "EXTERNAL_DATA", 0, "EXTERNAL_DATA", ""},
	{709, "LOAD_FACTORY", 0, "LOAD_FACTORY", ""},
	{715, "LOOP_BACK", 0, "LOOP_BACK", ""},
	{716, "LOOP_FORWARDS", 0, "LOOP_FORWARDS", ""},
	{717, "BACK", 0, "BACK", ""},
	{718, "FORWARD", 0, "FORWARD", ""},
	{726, "FILE_BACKUP", 0, "FILE_BACKUP", ""},
	{727, "DISK_DRIVE", 0, "DISK_DRIVE", ""},
	{728, "MATPLANE", 0, "MATPLANE", ""},
	{729, "MATSPHERE", 0, "MATSPHERE", ""},
	{730, "MATCUBE", 0, "MATCUBE", ""},
	{731, "MONKEY", 0, "MONKEY", ""},
	{732, "HAIR", 0, "HAIR", ""},
	{733, "ALIASED", 0, "ALIASED", ""},
	{734, "ANTIALIASED", 0, "ANTIALIASED", ""},
	{735, "MAT_SPHERE_SKY", 0, "MAT_SPHERE_SKY", ""},
	{740, "WORDWRAP_OFF", 0, "WORDWRAP_OFF", ""},
	{741, "WORDWRAP_ON", 0, "WORDWRAP_ON", ""},
	{742, "SYNTAX_OFF", 0, "SYNTAX_OFF", ""},
	{743, "SYNTAX_ON", 0, "SYNTAX_ON", ""},
	{744, "LINENUMBERS_OFF", 0, "LINENUMBERS_OFF", ""},
	{745, "LINENUMBERS_ON", 0, "LINENUMBERS_ON", ""},
	{746, "SCRIPTPLUGINS", 0, "SCRIPTPLUGINS", ""},
	{754, "SEQ_SEQUENCER", 0, "SEQ_SEQUENCER", ""},
	{755, "SEQ_PREVIEW", 0, "SEQ_PREVIEW", ""},
	{756, "SEQ_LUMA_WAVEFORM", 0, "SEQ_LUMA_WAVEFORM", ""},
	{757, "SEQ_CHROMA_SCOPE", 0, "SEQ_CHROMA_SCOPE", ""},
	{758, "SEQ_HISTOGRAM", 0, "SEQ_HISTOGRAM", ""},
	{759, "SEQ_SPLITVIEW", 0, "SEQ_SPLITVIEW", ""},
	{763, "IMAGE_RGB", 0, "IMAGE_RGB", ""},
	{764, "IMAGE_RGB_ALPHA", 0, "IMAGE_RGB_ALPHA", ""},
	{765, "IMAGE_ALPHA", 0, "IMAGE_ALPHA", ""},
	{766, "IMAGE_ZDEPTH", 0, "IMAGE_ZDEPTH", ""},
	{767, "IMAGEFILE", 0, "IMAGEFILE", ""},
	{780, "BRUSH_ADD", 0, "BRUSH_ADD", ""},
	{781, "BRUSH_BLOB", 0, "BRUSH_BLOB", ""},
	{782, "BRUSH_BLUR", 0, "BRUSH_BLUR", ""},
	{783, "BRUSH_CLAY", 0, "BRUSH_CLAY", ""},
	{784, "BRUSH_CLAY_STRIPS", 0, "BRUSH_CLAY_STRIPS", ""},
	{785, "BRUSH_CLONE", 0, "BRUSH_CLONE", ""},
	{786, "BRUSH_CREASE", 0, "BRUSH_CREASE", ""},
	{787, "BRUSH_DARKEN", 0, "BRUSH_DARKEN", ""},
	{788, "BRUSH_FILL", 0, "BRUSH_FILL", ""},
	{789, "BRUSH_FLATTEN", 0, "BRUSH_FLATTEN", ""},
	{790, "BRUSH_GRAB", 0, "BRUSH_GRAB", ""},
	{791, "BRUSH_INFLATE", 0, "BRUSH_INFLATE", ""},
	{792, "BRUSH_LAYER", 0, "BRUSH_LAYER", ""},
	{793, "BRUSH_LIGHTEN", 0, "BRUSH_LIGHTEN", ""},
	{794, "BRUSH_MASK", 0, "BRUSH_MASK", ""},
	{795, "BRUSH_MIX", 0, "BRUSH_MIX", ""},
	{796, "BRUSH_MULTIPLY", 0, "BRUSH_MULTIPLY", ""},
	{797, "BRUSH_NUDGE", 0, "BRUSH_NUDGE", ""},
	{798, "BRUSH_PINCH", 0, "BRUSH_PINCH", ""},
	{799, "BRUSH_SCRAPE", 0, "BRUSH_SCRAPE", ""},
	{800, "BRUSH_SCULPT_DRAW", 0, "BRUSH_SCULPT_DRAW", ""},
	{801, "BRUSH_SMEAR", 0, "BRUSH_SMEAR", ""},
	{802, "BRUSH_SMOOTH", 0, "BRUSH_SMOOTH", ""},
	{803, "BRUSH_SNAKE_HOOK", 0, "BRUSH_SNAKE_HOOK", ""},
	{804, "BRUSH_SOFTEN", 0, "BRUSH_SOFTEN", ""},
	{805, "BRUSH_SUBTRACT", 0, "BRUSH_SUBTRACT", ""},
	{806, "BRUSH_TEXDRAW", 0, "BRUSH_TEXDRAW", ""},
	{807, "BRUSH_TEXFILL", 0, "BRUSH_TEXFILL", ""},
	{808, "BRUSH_TEXMASK", 0, "BRUSH_TEXMASK", ""},
	{809, "BRUSH_THUMB", 0, "BRUSH_THUMB", ""},
	{810, "BRUSH_ROTATE", 0, "BRUSH_ROTATE", ""},
	{811, "BRUSH_VERTEXDRAW", 0, "BRUSH_VERTEXDRAW", ""},
	{812, "MATCAP_01", 0, "MATCAP_01", ""},
	{813, "MATCAP_02", 0, "MATCAP_02", ""},
	{814, "MATCAP_03", 0, "MATCAP_03", ""},
	{815, "MATCAP_04", 0, "MATCAP_04", ""},
	{816, "MATCAP_05", 0, "MATCAP_05", ""},
	{817, "MATCAP_06", 0, "MATCAP_06", ""},
	{818, "MATCAP_07", 0, "MATCAP_07", ""},
	{819, "MATCAP_08", 0, "MATCAP_08", ""},
	{820, "MATCAP_09", 0, "MATCAP_09", ""},
	{821, "MATCAP_10", 0, "MATCAP_10", ""},
	{822, "MATCAP_11", 0, "MATCAP_11", ""},
	{823, "MATCAP_12", 0, "MATCAP_12", ""},
	{824, "MATCAP_13", 0, "MATCAP_13", ""},
	{825, "MATCAP_14", 0, "MATCAP_14", ""},
	{826, "MATCAP_15", 0, "MATCAP_15", ""},
	{827, "MATCAP_16", 0, "MATCAP_16", ""},
	{828, "MATCAP_17", 0, "MATCAP_17", ""},
	{829, "MATCAP_18", 0, "MATCAP_18", ""},
	{830, "MATCAP_19", 0, "MATCAP_19", ""},
	{831, "MATCAP_20", 0, "MATCAP_20", ""},
	{832, "MATCAP_21", 0, "MATCAP_21", ""},
	{833, "MATCAP_22", 0, "MATCAP_22", ""},
	{834, "MATCAP_23", 0, "MATCAP_23", ""},
	{835, "MATCAP_24", 0, "MATCAP_24", ""},
	{836, "VIEW3D_VEC", 0, "VIEW3D_VEC", ""},
	{837, "EDIT_VEC", 0, "EDIT_VEC", ""},
	{838, "EDITMODE_VEC_DEHLT", 0, "EDITMODE_VEC_DEHLT", ""},
	{839, "EDITMODE_VEC_HLT", 0, "EDITMODE_VEC_HLT", ""},
	{840, "DISCLOSURE_TRI_RIGHT_VEC", 0, "DISCLOSURE_TRI_RIGHT_VEC", ""},
	{841, "DISCLOSURE_TRI_DOWN_VEC", 0, "DISCLOSURE_TRI_DOWN_VEC", ""},
	{842, "MOVE_UP_VEC", 0, "MOVE_UP_VEC", ""},
	{843, "MOVE_DOWN_VEC", 0, "MOVE_DOWN_VEC", ""},
	{844, "X_VEC", 0, "X_VEC", ""},
	{845, "SMALL_TRI_RIGHT_VEC", 0, "SMALL_TRI_RIGHT_VEC", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WindowManager_pupmenu_begin__internal_icon = {
	{(PropertyRNA *)&rna_WindowManager_pupmenu_begin__internal_menu, (PropertyRNA *)&rna_WindowManager_pupmenu_begin__internal_title,
	-1, "icon", 3, "icon",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_WindowManager_pupmenu_begin__internal_icon_items, 542, 0
};

PointerPropertyRNA rna_WindowManager_pupmenu_begin__internal_menu = {
	{NULL, (PropertyRNA *)&rna_WindowManager_pupmenu_begin__internal_icon,
	-1, "menu", 8652808, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_UIPopupMenu
};

FunctionRNA rna_WindowManager_pupmenu_begin__internal_func = {
	{(FunctionRNA *)&rna_WindowManager_pupmenu_end__internal_func, (FunctionRNA *)&rna_WindowManager_invoke_confirm_func,
	NULL,
	{(PropertyRNA *)&rna_WindowManager_pupmenu_begin__internal_title, (PropertyRNA *)&rna_WindowManager_pupmenu_begin__internal_menu}},
	"pupmenu_begin__internal", 9, "pupmenu_begin__internal",
	WindowManager_pupmenu_begin__internal_call,
	(PropertyRNA *)&rna_WindowManager_pupmenu_begin__internal_menu
};

PointerPropertyRNA rna_WindowManager_pupmenu_end__internal_menu = {
	{NULL, NULL,
	-1, "menu", 8652800, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_UIPopupMenu
};

FunctionRNA rna_WindowManager_pupmenu_end__internal_func = {
	{(FunctionRNA *)&rna_WindowManager_piemenu_begin__internal_func, (FunctionRNA *)&rna_WindowManager_pupmenu_begin__internal_func,
	NULL,
	{(PropertyRNA *)&rna_WindowManager_pupmenu_end__internal_menu, (PropertyRNA *)&rna_WindowManager_pupmenu_end__internal_menu}},
	"pupmenu_end__internal", 9, "pupmenu_end__internal",
	WindowManager_pupmenu_end__internal_call,
	NULL
};

StringPropertyRNA rna_WindowManager_piemenu_begin__internal_title = {
	{(PropertyRNA *)&rna_WindowManager_piemenu_begin__internal_icon, NULL,
	-1, "title", 262149, "",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

static EnumPropertyItem rna_WindowManager_piemenu_begin__internal_icon_items[543] = {
	{0, "NONE", 0, "NONE", ""},
	{1, "QUESTION", 0, "QUESTION", ""},
	{2, "ERROR", 0, "ERROR", ""},
	{3, "CANCEL", 0, "CANCEL", ""},
	{4, "TRIA_RIGHT", 0, "TRIA_RIGHT", ""},
	{5, "TRIA_DOWN", 0, "TRIA_DOWN", ""},
	{6, "TRIA_LEFT", 0, "TRIA_LEFT", ""},
	{7, "TRIA_UP", 0, "TRIA_UP", ""},
	{8, "ARROW_LEFTRIGHT", 0, "ARROW_LEFTRIGHT", ""},
	{9, "PLUS", 0, "PLUS", ""},
	{10, "DISCLOSURE_TRI_DOWN", 0, "DISCLOSURE_TRI_DOWN", ""},
	{11, "DISCLOSURE_TRI_RIGHT", 0, "DISCLOSURE_TRI_RIGHT", ""},
	{12, "RADIOBUT_OFF", 0, "RADIOBUT_OFF", ""},
	{13, "RADIOBUT_ON", 0, "RADIOBUT_ON", ""},
	{14, "MENU_PANEL", 0, "MENU_PANEL", ""},
	{15, "BLENDER", 0, "BLENDER", ""},
	{16, "GRIP", 0, "GRIP", ""},
	{17, "DOT", 0, "DOT", ""},
	{18, "COLLAPSEMENU", 0, "COLLAPSEMENU", ""},
	{19, "X", 0, "X", ""},
	{21, "GO_LEFT", 0, "GO_LEFT", ""},
	{22, "PLUG", 0, "PLUG", ""},
	{23, "UI", 0, "UI", ""},
	{24, "NODE", 0, "NODE", ""},
	{25, "NODE_SEL", 0, "NODE_SEL", ""},
	{26, "FULLSCREEN", 0, "FULLSCREEN", ""},
	{27, "SPLITSCREEN", 0, "SPLITSCREEN", ""},
	{28, "RIGHTARROW_THIN", 0, "RIGHTARROW_THIN", ""},
	{29, "BORDERMOVE", 0, "BORDERMOVE", ""},
	{30, "VIEWZOOM", 0, "VIEWZOOM", ""},
	{31, "ZOOMIN", 0, "ZOOMIN", ""},
	{32, "ZOOMOUT", 0, "ZOOMOUT", ""},
	{33, "PANEL_CLOSE", 0, "PANEL_CLOSE", ""},
	{34, "COPY_ID", 0, "COPY_ID", ""},
	{35, "EYEDROPPER", 0, "EYEDROPPER", ""},
	{36, "LINK_AREA", 0, "LINK_AREA", ""},
	{37, "AUTO", 0, "AUTO", ""},
	{38, "CHECKBOX_DEHLT", 0, "CHECKBOX_DEHLT", ""},
	{39, "CHECKBOX_HLT", 0, "CHECKBOX_HLT", ""},
	{40, "UNLOCKED", 0, "UNLOCKED", ""},
	{41, "LOCKED", 0, "LOCKED", ""},
	{42, "UNPINNED", 0, "UNPINNED", ""},
	{43, "PINNED", 0, "PINNED", ""},
	{44, "SCREEN_BACK", 0, "SCREEN_BACK", ""},
	{45, "RIGHTARROW", 0, "RIGHTARROW", ""},
	{46, "DOWNARROW_HLT", 0, "DOWNARROW_HLT", ""},
	{47, "DOTSUP", 0, "DOTSUP", ""},
	{48, "DOTSDOWN", 0, "DOTSDOWN", ""},
	{49, "LINK", 0, "LINK", ""},
	{50, "INLINK", 0, "INLINK", ""},
	{51, "PLUGIN", 0, "PLUGIN", ""},
	{52, "HELP", 0, "HELP", ""},
	{53, "GHOST_ENABLED", 0, "GHOST_ENABLED", ""},
	{54, "COLOR", 0, "COLOR", ""},
	{55, "LINKED", 0, "LINKED", ""},
	{56, "UNLINKED", 0, "UNLINKED", ""},
	{57, "HAND", 0, "HAND", ""},
	{58, "ZOOM_ALL", 0, "ZOOM_ALL", ""},
	{59, "ZOOM_SELECTED", 0, "ZOOM_SELECTED", ""},
	{60, "ZOOM_PREVIOUS", 0, "ZOOM_PREVIOUS", ""},
	{61, "ZOOM_IN", 0, "ZOOM_IN", ""},
	{62, "ZOOM_OUT", 0, "ZOOM_OUT", ""},
	{63, "RENDER_REGION", 0, "RENDER_REGION", ""},
	{64, "BORDER_RECT", 0, "BORDER_RECT", ""},
	{65, "BORDER_LASSO", 0, "BORDER_LASSO", ""},
	{66, "FREEZE", 0, "FREEZE", ""},
	{67, "STYLUS_PRESSURE", 0, "STYLUS_PRESSURE", ""},
	{68, "GHOST_DISABLED", 0, "GHOST_DISABLED", ""},
	{69, "NEW", 0, "NEW", ""},
	{70, "FILE_TICK", 0, "FILE_TICK", ""},
	{71, "QUIT", 0, "QUIT", ""},
	{72, "URL", 0, "URL", ""},
	{73, "RECOVER_LAST", 0, "RECOVER_LAST", ""},
	{75, "FULLSCREEN_ENTER", 0, "FULLSCREEN_ENTER", ""},
	{76, "FULLSCREEN_EXIT", 0, "FULLSCREEN_EXIT", ""},
	{77, "BLANK1", 0, "BLANK1", ""},
	{78, "LAMP", 0, "LAMP", ""},
	{79, "MATERIAL", 0, "MATERIAL", ""},
	{80, "TEXTURE", 0, "TEXTURE", ""},
	{81, "ANIM", 0, "ANIM", ""},
	{82, "WORLD", 0, "WORLD", ""},
	{83, "SCENE", 0, "SCENE", ""},
	{84, "EDIT", 0, "EDIT", ""},
	{85, "GAME", 0, "GAME", ""},
	{86, "RADIO", 0, "RADIO", ""},
	{87, "SCRIPT", 0, "SCRIPT", ""},
	{88, "PARTICLES", 0, "PARTICLES", ""},
	{89, "PHYSICS", 0, "PHYSICS", ""},
	{90, "SPEAKER", 0, "SPEAKER", ""},
	{91, "TEXTURE_SHADED", 0, "TEXTURE_SHADED", ""},
	{104, "VIEW3D", 0, "VIEW3D", ""},
	{105, "IPO", 0, "IPO", ""},
	{106, "OOPS", 0, "OOPS", ""},
	{107, "BUTS", 0, "BUTS", ""},
	{108, "FILESEL", 0, "FILESEL", ""},
	{109, "IMAGE_COL", 0, "IMAGE_COL", ""},
	{110, "INFO", 0, "INFO", ""},
	{111, "SEQUENCE", 0, "SEQUENCE", ""},
	{112, "TEXT", 0, "TEXT", ""},
	{113, "IMASEL", 0, "IMASEL", ""},
	{114, "SOUND", 0, "SOUND", ""},
	{115, "ACTION", 0, "ACTION", ""},
	{116, "NLA", 0, "NLA", ""},
	{117, "SCRIPTWIN", 0, "SCRIPTWIN", ""},
	{118, "TIME", 0, "TIME", ""},
	{119, "NODETREE", 0, "NODETREE", ""},
	{120, "LOGIC", 0, "LOGIC", ""},
	{121, "CONSOLE", 0, "CONSOLE", ""},
	{122, "PREFERENCES", 0, "PREFERENCES", ""},
	{123, "CLIP", 0, "CLIP", ""},
	{124, "ASSET_MANAGER", 0, "ASSET_MANAGER", ""},
	{130, "OBJECT_DATAMODE", 0, "OBJECT_DATAMODE", ""},
	{131, "EDITMODE_HLT", 0, "EDITMODE_HLT", ""},
	{132, "FACESEL_HLT", 0, "FACESEL_HLT", ""},
	{133, "VPAINT_HLT", 0, "VPAINT_HLT", ""},
	{134, "TPAINT_HLT", 0, "TPAINT_HLT", ""},
	{135, "WPAINT_HLT", 0, "WPAINT_HLT", ""},
	{136, "SCULPTMODE_HLT", 0, "SCULPTMODE_HLT", ""},
	{137, "POSE_HLT", 0, "POSE_HLT", ""},
	{138, "PARTICLEMODE", 0, "PARTICLEMODE", ""},
	{139, "LIGHTPAINT", 0, "LIGHTPAINT", ""},
	{156, "SCENE_DATA", 0, "SCENE_DATA", ""},
	{157, "RENDERLAYERS", 0, "RENDERLAYERS", ""},
	{158, "WORLD_DATA", 0, "WORLD_DATA", ""},
	{159, "OBJECT_DATA", 0, "OBJECT_DATA", ""},
	{160, "MESH_DATA", 0, "MESH_DATA", ""},
	{161, "CURVE_DATA", 0, "CURVE_DATA", ""},
	{162, "META_DATA", 0, "META_DATA", ""},
	{163, "LATTICE_DATA", 0, "LATTICE_DATA", ""},
	{164, "LAMP_DATA", 0, "LAMP_DATA", ""},
	{165, "MATERIAL_DATA", 0, "MATERIAL_DATA", ""},
	{166, "TEXTURE_DATA", 0, "TEXTURE_DATA", ""},
	{167, "ANIM_DATA", 0, "ANIM_DATA", ""},
	{168, "CAMERA_DATA", 0, "CAMERA_DATA", ""},
	{169, "PARTICLE_DATA", 0, "PARTICLE_DATA", ""},
	{170, "LIBRARY_DATA_DIRECT", 0, "LIBRARY_DATA_DIRECT", ""},
	{171, "GROUP", 0, "GROUP", ""},
	{172, "ARMATURE_DATA", 0, "ARMATURE_DATA", ""},
	{173, "POSE_DATA", 0, "POSE_DATA", ""},
	{174, "BONE_DATA", 0, "BONE_DATA", ""},
	{175, "CONSTRAINT", 0, "CONSTRAINT", ""},
	{176, "SHAPEKEY_DATA", 0, "SHAPEKEY_DATA", ""},
	{177, "CONSTRAINT_BONE", 0, "CONSTRAINT_BONE", ""},
	{178, "CAMERA_STEREO", 0, "CAMERA_STEREO", ""},
	{179, "PACKAGE", 0, "PACKAGE", ""},
	{180, "UGLYPACKAGE", 0, "UGLYPACKAGE", ""},
	{182, "BRUSH_DATA", 0, "BRUSH_DATA", ""},
	{183, "IMAGE_DATA", 0, "IMAGE_DATA", ""},
	{184, "FILE", 0, "FILE", ""},
	{185, "FCURVE", 0, "FCURVE", ""},
	{186, "FONT_DATA", 0, "FONT_DATA", ""},
	{187, "RENDER_RESULT", 0, "RENDER_RESULT", ""},
	{188, "SURFACE_DATA", 0, "SURFACE_DATA", ""},
	{189, "EMPTY_DATA", 0, "EMPTY_DATA", ""},
	{190, "SETTINGS", 0, "SETTINGS", ""},
	{191, "RENDER_ANIMATION", 0, "RENDER_ANIMATION", ""},
	{192, "RENDER_STILL", 0, "RENDER_STILL", ""},
	{194, "BOIDS", 0, "BOIDS", ""},
	{195, "STRANDS", 0, "STRANDS", ""},
	{196, "LIBRARY_DATA_INDIRECT", 0, "LIBRARY_DATA_INDIRECT", ""},
	{197, "GREASEPENCIL", 0, "GREASEPENCIL", ""},
	{198, "LINE_DATA", 0, "LINE_DATA", ""},
	{200, "GROUP_BONE", 0, "GROUP_BONE", ""},
	{201, "GROUP_VERTEX", 0, "GROUP_VERTEX", ""},
	{202, "GROUP_VCOL", 0, "GROUP_VCOL", ""},
	{203, "GROUP_UVS", 0, "GROUP_UVS", ""},
	{206, "RNA", 0, "RNA", ""},
	{207, "RNA_ADD", 0, "RNA_ADD", ""},
	{234, "OUTLINER_OB_EMPTY", 0, "OUTLINER_OB_EMPTY", ""},
	{235, "OUTLINER_OB_MESH", 0, "OUTLINER_OB_MESH", ""},
	{236, "OUTLINER_OB_CURVE", 0, "OUTLINER_OB_CURVE", ""},
	{237, "OUTLINER_OB_LATTICE", 0, "OUTLINER_OB_LATTICE", ""},
	{238, "OUTLINER_OB_META", 0, "OUTLINER_OB_META", ""},
	{239, "OUTLINER_OB_LAMP", 0, "OUTLINER_OB_LAMP", ""},
	{240, "OUTLINER_OB_CAMERA", 0, "OUTLINER_OB_CAMERA", ""},
	{241, "OUTLINER_OB_ARMATURE", 0, "OUTLINER_OB_ARMATURE", ""},
	{242, "OUTLINER_OB_FONT", 0, "OUTLINER_OB_FONT", ""},
	{243, "OUTLINER_OB_SURFACE", 0, "OUTLINER_OB_SURFACE", ""},
	{244, "OUTLINER_OB_SPEAKER", 0, "OUTLINER_OB_SPEAKER", ""},
	{253, "RESTRICT_VIEW_OFF", 0, "RESTRICT_VIEW_OFF", ""},
	{254, "RESTRICT_VIEW_ON", 0, "RESTRICT_VIEW_ON", ""},
	{255, "RESTRICT_SELECT_OFF", 0, "RESTRICT_SELECT_OFF", ""},
	{256, "RESTRICT_SELECT_ON", 0, "RESTRICT_SELECT_ON", ""},
	{257, "RESTRICT_RENDER_OFF", 0, "RESTRICT_RENDER_OFF", ""},
	{258, "RESTRICT_RENDER_ON", 0, "RESTRICT_RENDER_ON", ""},
	{260, "OUTLINER_DATA_EMPTY", 0, "OUTLINER_DATA_EMPTY", ""},
	{261, "OUTLINER_DATA_MESH", 0, "OUTLINER_DATA_MESH", ""},
	{262, "OUTLINER_DATA_CURVE", 0, "OUTLINER_DATA_CURVE", ""},
	{263, "OUTLINER_DATA_LATTICE", 0, "OUTLINER_DATA_LATTICE", ""},
	{264, "OUTLINER_DATA_META", 0, "OUTLINER_DATA_META", ""},
	{265, "OUTLINER_DATA_LAMP", 0, "OUTLINER_DATA_LAMP", ""},
	{266, "OUTLINER_DATA_CAMERA", 0, "OUTLINER_DATA_CAMERA", ""},
	{267, "OUTLINER_DATA_ARMATURE", 0, "OUTLINER_DATA_ARMATURE", ""},
	{268, "OUTLINER_DATA_FONT", 0, "OUTLINER_DATA_FONT", ""},
	{269, "OUTLINER_DATA_SURFACE", 0, "OUTLINER_DATA_SURFACE", ""},
	{270, "OUTLINER_DATA_SPEAKER", 0, "OUTLINER_DATA_SPEAKER", ""},
	{271, "OUTLINER_DATA_POSE", 0, "OUTLINER_DATA_POSE", ""},
	{286, "MESH_PLANE", 0, "MESH_PLANE", ""},
	{287, "MESH_CUBE", 0, "MESH_CUBE", ""},
	{288, "MESH_CIRCLE", 0, "MESH_CIRCLE", ""},
	{289, "MESH_UVSPHERE", 0, "MESH_UVSPHERE", ""},
	{290, "MESH_ICOSPHERE", 0, "MESH_ICOSPHERE", ""},
	{291, "MESH_GRID", 0, "MESH_GRID", ""},
	{292, "MESH_MONKEY", 0, "MESH_MONKEY", ""},
	{293, "MESH_CYLINDER", 0, "MESH_CYLINDER", ""},
	{294, "MESH_TORUS", 0, "MESH_TORUS", ""},
	{295, "MESH_CONE", 0, "MESH_CONE", ""},
	{298, "LAMP_POINT", 0, "LAMP_POINT", ""},
	{299, "LAMP_SUN", 0, "LAMP_SUN", ""},
	{300, "LAMP_SPOT", 0, "LAMP_SPOT", ""},
	{301, "LAMP_HEMI", 0, "LAMP_HEMI", ""},
	{302, "LAMP_AREA", 0, "LAMP_AREA", ""},
	{305, "META_EMPTY", 0, "META_EMPTY", ""},
	{306, "META_PLANE", 0, "META_PLANE", ""},
	{307, "META_CUBE", 0, "META_CUBE", ""},
	{308, "META_BALL", 0, "META_BALL", ""},
	{309, "META_ELLIPSOID", 0, "META_ELLIPSOID", ""},
	{310, "META_CAPSULE", 0, "META_CAPSULE", ""},
	{312, "SURFACE_NCURVE", 0, "SURFACE_NCURVE", ""},
	{313, "SURFACE_NCIRCLE", 0, "SURFACE_NCIRCLE", ""},
	{314, "SURFACE_NSURFACE", 0, "SURFACE_NSURFACE", ""},
	{315, "SURFACE_NCYLINDER", 0, "SURFACE_NCYLINDER", ""},
	{316, "SURFACE_NSPHERE", 0, "SURFACE_NSPHERE", ""},
	{317, "SURFACE_NTORUS", 0, "SURFACE_NTORUS", ""},
	{321, "CURVE_BEZCURVE", 0, "CURVE_BEZCURVE", ""},
	{322, "CURVE_BEZCIRCLE", 0, "CURVE_BEZCIRCLE", ""},
	{323, "CURVE_NCURVE", 0, "CURVE_NCURVE", ""},
	{324, "CURVE_NCIRCLE", 0, "CURVE_NCIRCLE", ""},
	{325, "CURVE_PATH", 0, "CURVE_PATH", ""},
	{331, "COLOR_RED", 0, "COLOR_RED", ""},
	{332, "COLOR_GREEN", 0, "COLOR_GREEN", ""},
	{333, "COLOR_BLUE", 0, "COLOR_BLUE", ""},
	{334, "TRIA_RIGHT_BAR", 0, "TRIA_RIGHT_BAR", ""},
	{335, "TRIA_DOWN_BAR", 0, "TRIA_DOWN_BAR", ""},
	{336, "TRIA_LEFT_BAR", 0, "TRIA_LEFT_BAR", ""},
	{337, "TRIA_UP_BAR", 0, "TRIA_UP_BAR", ""},
	{338, "FORCE_FORCE", 0, "FORCE_FORCE", ""},
	{339, "FORCE_WIND", 0, "FORCE_WIND", ""},
	{340, "FORCE_VORTEX", 0, "FORCE_VORTEX", ""},
	{341, "FORCE_MAGNETIC", 0, "FORCE_MAGNETIC", ""},
	{342, "FORCE_HARMONIC", 0, "FORCE_HARMONIC", ""},
	{343, "FORCE_CHARGE", 0, "FORCE_CHARGE", ""},
	{344, "FORCE_LENNARDJONES", 0, "FORCE_LENNARDJONES", ""},
	{345, "FORCE_TEXTURE", 0, "FORCE_TEXTURE", ""},
	{346, "FORCE_CURVE", 0, "FORCE_CURVE", ""},
	{347, "FORCE_BOID", 0, "FORCE_BOID", ""},
	{348, "FORCE_TURBULENCE", 0, "FORCE_TURBULENCE", ""},
	{349, "FORCE_DRAG", 0, "FORCE_DRAG", ""},
	{350, "FORCE_SMOKEFLOW", 0, "FORCE_SMOKEFLOW", ""},
	{442, "MODIFIER", 0, "MODIFIER", ""},
	{443, "MOD_WAVE", 0, "MOD_WAVE", ""},
	{444, "MOD_BUILD", 0, "MOD_BUILD", ""},
	{445, "MOD_DECIM", 0, "MOD_DECIM", ""},
	{446, "MOD_MIRROR", 0, "MOD_MIRROR", ""},
	{447, "MOD_SOFT", 0, "MOD_SOFT", ""},
	{448, "MOD_SUBSURF", 0, "MOD_SUBSURF", ""},
	{449, "HOOK", 0, "HOOK", ""},
	{450, "MOD_PHYSICS", 0, "MOD_PHYSICS", ""},
	{451, "MOD_PARTICLES", 0, "MOD_PARTICLES", ""},
	{452, "MOD_BOOLEAN", 0, "MOD_BOOLEAN", ""},
	{453, "MOD_EDGESPLIT", 0, "MOD_EDGESPLIT", ""},
	{454, "MOD_ARRAY", 0, "MOD_ARRAY", ""},
	{455, "MOD_UVPROJECT", 0, "MOD_UVPROJECT", ""},
	{456, "MOD_DISPLACE", 0, "MOD_DISPLACE", ""},
	{457, "MOD_CURVE", 0, "MOD_CURVE", ""},
	{458, "MOD_LATTICE", 0, "MOD_LATTICE", ""},
	{459, "CONSTRAINT_DATA", 0, "CONSTRAINT_DATA", ""},
	{460, "MOD_ARMATURE", 0, "MOD_ARMATURE", ""},
	{461, "MOD_SHRINKWRAP", 0, "MOD_SHRINKWRAP", ""},
	{462, "MOD_CAST", 0, "MOD_CAST", ""},
	{463, "MOD_MESHDEFORM", 0, "MOD_MESHDEFORM", ""},
	{464, "MOD_BEVEL", 0, "MOD_BEVEL", ""},
	{465, "MOD_SMOOTH", 0, "MOD_SMOOTH", ""},
	{466, "MOD_SIMPLEDEFORM", 0, "MOD_SIMPLEDEFORM", ""},
	{467, "MOD_MASK", 0, "MOD_MASK", ""},
	{468, "MOD_CLOTH", 0, "MOD_CLOTH", ""},
	{469, "MOD_EXPLODE", 0, "MOD_EXPLODE", ""},
	{470, "MOD_FLUIDSIM", 0, "MOD_FLUIDSIM", ""},
	{471, "MOD_MULTIRES", 0, "MOD_MULTIRES", ""},
	{472, "MOD_SMOKE", 0, "MOD_SMOKE", ""},
	{473, "MOD_SOLIDIFY", 0, "MOD_SOLIDIFY", ""},
	{474, "MOD_SCREW", 0, "MOD_SCREW", ""},
	{475, "MOD_VERTEX_WEIGHT", 0, "MOD_VERTEX_WEIGHT", ""},
	{476, "MOD_DYNAMICPAINT", 0, "MOD_DYNAMICPAINT", ""},
	{477, "MOD_REMESH", 0, "MOD_REMESH", ""},
	{478, "MOD_OCEAN", 0, "MOD_OCEAN", ""},
	{479, "MOD_WARP", 0, "MOD_WARP", ""},
	{480, "MOD_SKIN", 0, "MOD_SKIN", ""},
	{481, "MOD_TRIANGULATE", 0, "MOD_TRIANGULATE", ""},
	{482, "MOD_WIREFRAME", 0, "MOD_WIREFRAME", ""},
	{494, "REC", 0, "REC", ""},
	{495, "PLAY", 0, "PLAY", ""},
	{496, "FF", 0, "FF", ""},
	{497, "REW", 0, "REW", ""},
	{498, "PAUSE", 0, "PAUSE", ""},
	{499, "PREV_KEYFRAME", 0, "PREV_KEYFRAME", ""},
	{500, "NEXT_KEYFRAME", 0, "NEXT_KEYFRAME", ""},
	{501, "PLAY_AUDIO", 0, "PLAY_AUDIO", ""},
	{502, "PLAY_REVERSE", 0, "PLAY_REVERSE", ""},
	{503, "PREVIEW_RANGE", 0, "PREVIEW_RANGE", ""},
	{504, "ACTION_TWEAK", 0, "ACTION_TWEAK", ""},
	{505, "PMARKER_ACT", 0, "PMARKER_ACT", ""},
	{506, "PMARKER_SEL", 0, "PMARKER_SEL", ""},
	{507, "PMARKER", 0, "PMARKER", ""},
	{508, "MARKER_HLT", 0, "MARKER_HLT", ""},
	{509, "MARKER", 0, "MARKER", ""},
	{510, "SPACE2", 0, "SPACE2", ""},
	{511, "SPACE3", 0, "SPACE3", ""},
	{512, "KEYINGSET", 0, "KEYINGSET", ""},
	{513, "KEY_DEHLT", 0, "KEY_DEHLT", ""},
	{514, "KEY_HLT", 0, "KEY_HLT", ""},
	{515, "MUTE_IPO_OFF", 0, "MUTE_IPO_OFF", ""},
	{516, "MUTE_IPO_ON", 0, "MUTE_IPO_ON", ""},
	{517, "VISIBLE_IPO_OFF", 0, "VISIBLE_IPO_OFF", ""},
	{518, "VISIBLE_IPO_ON", 0, "VISIBLE_IPO_ON", ""},
	{519, "DRIVER", 0, "DRIVER", ""},
	{520, "SOLO_OFF", 0, "SOLO_OFF", ""},
	{521, "SOLO_ON", 0, "SOLO_ON", ""},
	{522, "FRAME_PREV", 0, "FRAME_PREV", ""},
	{523, "FRAME_NEXT", 0, "FRAME_NEXT", ""},
	{524, "NLA_PUSHDOWN", 0, "NLA_PUSHDOWN", ""},
	{525, "IPO_CONSTANT", 0, "IPO_CONSTANT", ""},
	{526, "IPO_LINEAR", 0, "IPO_LINEAR", ""},
	{527, "IPO_BEZIER", 0, "IPO_BEZIER", ""},
	{528, "IPO_SINE", 0, "IPO_SINE", ""},
	{529, "IPO_QUAD", 0, "IPO_QUAD", ""},
	{530, "IPO_CUBIC", 0, "IPO_CUBIC", ""},
	{531, "IPO_QUART", 0, "IPO_QUART", ""},
	{532, "IPO_QUINT", 0, "IPO_QUINT", ""},
	{533, "IPO_EXPO", 0, "IPO_EXPO", ""},
	{534, "IPO_CIRC", 0, "IPO_CIRC", ""},
	{535, "IPO_BOUNCE", 0, "IPO_BOUNCE", ""},
	{536, "IPO_ELASTIC", 0, "IPO_ELASTIC", ""},
	{537, "IPO_BACK", 0, "IPO_BACK", ""},
	{538, "IPO_EASE_IN", 0, "IPO_EASE_IN", ""},
	{539, "IPO_EASE_OUT", 0, "IPO_EASE_OUT", ""},
	{540, "IPO_EASE_IN_OUT", 0, "IPO_EASE_IN_OUT", ""},
	{546, "VERTEXSEL", 0, "VERTEXSEL", ""},
	{547, "EDGESEL", 0, "EDGESEL", ""},
	{548, "FACESEL", 0, "FACESEL", ""},
	{549, "LOOPSEL", 0, "LOOPSEL", ""},
	{551, "ROTATE", 0, "ROTATE", ""},
	{552, "CURSOR", 0, "CURSOR", ""},
	{553, "ROTATECOLLECTION", 0, "ROTATECOLLECTION", ""},
	{554, "ROTATECENTER", 0, "ROTATECENTER", ""},
	{555, "ROTACTIVE", 0, "ROTACTIVE", ""},
	{556, "ALIGN", 0, "ALIGN", ""},
	{558, "SMOOTHCURVE", 0, "SMOOTHCURVE", ""},
	{559, "SPHERECURVE", 0, "SPHERECURVE", ""},
	{560, "ROOTCURVE", 0, "ROOTCURVE", ""},
	{561, "SHARPCURVE", 0, "SHARPCURVE", ""},
	{562, "LINCURVE", 0, "LINCURVE", ""},
	{563, "NOCURVE", 0, "NOCURVE", ""},
	{564, "RNDCURVE", 0, "RNDCURVE", ""},
	{565, "PROP_OFF", 0, "PROP_OFF", ""},
	{566, "PROP_ON", 0, "PROP_ON", ""},
	{567, "PROP_CON", 0, "PROP_CON", ""},
	{568, "SCULPT_DYNTOPO", 0, "SCULPT_DYNTOPO", ""},
	{569, "PARTICLE_POINT", 0, "PARTICLE_POINT", ""},
	{570, "PARTICLE_TIP", 0, "PARTICLE_TIP", ""},
	{571, "PARTICLE_PATH", 0, "PARTICLE_PATH", ""},
	{572, "MAN_TRANS", 0, "MAN_TRANS", ""},
	{573, "MAN_ROT", 0, "MAN_ROT", ""},
	{574, "MAN_SCALE", 0, "MAN_SCALE", ""},
	{575, "MANIPUL", 0, "MANIPUL", ""},
	{576, "SNAP_OFF", 0, "SNAP_OFF", ""},
	{577, "SNAP_ON", 0, "SNAP_ON", ""},
	{578, "SNAP_NORMAL", 0, "SNAP_NORMAL", ""},
	{579, "SNAP_INCREMENT", 0, "SNAP_INCREMENT", ""},
	{580, "SNAP_VERTEX", 0, "SNAP_VERTEX", ""},
	{581, "SNAP_EDGE", 0, "SNAP_EDGE", ""},
	{582, "SNAP_FACE", 0, "SNAP_FACE", ""},
	{583, "SNAP_VOLUME", 0, "SNAP_VOLUME", ""},
	{585, "STICKY_UVS_LOC", 0, "STICKY_UVS_LOC", ""},
	{586, "STICKY_UVS_DISABLE", 0, "STICKY_UVS_DISABLE", ""},
	{587, "STICKY_UVS_VERT", 0, "STICKY_UVS_VERT", ""},
	{588, "CLIPUV_DEHLT", 0, "CLIPUV_DEHLT", ""},
	{589, "CLIPUV_HLT", 0, "CLIPUV_HLT", ""},
	{590, "SNAP_PEEL_OBJECT", 0, "SNAP_PEEL_OBJECT", ""},
	{591, "GRID", 0, "GRID", ""},
	{598, "PASTEDOWN", 0, "PASTEDOWN", ""},
	{599, "COPYDOWN", 0, "COPYDOWN", ""},
	{600, "PASTEFLIPUP", 0, "PASTEFLIPUP", ""},
	{601, "PASTEFLIPDOWN", 0, "PASTEFLIPDOWN", ""},
	{606, "SNAP_SURFACE", 0, "SNAP_SURFACE", ""},
	{607, "AUTOMERGE_ON", 0, "AUTOMERGE_ON", ""},
	{608, "AUTOMERGE_OFF", 0, "AUTOMERGE_OFF", ""},
	{609, "RETOPO", 0, "RETOPO", ""},
	{610, "UV_VERTEXSEL", 0, "UV_VERTEXSEL", ""},
	{611, "UV_EDGESEL", 0, "UV_EDGESEL", ""},
	{612, "UV_FACESEL", 0, "UV_FACESEL", ""},
	{613, "UV_ISLANDSEL", 0, "UV_ISLANDSEL", ""},
	{614, "UV_SYNC_SELECT", 0, "UV_SYNC_SELECT", ""},
	{624, "BBOX", 0, "BBOX", ""},
	{625, "WIRE", 0, "WIRE", ""},
	{626, "SOLID", 0, "SOLID", ""},
	{627, "SMOOTH", 0, "SMOOTH", ""},
	{628, "POTATO", 0, "POTATO", ""},
	{630, "ORTHO", 0, "ORTHO", ""},
	{633, "LOCKVIEW_OFF", 0, "LOCKVIEW_OFF", ""},
	{634, "LOCKVIEW_ON", 0, "LOCKVIEW_ON", ""},
	{636, "AXIS_SIDE", 0, "AXIS_SIDE", ""},
	{637, "AXIS_FRONT", 0, "AXIS_FRONT", ""},
	{638, "AXIS_TOP", 0, "AXIS_TOP", ""},
	{639, "NDOF_DOM", 0, "NDOF_DOM", ""},
	{640, "NDOF_TURN", 0, "NDOF_TURN", ""},
	{641, "NDOF_FLY", 0, "NDOF_FLY", ""},
	{642, "NDOF_TRANS", 0, "NDOF_TRANS", ""},
	{643, "LAYER_USED", 0, "LAYER_USED", ""},
	{644, "LAYER_ACTIVE", 0, "LAYER_ACTIVE", ""},
	{676, "SORTALPHA", 0, "SORTALPHA", ""},
	{677, "SORTBYEXT", 0, "SORTBYEXT", ""},
	{678, "SORTTIME", 0, "SORTTIME", ""},
	{679, "SORTSIZE", 0, "SORTSIZE", ""},
	{680, "LONGDISPLAY", 0, "LONGDISPLAY", ""},
	{681, "SHORTDISPLAY", 0, "SHORTDISPLAY", ""},
	{682, "GHOST", 0, "GHOST", ""},
	{683, "IMGDISPLAY", 0, "IMGDISPLAY", ""},
	{684, "SAVE_AS", 0, "SAVE_AS", ""},
	{685, "SAVE_COPY", 0, "SAVE_COPY", ""},
	{686, "BOOKMARKS", 0, "BOOKMARKS", ""},
	{687, "FONTPREVIEW", 0, "FONTPREVIEW", ""},
	{688, "FILTER", 0, "FILTER", ""},
	{689, "NEWFOLDER", 0, "NEWFOLDER", ""},
	{690, "OPEN_RECENT", 0, "OPEN_RECENT", ""},
	{691, "FILE_PARENT", 0, "FILE_PARENT", ""},
	{692, "FILE_REFRESH", 0, "FILE_REFRESH", ""},
	{693, "FILE_FOLDER", 0, "FILE_FOLDER", ""},
	{694, "FILE_BLANK", 0, "FILE_BLANK", ""},
	{695, "FILE_BLEND", 0, "FILE_BLEND", ""},
	{696, "FILE_IMAGE", 0, "FILE_IMAGE", ""},
	{697, "FILE_MOVIE", 0, "FILE_MOVIE", ""},
	{698, "FILE_SCRIPT", 0, "FILE_SCRIPT", ""},
	{699, "FILE_SOUND", 0, "FILE_SOUND", ""},
	{700, "FILE_FONT", 0, "FILE_FONT", ""},
	{701, "FILE_TEXT", 0, "FILE_TEXT", ""},
	{702, "RECOVER_AUTO", 0, "RECOVER_AUTO", ""},
	{703, "SAVE_PREFS", 0, "SAVE_PREFS", ""},
	{704, "LINK_BLEND", 0, "LINK_BLEND", ""},
	{705, "APPEND_BLEND", 0, "APPEND_BLEND", ""},
	{706, "IMPORT", 0, "IMPORT", ""},
	{707, "EXPORT", 0, "EXPORT", ""},
	{708, "EXTERNAL_DATA", 0, "EXTERNAL_DATA", ""},
	{709, "LOAD_FACTORY", 0, "LOAD_FACTORY", ""},
	{715, "LOOP_BACK", 0, "LOOP_BACK", ""},
	{716, "LOOP_FORWARDS", 0, "LOOP_FORWARDS", ""},
	{717, "BACK", 0, "BACK", ""},
	{718, "FORWARD", 0, "FORWARD", ""},
	{726, "FILE_BACKUP", 0, "FILE_BACKUP", ""},
	{727, "DISK_DRIVE", 0, "DISK_DRIVE", ""},
	{728, "MATPLANE", 0, "MATPLANE", ""},
	{729, "MATSPHERE", 0, "MATSPHERE", ""},
	{730, "MATCUBE", 0, "MATCUBE", ""},
	{731, "MONKEY", 0, "MONKEY", ""},
	{732, "HAIR", 0, "HAIR", ""},
	{733, "ALIASED", 0, "ALIASED", ""},
	{734, "ANTIALIASED", 0, "ANTIALIASED", ""},
	{735, "MAT_SPHERE_SKY", 0, "MAT_SPHERE_SKY", ""},
	{740, "WORDWRAP_OFF", 0, "WORDWRAP_OFF", ""},
	{741, "WORDWRAP_ON", 0, "WORDWRAP_ON", ""},
	{742, "SYNTAX_OFF", 0, "SYNTAX_OFF", ""},
	{743, "SYNTAX_ON", 0, "SYNTAX_ON", ""},
	{744, "LINENUMBERS_OFF", 0, "LINENUMBERS_OFF", ""},
	{745, "LINENUMBERS_ON", 0, "LINENUMBERS_ON", ""},
	{746, "SCRIPTPLUGINS", 0, "SCRIPTPLUGINS", ""},
	{754, "SEQ_SEQUENCER", 0, "SEQ_SEQUENCER", ""},
	{755, "SEQ_PREVIEW", 0, "SEQ_PREVIEW", ""},
	{756, "SEQ_LUMA_WAVEFORM", 0, "SEQ_LUMA_WAVEFORM", ""},
	{757, "SEQ_CHROMA_SCOPE", 0, "SEQ_CHROMA_SCOPE", ""},
	{758, "SEQ_HISTOGRAM", 0, "SEQ_HISTOGRAM", ""},
	{759, "SEQ_SPLITVIEW", 0, "SEQ_SPLITVIEW", ""},
	{763, "IMAGE_RGB", 0, "IMAGE_RGB", ""},
	{764, "IMAGE_RGB_ALPHA", 0, "IMAGE_RGB_ALPHA", ""},
	{765, "IMAGE_ALPHA", 0, "IMAGE_ALPHA", ""},
	{766, "IMAGE_ZDEPTH", 0, "IMAGE_ZDEPTH", ""},
	{767, "IMAGEFILE", 0, "IMAGEFILE", ""},
	{780, "BRUSH_ADD", 0, "BRUSH_ADD", ""},
	{781, "BRUSH_BLOB", 0, "BRUSH_BLOB", ""},
	{782, "BRUSH_BLUR", 0, "BRUSH_BLUR", ""},
	{783, "BRUSH_CLAY", 0, "BRUSH_CLAY", ""},
	{784, "BRUSH_CLAY_STRIPS", 0, "BRUSH_CLAY_STRIPS", ""},
	{785, "BRUSH_CLONE", 0, "BRUSH_CLONE", ""},
	{786, "BRUSH_CREASE", 0, "BRUSH_CREASE", ""},
	{787, "BRUSH_DARKEN", 0, "BRUSH_DARKEN", ""},
	{788, "BRUSH_FILL", 0, "BRUSH_FILL", ""},
	{789, "BRUSH_FLATTEN", 0, "BRUSH_FLATTEN", ""},
	{790, "BRUSH_GRAB", 0, "BRUSH_GRAB", ""},
	{791, "BRUSH_INFLATE", 0, "BRUSH_INFLATE", ""},
	{792, "BRUSH_LAYER", 0, "BRUSH_LAYER", ""},
	{793, "BRUSH_LIGHTEN", 0, "BRUSH_LIGHTEN", ""},
	{794, "BRUSH_MASK", 0, "BRUSH_MASK", ""},
	{795, "BRUSH_MIX", 0, "BRUSH_MIX", ""},
	{796, "BRUSH_MULTIPLY", 0, "BRUSH_MULTIPLY", ""},
	{797, "BRUSH_NUDGE", 0, "BRUSH_NUDGE", ""},
	{798, "BRUSH_PINCH", 0, "BRUSH_PINCH", ""},
	{799, "BRUSH_SCRAPE", 0, "BRUSH_SCRAPE", ""},
	{800, "BRUSH_SCULPT_DRAW", 0, "BRUSH_SCULPT_DRAW", ""},
	{801, "BRUSH_SMEAR", 0, "BRUSH_SMEAR", ""},
	{802, "BRUSH_SMOOTH", 0, "BRUSH_SMOOTH", ""},
	{803, "BRUSH_SNAKE_HOOK", 0, "BRUSH_SNAKE_HOOK", ""},
	{804, "BRUSH_SOFTEN", 0, "BRUSH_SOFTEN", ""},
	{805, "BRUSH_SUBTRACT", 0, "BRUSH_SUBTRACT", ""},
	{806, "BRUSH_TEXDRAW", 0, "BRUSH_TEXDRAW", ""},
	{807, "BRUSH_TEXFILL", 0, "BRUSH_TEXFILL", ""},
	{808, "BRUSH_TEXMASK", 0, "BRUSH_TEXMASK", ""},
	{809, "BRUSH_THUMB", 0, "BRUSH_THUMB", ""},
	{810, "BRUSH_ROTATE", 0, "BRUSH_ROTATE", ""},
	{811, "BRUSH_VERTEXDRAW", 0, "BRUSH_VERTEXDRAW", ""},
	{812, "MATCAP_01", 0, "MATCAP_01", ""},
	{813, "MATCAP_02", 0, "MATCAP_02", ""},
	{814, "MATCAP_03", 0, "MATCAP_03", ""},
	{815, "MATCAP_04", 0, "MATCAP_04", ""},
	{816, "MATCAP_05", 0, "MATCAP_05", ""},
	{817, "MATCAP_06", 0, "MATCAP_06", ""},
	{818, "MATCAP_07", 0, "MATCAP_07", ""},
	{819, "MATCAP_08", 0, "MATCAP_08", ""},
	{820, "MATCAP_09", 0, "MATCAP_09", ""},
	{821, "MATCAP_10", 0, "MATCAP_10", ""},
	{822, "MATCAP_11", 0, "MATCAP_11", ""},
	{823, "MATCAP_12", 0, "MATCAP_12", ""},
	{824, "MATCAP_13", 0, "MATCAP_13", ""},
	{825, "MATCAP_14", 0, "MATCAP_14", ""},
	{826, "MATCAP_15", 0, "MATCAP_15", ""},
	{827, "MATCAP_16", 0, "MATCAP_16", ""},
	{828, "MATCAP_17", 0, "MATCAP_17", ""},
	{829, "MATCAP_18", 0, "MATCAP_18", ""},
	{830, "MATCAP_19", 0, "MATCAP_19", ""},
	{831, "MATCAP_20", 0, "MATCAP_20", ""},
	{832, "MATCAP_21", 0, "MATCAP_21", ""},
	{833, "MATCAP_22", 0, "MATCAP_22", ""},
	{834, "MATCAP_23", 0, "MATCAP_23", ""},
	{835, "MATCAP_24", 0, "MATCAP_24", ""},
	{836, "VIEW3D_VEC", 0, "VIEW3D_VEC", ""},
	{837, "EDIT_VEC", 0, "EDIT_VEC", ""},
	{838, "EDITMODE_VEC_DEHLT", 0, "EDITMODE_VEC_DEHLT", ""},
	{839, "EDITMODE_VEC_HLT", 0, "EDITMODE_VEC_HLT", ""},
	{840, "DISCLOSURE_TRI_RIGHT_VEC", 0, "DISCLOSURE_TRI_RIGHT_VEC", ""},
	{841, "DISCLOSURE_TRI_DOWN_VEC", 0, "DISCLOSURE_TRI_DOWN_VEC", ""},
	{842, "MOVE_UP_VEC", 0, "MOVE_UP_VEC", ""},
	{843, "MOVE_DOWN_VEC", 0, "MOVE_DOWN_VEC", ""},
	{844, "X_VEC", 0, "X_VEC", ""},
	{845, "SMALL_TRI_RIGHT_VEC", 0, "SMALL_TRI_RIGHT_VEC", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WindowManager_piemenu_begin__internal_icon = {
	{(PropertyRNA *)&rna_WindowManager_piemenu_begin__internal_event, (PropertyRNA *)&rna_WindowManager_piemenu_begin__internal_title,
	-1, "icon", 3, "icon",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_WindowManager_piemenu_begin__internal_icon_items, 542, 0
};

PointerPropertyRNA rna_WindowManager_piemenu_begin__internal_event = {
	{(PropertyRNA *)&rna_WindowManager_piemenu_begin__internal_menu_pie, (PropertyRNA *)&rna_WindowManager_piemenu_begin__internal_icon,
	-1, "event", 8652800, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Event
};

PointerPropertyRNA rna_WindowManager_piemenu_begin__internal_menu_pie = {
	{NULL, (PropertyRNA *)&rna_WindowManager_piemenu_begin__internal_event,
	-1, "menu_pie", 8652808, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_UIPieMenu
};

FunctionRNA rna_WindowManager_piemenu_begin__internal_func = {
	{(FunctionRNA *)&rna_WindowManager_piemenu_end__internal_func, (FunctionRNA *)&rna_WindowManager_pupmenu_end__internal_func,
	NULL,
	{(PropertyRNA *)&rna_WindowManager_piemenu_begin__internal_title, (PropertyRNA *)&rna_WindowManager_piemenu_begin__internal_menu_pie}},
	"piemenu_begin__internal", 9, "piemenu_begin__internal",
	WindowManager_piemenu_begin__internal_call,
	(PropertyRNA *)&rna_WindowManager_piemenu_begin__internal_menu_pie
};

PointerPropertyRNA rna_WindowManager_piemenu_end__internal_menu = {
	{NULL, NULL,
	-1, "menu", 8652800, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_UIPieMenu
};

FunctionRNA rna_WindowManager_piemenu_end__internal_func = {
	{NULL, (FunctionRNA *)&rna_WindowManager_piemenu_begin__internal_func,
	NULL,
	{(PropertyRNA *)&rna_WindowManager_piemenu_end__internal_menu, (PropertyRNA *)&rna_WindowManager_piemenu_end__internal_menu}},
	"piemenu_end__internal", 9, "piemenu_end__internal",
	WindowManager_piemenu_end__internal_call,
	NULL
};

StructRNA RNA_WindowManager = {
	{(ContainerRNA *)&RNA_KeyConfigurations, (ContainerRNA *)&RNA_Window,
	NULL,
	{(PropertyRNA *)&rna_WindowManager_operators, (PropertyRNA *)&rna_WindowManager_clipboard}},
	"WindowManager", NULL, NULL, 5, "Window Manager",
	"Window manager datablock defining open windows and other user interface data",
	"*", 17,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_WindowManager_fileselect_add_func, (FunctionRNA *)&rna_WindowManager_piemenu_end__internal_func}
};

/* KeyConfigs */
CollectionPropertyRNA rna_KeyConfigurations_rna_properties = {
	{(PropertyRNA *)&rna_KeyConfigurations_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyConfigurations_rna_properties_begin, KeyConfigurations_rna_properties_next, KeyConfigurations_rna_properties_end, KeyConfigurations_rna_properties_get, NULL, NULL, KeyConfigurations_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_KeyConfigurations_rna_type = {
	{(PropertyRNA *)&rna_KeyConfigurations_active, (PropertyRNA *)&rna_KeyConfigurations_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyConfigurations_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_KeyConfigurations_active = {
	{(PropertyRNA *)&rna_KeyConfigurations_default, (PropertyRNA *)&rna_KeyConfigurations_rna_type,
	-1, "active", 8388609, "Active KeyConfig",
	"Active key configuration (preset)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyConfigurations_active_get, KeyConfigurations_active_set, NULL, NULL,&RNA_KeyConfig
};

PointerPropertyRNA rna_KeyConfigurations_default = {
	{(PropertyRNA *)&rna_KeyConfigurations_addon, (PropertyRNA *)&rna_KeyConfigurations_active,
	-1, "default", 8388608, "Default Key Configuration",
	"Default builtin key configuration",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_MASS, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyConfigurations_default_value_get, NULL, NULL, NULL,&RNA_KeyConfig
};

PointerPropertyRNA rna_KeyConfigurations_addon = {
	{(PropertyRNA *)&rna_KeyConfigurations_user, (PropertyRNA *)&rna_KeyConfigurations_default,
	-1, "addon", 8388608, "Addon Key Configuration",
	"Key configuration that can be extended by addons, and is added to the active configuration when handling events",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_MASS, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyConfigurations_addon_get, NULL, NULL, NULL,&RNA_KeyConfig
};

PointerPropertyRNA rna_KeyConfigurations_user = {
	{NULL, (PropertyRNA *)&rna_KeyConfigurations_addon,
	-1, "user", 8388608, "User Key Configuration",
	"Final key configuration that combines keymaps from the active and addon configurations, and can be edited by the user",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_MASS, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyConfigurations_user_get, NULL, NULL, NULL,&RNA_KeyConfig
};

StringPropertyRNA rna_KeyConfigurations_new_name = {
	{(PropertyRNA *)&rna_KeyConfigurations_new_keyconfig, NULL,
	-1, "name", 262149, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_KeyConfigurations_new_keyconfig = {
	{NULL, (PropertyRNA *)&rna_KeyConfigurations_new_name,
	-1, "keyconfig", 8388616, "Key Configuration",
	"Added key configuration",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyConfig
};

FunctionRNA rna_KeyConfigurations_new_func = {
	{(FunctionRNA *)&rna_KeyConfigurations_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_KeyConfigurations_new_name, (PropertyRNA *)&rna_KeyConfigurations_new_keyconfig}},
	"new", 0, "new",
	KeyConfigurations_new_call,
	(PropertyRNA *)&rna_KeyConfigurations_new_keyconfig
};

PointerPropertyRNA rna_KeyConfigurations_remove_keyconfig = {
	{NULL, NULL,
	-1, "keyconfig", 264196, "Key Configuration",
	"Removed key configuration",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyConfig
};

FunctionRNA rna_KeyConfigurations_remove_func = {
	{NULL, (FunctionRNA *)&rna_KeyConfigurations_new_func,
	NULL,
	{(PropertyRNA *)&rna_KeyConfigurations_remove_keyconfig, (PropertyRNA *)&rna_KeyConfigurations_remove_keyconfig}},
	"remove", 16, "remove",
	KeyConfigurations_remove_call,
	NULL
};

StructRNA RNA_KeyConfigurations = {
	{(ContainerRNA *)&RNA_KeyConfig, (ContainerRNA *)&RNA_WindowManager,
	NULL,
	{(PropertyRNA *)&rna_KeyConfigurations_rna_properties, (PropertyRNA *)&rna_KeyConfigurations_user}},
	"KeyConfigurations", NULL, NULL, 4, "KeyConfigs",
	"Collection of KeyConfigs",
	"*", 17,
	NULL, (PropertyRNA *)&rna_KeyConfigurations_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_KeyConfigurations_new_func, (FunctionRNA *)&rna_KeyConfigurations_remove_func}
};

/* Key Configuration */
CollectionPropertyRNA rna_KeyConfig_rna_properties = {
	{(PropertyRNA *)&rna_KeyConfig_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyConfig_rna_properties_begin, KeyConfig_rna_properties_next, KeyConfig_rna_properties_end, KeyConfig_rna_properties_get, NULL, NULL, KeyConfig_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_KeyConfig_rna_type = {
	{(PropertyRNA *)&rna_KeyConfig_name, (PropertyRNA *)&rna_KeyConfig_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyConfig_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_KeyConfig_name = {
	{(PropertyRNA *)&rna_KeyConfig_keymaps, (PropertyRNA *)&rna_KeyConfig_rna_type,
	-1, "name", 262145, "Name",
	"Name of the key configuration",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyConfig_name_get, KeyConfig_name_length, KeyConfig_name_set, NULL, NULL, NULL, 64, ""
};

CollectionPropertyRNA rna_KeyConfig_keymaps = {
	{(PropertyRNA *)&rna_KeyConfig_is_user_defined, (PropertyRNA *)&rna_KeyConfig_name,
	-1, "keymaps", 0, "Key Maps",
	"Key maps configured as part of this configuration",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_KeyMaps},
	KeyConfig_keymaps_begin, KeyConfig_keymaps_next, KeyConfig_keymaps_end, KeyConfig_keymaps_get, NULL, KeyConfig_keymaps_lookup_int, KeyConfig_keymaps_lookup_string, NULL, &RNA_KeyMap
};

BoolPropertyRNA rna_KeyConfig_is_user_defined = {
	{NULL, (PropertyRNA *)&rna_KeyConfig_keymaps,
	-1, "is_user_defined", 2, "User Defined",
	"Indicates that a keyconfig was defined by the user",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyConfig_is_user_defined_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_KeyConfig = {
	{(ContainerRNA *)&RNA_KeyMaps, (ContainerRNA *)&RNA_KeyConfigurations,
	NULL,
	{(PropertyRNA *)&rna_KeyConfig_rna_properties, (PropertyRNA *)&rna_KeyConfig_is_user_defined}},
	"KeyConfig", NULL, NULL, 4, "Key Configuration",
	"Input configuration, including keymaps",
	"*", 17,
	(PropertyRNA *)&rna_KeyConfig_name, (PropertyRNA *)&rna_KeyConfig_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Key Maps */
CollectionPropertyRNA rna_KeyMaps_rna_properties = {
	{(PropertyRNA *)&rna_KeyMaps_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMaps_rna_properties_begin, KeyMaps_rna_properties_next, KeyMaps_rna_properties_end, KeyMaps_rna_properties_get, NULL, NULL, KeyMaps_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_KeyMaps_rna_type = {
	{NULL, (PropertyRNA *)&rna_KeyMaps_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMaps_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_KeyMaps_new_name = {
	{(PropertyRNA *)&rna_KeyMaps_new_space_type, NULL,
	-1, "name", 262149, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

static EnumPropertyItem rna_KeyMaps_new_space_type_items[24] = {
	{0, "EMPTY", 0, "Empty", ""},
	{1, "VIEW_3D", 104, "3D View", "3D viewport"},
	{0, "", 0, NULL, NULL},
	{15, "TIMELINE", 118, "Timeline", "Timeline and playback controls"},
	{2, "GRAPH_EDITOR", 105, "Graph Editor", "Edit drivers and keyframe interpolation"},
	{12, "DOPESHEET_EDITOR", 115, "Dope Sheet", "Adjust timing of keyframes"},
	{13, "NLA_EDITOR", 116, "NLA Editor", "Combine and layer Actions"},
	{0, "", 0, NULL, NULL},
	{6, "IMAGE_EDITOR", 109, "UV/Image Editor", "View and edit images and UV Maps"},
	{8, "SEQUENCE_EDITOR", 111, "Video Sequence Editor", "Video editing tools"},
	{20, "CLIP_EDITOR", 123, "Movie Clip Editor", "Motion tracking tools"},
	{9, "TEXT_EDITOR", 112, "Text Editor", "Edit scripts and in-file documentation"},
	{16, "NODE_EDITOR", 119, "Node Editor", "Editor for node-based shading and compositing tools"},
	{17, "LOGIC_EDITOR", 120, "Logic Editor", "Game logic editing"},
	{0, "", 0, NULL, NULL},
	{4, "PROPERTIES", 107, "Properties", "Edit properties of active object and related datablocks"},
	{3, "OUTLINER", 106, "Outliner", "Overview of scene graph and all available datablocks"},
	{19, "USER_PREFERENCES", 122, "User Preferences", "Edit persistent configuration settings"},
	{7, "INFO", 110, "Info", "Main menu bar and list of error messages (drag down to expand and display)"},
	{0, "", 0, NULL, NULL},
	{5, "FILE_BROWSER", 108, "File Browser", "Browse for files and assets"},
	{0, "", 0, NULL, NULL},
	{18, "CONSOLE", 121, "Python Console", "Interactive programmatic console for advanced editing and script development"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMaps_new_space_type = {
	{(PropertyRNA *)&rna_KeyMaps_new_region_type, (PropertyRNA *)&rna_KeyMaps_new_name,
	-1, "space_type", 3, "Space Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_KeyMaps_new_space_type_items, 23, 0
};

static EnumPropertyItem rna_KeyMaps_new_region_type_items[9] = {
	{0, "WINDOW", 0, "Window", ""},
	{1, "HEADER", 0, "Header", ""},
	{2, "CHANNELS", 0, "Channels", ""},
	{3, "TEMPORARY", 0, "Temporary", ""},
	{4, "UI", 0, "UI", ""},
	{5, "TOOLS", 0, "Tools", ""},
	{6, "TOOL_PROPS", 0, "Tool Properties", ""},
	{7, "PREVIEW", 0, "Preview", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMaps_new_region_type = {
	{(PropertyRNA *)&rna_KeyMaps_new_modal, (PropertyRNA *)&rna_KeyMaps_new_space_type,
	-1, "region_type", 3, "Region Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_KeyMaps_new_region_type_items, 8, 0
};

BoolPropertyRNA rna_KeyMaps_new_modal = {
	{(PropertyRNA *)&rna_KeyMaps_new_keymap, (PropertyRNA *)&rna_KeyMaps_new_region_type,
	-1, "modal", 3, "Modal",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_KeyMaps_new_keymap = {
	{NULL, (PropertyRNA *)&rna_KeyMaps_new_modal,
	-1, "keymap", 8388616, "Key Map",
	"Added key map",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMap
};

FunctionRNA rna_KeyMaps_new_func = {
	{(FunctionRNA *)&rna_KeyMaps_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_KeyMaps_new_name, (PropertyRNA *)&rna_KeyMaps_new_keymap}},
	"new", 0, "new",
	KeyMaps_new_call,
	(PropertyRNA *)&rna_KeyMaps_new_keymap
};

PointerPropertyRNA rna_KeyMaps_remove_keymap = {
	{NULL, NULL,
	-1, "keymap", 264196, "Key Map",
	"Removed key map",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMap
};

FunctionRNA rna_KeyMaps_remove_func = {
	{(FunctionRNA *)&rna_KeyMaps_find_func, (FunctionRNA *)&rna_KeyMaps_new_func,
	NULL,
	{(PropertyRNA *)&rna_KeyMaps_remove_keymap, (PropertyRNA *)&rna_KeyMaps_remove_keymap}},
	"remove", 16, "remove",
	KeyMaps_remove_call,
	NULL
};

StringPropertyRNA rna_KeyMaps_find_name = {
	{(PropertyRNA *)&rna_KeyMaps_find_space_type, NULL,
	-1, "name", 262149, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

static EnumPropertyItem rna_KeyMaps_find_space_type_items[24] = {
	{0, "EMPTY", 0, "Empty", ""},
	{1, "VIEW_3D", 104, "3D View", "3D viewport"},
	{0, "", 0, NULL, NULL},
	{15, "TIMELINE", 118, "Timeline", "Timeline and playback controls"},
	{2, "GRAPH_EDITOR", 105, "Graph Editor", "Edit drivers and keyframe interpolation"},
	{12, "DOPESHEET_EDITOR", 115, "Dope Sheet", "Adjust timing of keyframes"},
	{13, "NLA_EDITOR", 116, "NLA Editor", "Combine and layer Actions"},
	{0, "", 0, NULL, NULL},
	{6, "IMAGE_EDITOR", 109, "UV/Image Editor", "View and edit images and UV Maps"},
	{8, "SEQUENCE_EDITOR", 111, "Video Sequence Editor", "Video editing tools"},
	{20, "CLIP_EDITOR", 123, "Movie Clip Editor", "Motion tracking tools"},
	{9, "TEXT_EDITOR", 112, "Text Editor", "Edit scripts and in-file documentation"},
	{16, "NODE_EDITOR", 119, "Node Editor", "Editor for node-based shading and compositing tools"},
	{17, "LOGIC_EDITOR", 120, "Logic Editor", "Game logic editing"},
	{0, "", 0, NULL, NULL},
	{4, "PROPERTIES", 107, "Properties", "Edit properties of active object and related datablocks"},
	{3, "OUTLINER", 106, "Outliner", "Overview of scene graph and all available datablocks"},
	{19, "USER_PREFERENCES", 122, "User Preferences", "Edit persistent configuration settings"},
	{7, "INFO", 110, "Info", "Main menu bar and list of error messages (drag down to expand and display)"},
	{0, "", 0, NULL, NULL},
	{5, "FILE_BROWSER", 108, "File Browser", "Browse for files and assets"},
	{0, "", 0, NULL, NULL},
	{18, "CONSOLE", 121, "Python Console", "Interactive programmatic console for advanced editing and script development"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMaps_find_space_type = {
	{(PropertyRNA *)&rna_KeyMaps_find_region_type, (PropertyRNA *)&rna_KeyMaps_find_name,
	-1, "space_type", 3, "Space Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_KeyMaps_find_space_type_items, 23, 0
};

static EnumPropertyItem rna_KeyMaps_find_region_type_items[9] = {
	{0, "WINDOW", 0, "Window", ""},
	{1, "HEADER", 0, "Header", ""},
	{2, "CHANNELS", 0, "Channels", ""},
	{3, "TEMPORARY", 0, "Temporary", ""},
	{4, "UI", 0, "UI", ""},
	{5, "TOOLS", 0, "Tools", ""},
	{6, "TOOL_PROPS", 0, "Tool Properties", ""},
	{7, "PREVIEW", 0, "Preview", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMaps_find_region_type = {
	{(PropertyRNA *)&rna_KeyMaps_find_keymap, (PropertyRNA *)&rna_KeyMaps_find_space_type,
	-1, "region_type", 3, "Region Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_KeyMaps_find_region_type_items, 8, 0
};

PointerPropertyRNA rna_KeyMaps_find_keymap = {
	{NULL, (PropertyRNA *)&rna_KeyMaps_find_region_type,
	-1, "keymap", 8388616, "Key Map",
	"Corresponding key map",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMap
};

FunctionRNA rna_KeyMaps_find_func = {
	{(FunctionRNA *)&rna_KeyMaps_find_modal_func, (FunctionRNA *)&rna_KeyMaps_remove_func,
	NULL,
	{(PropertyRNA *)&rna_KeyMaps_find_name, (PropertyRNA *)&rna_KeyMaps_find_keymap}},
	"find", 0, "find",
	KeyMaps_find_call,
	(PropertyRNA *)&rna_KeyMaps_find_keymap
};

StringPropertyRNA rna_KeyMaps_find_modal_name = {
	{(PropertyRNA *)&rna_KeyMaps_find_modal_keymap, NULL,
	-1, "name", 262149, "Operator Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_KeyMaps_find_modal_keymap = {
	{NULL, (PropertyRNA *)&rna_KeyMaps_find_modal_name,
	-1, "keymap", 8388616, "Key Map",
	"Corresponding key map",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMap
};

FunctionRNA rna_KeyMaps_find_modal_func = {
	{NULL, (FunctionRNA *)&rna_KeyMaps_find_func,
	NULL,
	{(PropertyRNA *)&rna_KeyMaps_find_modal_name, (PropertyRNA *)&rna_KeyMaps_find_modal_keymap}},
	"find_modal", 0, "find_modal",
	KeyMaps_find_modal_call,
	(PropertyRNA *)&rna_KeyMaps_find_modal_keymap
};

StructRNA RNA_KeyMaps = {
	{(ContainerRNA *)&RNA_KeyMap, (ContainerRNA *)&RNA_KeyConfig,
	NULL,
	{(PropertyRNA *)&rna_KeyMaps_rna_properties, (PropertyRNA *)&rna_KeyMaps_rna_type}},
	"KeyMaps", NULL, NULL, 4, "Key Maps",
	"Collection of keymaps",
	"*", 17,
	NULL, (PropertyRNA *)&rna_KeyMaps_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_KeyMaps_new_func, (FunctionRNA *)&rna_KeyMaps_find_modal_func}
};

/* Key Map */
CollectionPropertyRNA rna_KeyMap_rna_properties = {
	{(PropertyRNA *)&rna_KeyMap_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMap_rna_properties_begin, KeyMap_rna_properties_next, KeyMap_rna_properties_end, KeyMap_rna_properties_get, NULL, NULL, KeyMap_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_KeyMap_rna_type = {
	{(PropertyRNA *)&rna_KeyMap_name, (PropertyRNA *)&rna_KeyMap_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMap_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_KeyMap_name = {
	{(PropertyRNA *)&rna_KeyMap_space_type, (PropertyRNA *)&rna_KeyMap_rna_type,
	-1, "name", 262144, "Name",
	"Name of the key map",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMap_name_get, KeyMap_name_length, NULL, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_KeyMap_space_type_items[24] = {
	{0, "EMPTY", 0, "Empty", ""},
	{1, "VIEW_3D", 104, "3D View", "3D viewport"},
	{0, "", 0, NULL, NULL},
	{15, "TIMELINE", 118, "Timeline", "Timeline and playback controls"},
	{2, "GRAPH_EDITOR", 105, "Graph Editor", "Edit drivers and keyframe interpolation"},
	{12, "DOPESHEET_EDITOR", 115, "Dope Sheet", "Adjust timing of keyframes"},
	{13, "NLA_EDITOR", 116, "NLA Editor", "Combine and layer Actions"},
	{0, "", 0, NULL, NULL},
	{6, "IMAGE_EDITOR", 109, "UV/Image Editor", "View and edit images and UV Maps"},
	{8, "SEQUENCE_EDITOR", 111, "Video Sequence Editor", "Video editing tools"},
	{20, "CLIP_EDITOR", 123, "Movie Clip Editor", "Motion tracking tools"},
	{9, "TEXT_EDITOR", 112, "Text Editor", "Edit scripts and in-file documentation"},
	{16, "NODE_EDITOR", 119, "Node Editor", "Editor for node-based shading and compositing tools"},
	{17, "LOGIC_EDITOR", 120, "Logic Editor", "Game logic editing"},
	{0, "", 0, NULL, NULL},
	{4, "PROPERTIES", 107, "Properties", "Edit properties of active object and related datablocks"},
	{3, "OUTLINER", 106, "Outliner", "Overview of scene graph and all available datablocks"},
	{19, "USER_PREFERENCES", 122, "User Preferences", "Edit persistent configuration settings"},
	{7, "INFO", 110, "Info", "Main menu bar and list of error messages (drag down to expand and display)"},
	{0, "", 0, NULL, NULL},
	{5, "FILE_BROWSER", 108, "File Browser", "Browse for files and assets"},
	{0, "", 0, NULL, NULL},
	{18, "CONSOLE", 121, "Python Console", "Interactive programmatic console for advanced editing and script development"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMap_space_type = {
	{(PropertyRNA *)&rna_KeyMap_region_type, (PropertyRNA *)&rna_KeyMap_name,
	-1, "space_type", 2, "Space Type",
	"Optional space type keymap is associated with",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMap_space_type_get, NULL, NULL, NULL, NULL, NULL, rna_KeyMap_space_type_items, 23, 0
};

static EnumPropertyItem rna_KeyMap_region_type_items[9] = {
	{0, "WINDOW", 0, "Window", ""},
	{1, "HEADER", 0, "Header", ""},
	{2, "CHANNELS", 0, "Channels", ""},
	{3, "TEMPORARY", 0, "Temporary", ""},
	{4, "UI", 0, "UI", ""},
	{5, "TOOLS", 0, "Tools", ""},
	{6, "TOOL_PROPS", 0, "Tool Properties", ""},
	{7, "PREVIEW", 0, "Preview", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMap_region_type = {
	{(PropertyRNA *)&rna_KeyMap_keymap_items, (PropertyRNA *)&rna_KeyMap_space_type,
	-1, "region_type", 2, "Region Type",
	"Optional region type keymap is associated with",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMap_region_type_get, NULL, NULL, NULL, NULL, NULL, rna_KeyMap_region_type_items, 8, 0
};

CollectionPropertyRNA rna_KeyMap_keymap_items = {
	{(PropertyRNA *)&rna_KeyMap_is_user_modified, (PropertyRNA *)&rna_KeyMap_region_type,
	-1, "keymap_items", 0, "Items",
	"Items in the keymap, linking an operator to an input event",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_KeyMapItems},
	KeyMap_keymap_items_begin, KeyMap_keymap_items_next, KeyMap_keymap_items_end, KeyMap_keymap_items_get, NULL, KeyMap_keymap_items_lookup_int, KeyMap_keymap_items_lookup_string, NULL, &RNA_KeyMapItem
};

BoolPropertyRNA rna_KeyMap_is_user_modified = {
	{(PropertyRNA *)&rna_KeyMap_is_modal, (PropertyRNA *)&rna_KeyMap_keymap_items,
	-1, "is_user_modified", 3, "User Defined",
	"Keymap is defined by the user",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMap_is_user_modified_get, KeyMap_is_user_modified_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyMap_is_modal = {
	{(PropertyRNA *)&rna_KeyMap_show_expanded_items, (PropertyRNA *)&rna_KeyMap_is_user_modified,
	-1, "is_modal", 2, "Modal Keymap",
	"Indicates that a keymap is used for translate modal events for an operator",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMap_is_modal_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyMap_show_expanded_items = {
	{(PropertyRNA *)&rna_KeyMap_show_expanded_children, (PropertyRNA *)&rna_KeyMap_is_modal,
	-1, "show_expanded_items", 4099, "Items Expanded",
	"Expanded in the user interface",
	4, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMap_show_expanded_items_get, KeyMap_show_expanded_items_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyMap_show_expanded_children = {
	{NULL, (PropertyRNA *)&rna_KeyMap_show_expanded_items,
	-1, "show_expanded_children", 4099, "Children Expanded",
	"Children expanded in the user interface",
	4, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMap_show_expanded_children_get, KeyMap_show_expanded_children_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_KeyMap_active_keymap = {
	{NULL, NULL,
	-1, "keymap", 8388616, "Key Map",
	"Active key map",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMap
};

FunctionRNA rna_KeyMap_active_func = {
	{(FunctionRNA *)&rna_KeyMap_restore_to_default_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_KeyMap_active_keymap, (PropertyRNA *)&rna_KeyMap_active_keymap}},
	"active", 8, "active",
	KeyMap_active_call,
	(PropertyRNA *)&rna_KeyMap_active_keymap
};

FunctionRNA rna_KeyMap_restore_to_default_func = {
	{(FunctionRNA *)&rna_KeyMap_restore_item_to_default_func, (FunctionRNA *)&rna_KeyMap_active_func,
	NULL,
	{NULL, NULL}},
	"restore_to_default", 8, "restore_to_default",
	KeyMap_restore_to_default_call,
	NULL
};

PointerPropertyRNA rna_KeyMap_restore_item_to_default_item = {
	{NULL, NULL,
	-1, "item", 8650756, "Item",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMapItem
};

FunctionRNA rna_KeyMap_restore_item_to_default_func = {
	{NULL, (FunctionRNA *)&rna_KeyMap_restore_to_default_func,
	NULL,
	{(PropertyRNA *)&rna_KeyMap_restore_item_to_default_item, (PropertyRNA *)&rna_KeyMap_restore_item_to_default_item}},
	"restore_item_to_default", 8, "restore_item_to_default",
	KeyMap_restore_item_to_default_call,
	NULL
};

StructRNA RNA_KeyMap = {
	{(ContainerRNA *)&RNA_KeyMapItems, (ContainerRNA *)&RNA_KeyMaps,
	NULL,
	{(PropertyRNA *)&rna_KeyMap_rna_properties, (PropertyRNA *)&rna_KeyMap_show_expanded_children}},
	"KeyMap", NULL, NULL, 4, "Key Map",
	"Input configuration, including keymaps",
	"*", 17,
	(PropertyRNA *)&rna_KeyMap_name, (PropertyRNA *)&rna_KeyMap_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_KeyMap_active_func, (FunctionRNA *)&rna_KeyMap_restore_item_to_default_func}
};

/* KeyMap Items */
CollectionPropertyRNA rna_KeyMapItems_rna_properties = {
	{(PropertyRNA *)&rna_KeyMapItems_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItems_rna_properties_begin, KeyMapItems_rna_properties_next, KeyMapItems_rna_properties_end, KeyMapItems_rna_properties_get, NULL, NULL, KeyMapItems_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_KeyMapItems_rna_type = {
	{NULL, (PropertyRNA *)&rna_KeyMapItems_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItems_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_KeyMapItems_new_idname = {
	{(PropertyRNA *)&rna_KeyMapItems_new_type, NULL,
	-1, "idname", 262149, "Operator Identifier",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

static EnumPropertyItem rna_KeyMapItems_new_type_items[196] = {
	{0, "NONE", 0, "", ""},
	{1, "LEFTMOUSE", 0, "Left Mouse", ""},
	{2, "MIDDLEMOUSE", 0, "Middle Mouse", ""},
	{3, "RIGHTMOUSE", 0, "Right Mouse", ""},
	{7, "BUTTON4MOUSE", 0, "Button4 Mouse", ""},
	{8, "BUTTON5MOUSE", 0, "Button5 Mouse", ""},
	{18, "BUTTON6MOUSE", 0, "Button6 Mouse", ""},
	{19, "BUTTON7MOUSE", 0, "Button7 Mouse", ""},
	{5, "ACTIONMOUSE", 0, "Action Mouse", ""},
	{6, "SELECTMOUSE", 0, "Select Mouse", ""},
	{0, "", 0, NULL, NULL},
	{4, "MOUSEMOVE", 0, "Mouse Move", ""},
	{17, "INBETWEEN_MOUSEMOVE", 0, "In-between Move", ""},
	{14, "TRACKPADPAN", 0, "Mouse/Trackpad Pan", ""},
	{15, "TRACKPADZOOM", 0, "Mouse/Trackpad Zoom", ""},
	{16, "MOUSEROTATE", 0, "Mouse/Trackpad Rotate", ""},
	{0, "", 0, NULL, NULL},
	{10, "WHEELUPMOUSE", 0, "Wheel Up", ""},
	{11, "WHEELDOWNMOUSE", 0, "Wheel Down", ""},
	{12, "WHEELINMOUSE", 0, "Wheel In", ""},
	{13, "WHEELOUTMOUSE", 0, "Wheel Out", ""},
	{0, "", 0, NULL, NULL},
	{20483, "EVT_TWEAK_L", 0, "Tweak Left", ""},
	{20484, "EVT_TWEAK_M", 0, "Tweak Middle", ""},
	{20485, "EVT_TWEAK_R", 0, "Tweak Right", ""},
	{20486, "EVT_TWEAK_A", 0, "Tweak Action", ""},
	{20487, "EVT_TWEAK_S", 0, "Tweak Select", ""},
	{0, "", 0, NULL, NULL},
	{97, "A", 0, "A", ""},
	{98, "B", 0, "B", ""},
	{99, "C", 0, "C", ""},
	{100, "D", 0, "D", ""},
	{101, "E", 0, "E", ""},
	{102, "F", 0, "F", ""},
	{103, "G", 0, "G", ""},
	{104, "H", 0, "H", ""},
	{105, "I", 0, "I", ""},
	{106, "J", 0, "J", ""},
	{107, "K", 0, "K", ""},
	{108, "L", 0, "L", ""},
	{109, "M", 0, "M", ""},
	{110, "N", 0, "N", ""},
	{111, "O", 0, "O", ""},
	{112, "P", 0, "P", ""},
	{113, "Q", 0, "Q", ""},
	{114, "R", 0, "R", ""},
	{115, "S", 0, "S", ""},
	{116, "T", 0, "T", ""},
	{117, "U", 0, "U", ""},
	{118, "V", 0, "V", ""},
	{119, "W", 0, "W", ""},
	{120, "X", 0, "X", ""},
	{121, "Y", 0, "Y", ""},
	{122, "Z", 0, "Z", ""},
	{0, "", 0, NULL, NULL},
	{48, "ZERO", 0, "0", ""},
	{49, "ONE", 0, "1", ""},
	{50, "TWO", 0, "2", ""},
	{51, "THREE", 0, "3", ""},
	{52, "FOUR", 0, "4", ""},
	{53, "FIVE", 0, "5", ""},
	{54, "SIX", 0, "6", ""},
	{55, "SEVEN", 0, "7", ""},
	{56, "EIGHT", 0, "8", ""},
	{57, "NINE", 0, "9", ""},
	{0, "", 0, NULL, NULL},
	{212, "LEFT_CTRL", 0, "Left Ctrl", ""},
	{213, "LEFT_ALT", 0, "Left Alt", ""},
	{217, "LEFT_SHIFT", 0, "Left Shift", ""},
	{214, "RIGHT_ALT", 0, "Right Alt", ""},
	{215, "RIGHT_CTRL", 0, "Right Ctrl", ""},
	{216, "RIGHT_SHIFT", 0, "Right Shift", ""},
	{0, "", 0, NULL, NULL},
	{172, "OSKEY", 0, "OS Key", ""},
	{173, "GRLESS", 0, "Grless", ""},
	{218, "ESC", 0, "Esc", ""},
	{219, "TAB", 0, "Tab", ""},
	{220, "RET", 0, "Return", ""},
	{221, "SPACE", 0, "Spacebar", ""},
	{222, "LINE_FEED", 0, "Line Feed", ""},
	{223, "BACK_SPACE", 0, "Back Space", ""},
	{224, "DEL", 0, "Delete", ""},
	{225, "SEMI_COLON", 0, ";", ""},
	{226, "PERIOD", 0, ".", ""},
	{227, "COMMA", 0, ",", ""},
	{228, "QUOTE", 0, "\"", ""},
	{229, "ACCENT_GRAVE", 0, "`", ""},
	{230, "MINUS", 0, "-", ""},
	{232, "SLASH", 0, "/", ""},
	{233, "BACK_SLASH", 0, "\\", ""},
	{234, "EQUAL", 0, "=", ""},
	{235, "LEFT_BRACKET", 0, "[", ""},
	{236, "RIGHT_BRACKET", 0, "]", ""},
	{137, "LEFT_ARROW", 0, "Left Arrow", ""},
	{138, "DOWN_ARROW", 0, "Down Arrow", ""},
	{139, "RIGHT_ARROW", 0, "Right Arrow", ""},
	{140, "UP_ARROW", 0, "Up Arrow", ""},
	{152, "NUMPAD_2", 0, "Numpad 2", ""},
	{154, "NUMPAD_4", 0, "Numpad 4", ""},
	{156, "NUMPAD_6", 0, "Numpad 6", ""},
	{158, "NUMPAD_8", 0, "Numpad 8", ""},
	{151, "NUMPAD_1", 0, "Numpad 1", ""},
	{153, "NUMPAD_3", 0, "Numpad 3", ""},
	{155, "NUMPAD_5", 0, "Numpad 5", ""},
	{157, "NUMPAD_7", 0, "Numpad 7", ""},
	{159, "NUMPAD_9", 0, "Numpad 9", ""},
	{199, "NUMPAD_PERIOD", 0, "Numpad .", ""},
	{161, "NUMPAD_SLASH", 0, "Numpad /", ""},
	{160, "NUMPAD_ASTERIX", 0, "Numpad *", ""},
	{150, "NUMPAD_0", 0, "Numpad 0", ""},
	{162, "NUMPAD_MINUS", 0, "Numpad -", ""},
	{163, "NUMPAD_ENTER", 0, "Numpad Enter", ""},
	{164, "NUMPAD_PLUS", 0, "Numpad +", ""},
	{300, "F1", 0, "F1", ""},
	{301, "F2", 0, "F2", ""},
	{302, "F3", 0, "F3", ""},
	{303, "F4", 0, "F4", ""},
	{304, "F5", 0, "F5", ""},
	{305, "F6", 0, "F6", ""},
	{306, "F7", 0, "F7", ""},
	{307, "F8", 0, "F8", ""},
	{308, "F9", 0, "F9", ""},
	{309, "F10", 0, "F10", ""},
	{310, "F11", 0, "F11", ""},
	{311, "F12", 0, "F12", ""},
	{312, "F13", 0, "F13", ""},
	{313, "F14", 0, "F14", ""},
	{314, "F15", 0, "F15", ""},
	{315, "F16", 0, "F16", ""},
	{316, "F17", 0, "F17", ""},
	{317, "F18", 0, "F18", ""},
	{318, "F19", 0, "F19", ""},
	{165, "PAUSE", 0, "Pause", ""},
	{166, "INSERT", 0, "Insert", ""},
	{167, "HOME", 0, "Home", ""},
	{168, "PAGE_UP", 0, "Page Up", ""},
	{169, "PAGE_DOWN", 0, "Page Down", ""},
	{170, "END", 0, "End", ""},
	{0, "", 0, NULL, NULL},
	{174, "MEDIA_PLAY", 0, "Media Play/Pause", ""},
	{175, "MEDIA_STOP", 0, "Media Stop", ""},
	{176, "MEDIA_FIRST", 0, "Media First", ""},
	{177, "MEDIA_LAST", 0, "Media Last", ""},
	{0, "", 0, NULL, NULL},
	{-2, "TEXTINPUT", 0, "Text Input", ""},
	{0, "", 0, NULL, NULL},
	{260, "WINDOW_DEACTIVATE", 0, "Window Deactivate", ""},
	{272, "TIMER", 0, "Timer", ""},
	{273, "TIMER0", 0, "Timer 0", ""},
	{274, "TIMER1", 0, "Timer 1", ""},
	{275, "TIMER2", 0, "Timer 2", ""},
	{276, "TIMER_JOBS", 0, "Timer Jobs", ""},
	{277, "TIMER_AUTOSAVE", 0, "Timer Autosave", ""},
	{278, "TIMER_REPORT", 0, "Timer Report", ""},
	{279, "TIMERREGION", 0, "Timer Region", ""},
	{0, "", 0, NULL, NULL},
	{400, "NDOF_MOTION", 0, "NDOF Motion", ""},
	{401, "NDOF_BUTTON_MENU", 0, "NDOF Menu", ""},
	{402, "NDOF_BUTTON_FIT", 0, "NDOF Fit", ""},
	{403, "NDOF_BUTTON_TOP", 0, "NDOF Top", ""},
	{404, "NDOF_BUTTON_BOTTOM", 0, "NDOF Bottom", ""},
	{405, "NDOF_BUTTON_LEFT", 0, "NDOF Left", ""},
	{406, "NDOF_BUTTON_RIGHT", 0, "NDOF Right", ""},
	{407, "NDOF_BUTTON_FRONT", 0, "NDOF Front", ""},
	{408, "NDOF_BUTTON_BACK", 0, "NDOF Back", ""},
	{409, "NDOF_BUTTON_ISO1", 0, "NDOF Isometric 1", ""},
	{410, "NDOF_BUTTON_ISO2", 0, "NDOF Isometric 2", ""},
	{411, "NDOF_BUTTON_ROLL_CW", 0, "NDOF Roll CW", ""},
	{412, "NDOF_BUTTON_ROLL_CCW", 0, "NDOF Roll CCW", ""},
	{413, "NDOF_BUTTON_SPIN_CW", 0, "NDOF Spin CW", ""},
	{414, "NDOF_BUTTON_SPIN_CCW", 0, "NDOF Spin CCW", ""},
	{415, "NDOF_BUTTON_TILT_CW", 0, "NDOF Tilt CW", ""},
	{416, "NDOF_BUTTON_TILT_CCW", 0, "NDOF Tilt CCW", ""},
	{417, "NDOF_BUTTON_ROTATE", 0, "NDOF Rotate", ""},
	{418, "NDOF_BUTTON_PANZOOM", 0, "NDOF Pan/Zoom", ""},
	{419, "NDOF_BUTTON_DOMINANT", 0, "NDOF Dominant", ""},
	{420, "NDOF_BUTTON_PLUS", 0, "NDOF Plus", ""},
	{421, "NDOF_BUTTON_MINUS", 0, "NDOF Minus", ""},
	{422, "NDOF_BUTTON_ESC", 0, "NDOF Esc", NULL},
	{423, "NDOF_BUTTON_ALT", 0, "NDOF Alt", NULL},
	{424, "NDOF_BUTTON_SHIFT", 0, "NDOF Shift", NULL},
	{425, "NDOF_BUTTON_CTRL", 0, "NDOF Ctrl", NULL},
	{426, "NDOF_BUTTON_1", 0, "NDOF Button 1", ""},
	{427, "NDOF_BUTTON_2", 0, "NDOF Button 2", ""},
	{428, "NDOF_BUTTON_3", 0, "NDOF Button 3", ""},
	{429, "NDOF_BUTTON_4", 0, "NDOF Button 4", ""},
	{430, "NDOF_BUTTON_5", 0, "NDOF Button 5", ""},
	{431, "NDOF_BUTTON_6", 0, "NDOF Button 6", ""},
	{432, "NDOF_BUTTON_7", 0, "NDOF Button 7", ""},
	{433, "NDOF_BUTTON_8", 0, "NDOF Button 8", ""},
	{434, "NDOF_BUTTON_9", 0, "NDOF Button 9", ""},
	{435, "NDOF_BUTTON_10", 0, "NDOF Button 10", ""},
	{436, "NDOF_BUTTON_A", 0, "NDOF Button A", ""},
	{437, "NDOF_BUTTON_B", 0, "NDOF Button B", ""},
	{438, "NDOF_BUTTON_C", 0, "NDOF Button C", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMapItems_new_type = {
	{(PropertyRNA *)&rna_KeyMapItems_new_value, (PropertyRNA *)&rna_KeyMapItems_new_idname,
	-1, "type", 7, "Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_KeyMapItems_new_type_items, 195, 0
};

static EnumPropertyItem rna_KeyMapItems_new_value_items[15] = {
	{-1, "ANY", 0, "Any", ""},
	{0, "NOTHING", 0, "Nothing", ""},
	{1, "PRESS", 0, "Press", ""},
	{2, "RELEASE", 0, "Release", ""},
	{3, "CLICK", 0, "Click", ""},
	{4, "DOUBLE_CLICK", 0, "Double Click", ""},
	{1, "NORTH", 0, "North", ""},
	{2, "NORTH_EAST", 0, "North-East", ""},
	{3, "EAST", 0, "East", ""},
	{4, "SOUTH_EAST", 0, "South-East", ""},
	{5, "SOUTH", 0, "South", ""},
	{6, "SOUTH_WEST", 0, "South-West", ""},
	{7, "WEST", 0, "West", ""},
	{8, "NORTH_WEST", 0, "North-West", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMapItems_new_value = {
	{(PropertyRNA *)&rna_KeyMapItems_new_any, (PropertyRNA *)&rna_KeyMapItems_new_type,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_KeyMapItems_new_value_items, 14, 0
};

BoolPropertyRNA rna_KeyMapItems_new_any = {
	{(PropertyRNA *)&rna_KeyMapItems_new_shift, (PropertyRNA *)&rna_KeyMapItems_new_value,
	-1, "any", 3, "Any",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyMapItems_new_shift = {
	{(PropertyRNA *)&rna_KeyMapItems_new_ctrl, (PropertyRNA *)&rna_KeyMapItems_new_any,
	-1, "shift", 3, "Shift",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyMapItems_new_ctrl = {
	{(PropertyRNA *)&rna_KeyMapItems_new_alt, (PropertyRNA *)&rna_KeyMapItems_new_shift,
	-1, "ctrl", 3, "Ctrl",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyMapItems_new_alt = {
	{(PropertyRNA *)&rna_KeyMapItems_new_oskey, (PropertyRNA *)&rna_KeyMapItems_new_ctrl,
	-1, "alt", 3, "Alt",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyMapItems_new_oskey = {
	{(PropertyRNA *)&rna_KeyMapItems_new_key_modifier, (PropertyRNA *)&rna_KeyMapItems_new_alt,
	-1, "oskey", 3, "OS Key",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_KeyMapItems_new_key_modifier_items[196] = {
	{0, "NONE", 0, "", ""},
	{1, "LEFTMOUSE", 0, "Left Mouse", ""},
	{2, "MIDDLEMOUSE", 0, "Middle Mouse", ""},
	{3, "RIGHTMOUSE", 0, "Right Mouse", ""},
	{7, "BUTTON4MOUSE", 0, "Button4 Mouse", ""},
	{8, "BUTTON5MOUSE", 0, "Button5 Mouse", ""},
	{18, "BUTTON6MOUSE", 0, "Button6 Mouse", ""},
	{19, "BUTTON7MOUSE", 0, "Button7 Mouse", ""},
	{5, "ACTIONMOUSE", 0, "Action Mouse", ""},
	{6, "SELECTMOUSE", 0, "Select Mouse", ""},
	{0, "", 0, NULL, NULL},
	{4, "MOUSEMOVE", 0, "Mouse Move", ""},
	{17, "INBETWEEN_MOUSEMOVE", 0, "In-between Move", ""},
	{14, "TRACKPADPAN", 0, "Mouse/Trackpad Pan", ""},
	{15, "TRACKPADZOOM", 0, "Mouse/Trackpad Zoom", ""},
	{16, "MOUSEROTATE", 0, "Mouse/Trackpad Rotate", ""},
	{0, "", 0, NULL, NULL},
	{10, "WHEELUPMOUSE", 0, "Wheel Up", ""},
	{11, "WHEELDOWNMOUSE", 0, "Wheel Down", ""},
	{12, "WHEELINMOUSE", 0, "Wheel In", ""},
	{13, "WHEELOUTMOUSE", 0, "Wheel Out", ""},
	{0, "", 0, NULL, NULL},
	{20483, "EVT_TWEAK_L", 0, "Tweak Left", ""},
	{20484, "EVT_TWEAK_M", 0, "Tweak Middle", ""},
	{20485, "EVT_TWEAK_R", 0, "Tweak Right", ""},
	{20486, "EVT_TWEAK_A", 0, "Tweak Action", ""},
	{20487, "EVT_TWEAK_S", 0, "Tweak Select", ""},
	{0, "", 0, NULL, NULL},
	{97, "A", 0, "A", ""},
	{98, "B", 0, "B", ""},
	{99, "C", 0, "C", ""},
	{100, "D", 0, "D", ""},
	{101, "E", 0, "E", ""},
	{102, "F", 0, "F", ""},
	{103, "G", 0, "G", ""},
	{104, "H", 0, "H", ""},
	{105, "I", 0, "I", ""},
	{106, "J", 0, "J", ""},
	{107, "K", 0, "K", ""},
	{108, "L", 0, "L", ""},
	{109, "M", 0, "M", ""},
	{110, "N", 0, "N", ""},
	{111, "O", 0, "O", ""},
	{112, "P", 0, "P", ""},
	{113, "Q", 0, "Q", ""},
	{114, "R", 0, "R", ""},
	{115, "S", 0, "S", ""},
	{116, "T", 0, "T", ""},
	{117, "U", 0, "U", ""},
	{118, "V", 0, "V", ""},
	{119, "W", 0, "W", ""},
	{120, "X", 0, "X", ""},
	{121, "Y", 0, "Y", ""},
	{122, "Z", 0, "Z", ""},
	{0, "", 0, NULL, NULL},
	{48, "ZERO", 0, "0", ""},
	{49, "ONE", 0, "1", ""},
	{50, "TWO", 0, "2", ""},
	{51, "THREE", 0, "3", ""},
	{52, "FOUR", 0, "4", ""},
	{53, "FIVE", 0, "5", ""},
	{54, "SIX", 0, "6", ""},
	{55, "SEVEN", 0, "7", ""},
	{56, "EIGHT", 0, "8", ""},
	{57, "NINE", 0, "9", ""},
	{0, "", 0, NULL, NULL},
	{212, "LEFT_CTRL", 0, "Left Ctrl", ""},
	{213, "LEFT_ALT", 0, "Left Alt", ""},
	{217, "LEFT_SHIFT", 0, "Left Shift", ""},
	{214, "RIGHT_ALT", 0, "Right Alt", ""},
	{215, "RIGHT_CTRL", 0, "Right Ctrl", ""},
	{216, "RIGHT_SHIFT", 0, "Right Shift", ""},
	{0, "", 0, NULL, NULL},
	{172, "OSKEY", 0, "OS Key", ""},
	{173, "GRLESS", 0, "Grless", ""},
	{218, "ESC", 0, "Esc", ""},
	{219, "TAB", 0, "Tab", ""},
	{220, "RET", 0, "Return", ""},
	{221, "SPACE", 0, "Spacebar", ""},
	{222, "LINE_FEED", 0, "Line Feed", ""},
	{223, "BACK_SPACE", 0, "Back Space", ""},
	{224, "DEL", 0, "Delete", ""},
	{225, "SEMI_COLON", 0, ";", ""},
	{226, "PERIOD", 0, ".", ""},
	{227, "COMMA", 0, ",", ""},
	{228, "QUOTE", 0, "\"", ""},
	{229, "ACCENT_GRAVE", 0, "`", ""},
	{230, "MINUS", 0, "-", ""},
	{232, "SLASH", 0, "/", ""},
	{233, "BACK_SLASH", 0, "\\", ""},
	{234, "EQUAL", 0, "=", ""},
	{235, "LEFT_BRACKET", 0, "[", ""},
	{236, "RIGHT_BRACKET", 0, "]", ""},
	{137, "LEFT_ARROW", 0, "Left Arrow", ""},
	{138, "DOWN_ARROW", 0, "Down Arrow", ""},
	{139, "RIGHT_ARROW", 0, "Right Arrow", ""},
	{140, "UP_ARROW", 0, "Up Arrow", ""},
	{152, "NUMPAD_2", 0, "Numpad 2", ""},
	{154, "NUMPAD_4", 0, "Numpad 4", ""},
	{156, "NUMPAD_6", 0, "Numpad 6", ""},
	{158, "NUMPAD_8", 0, "Numpad 8", ""},
	{151, "NUMPAD_1", 0, "Numpad 1", ""},
	{153, "NUMPAD_3", 0, "Numpad 3", ""},
	{155, "NUMPAD_5", 0, "Numpad 5", ""},
	{157, "NUMPAD_7", 0, "Numpad 7", ""},
	{159, "NUMPAD_9", 0, "Numpad 9", ""},
	{199, "NUMPAD_PERIOD", 0, "Numpad .", ""},
	{161, "NUMPAD_SLASH", 0, "Numpad /", ""},
	{160, "NUMPAD_ASTERIX", 0, "Numpad *", ""},
	{150, "NUMPAD_0", 0, "Numpad 0", ""},
	{162, "NUMPAD_MINUS", 0, "Numpad -", ""},
	{163, "NUMPAD_ENTER", 0, "Numpad Enter", ""},
	{164, "NUMPAD_PLUS", 0, "Numpad +", ""},
	{300, "F1", 0, "F1", ""},
	{301, "F2", 0, "F2", ""},
	{302, "F3", 0, "F3", ""},
	{303, "F4", 0, "F4", ""},
	{304, "F5", 0, "F5", ""},
	{305, "F6", 0, "F6", ""},
	{306, "F7", 0, "F7", ""},
	{307, "F8", 0, "F8", ""},
	{308, "F9", 0, "F9", ""},
	{309, "F10", 0, "F10", ""},
	{310, "F11", 0, "F11", ""},
	{311, "F12", 0, "F12", ""},
	{312, "F13", 0, "F13", ""},
	{313, "F14", 0, "F14", ""},
	{314, "F15", 0, "F15", ""},
	{315, "F16", 0, "F16", ""},
	{316, "F17", 0, "F17", ""},
	{317, "F18", 0, "F18", ""},
	{318, "F19", 0, "F19", ""},
	{165, "PAUSE", 0, "Pause", ""},
	{166, "INSERT", 0, "Insert", ""},
	{167, "HOME", 0, "Home", ""},
	{168, "PAGE_UP", 0, "Page Up", ""},
	{169, "PAGE_DOWN", 0, "Page Down", ""},
	{170, "END", 0, "End", ""},
	{0, "", 0, NULL, NULL},
	{174, "MEDIA_PLAY", 0, "Media Play/Pause", ""},
	{175, "MEDIA_STOP", 0, "Media Stop", ""},
	{176, "MEDIA_FIRST", 0, "Media First", ""},
	{177, "MEDIA_LAST", 0, "Media Last", ""},
	{0, "", 0, NULL, NULL},
	{-2, "TEXTINPUT", 0, "Text Input", ""},
	{0, "", 0, NULL, NULL},
	{260, "WINDOW_DEACTIVATE", 0, "Window Deactivate", ""},
	{272, "TIMER", 0, "Timer", ""},
	{273, "TIMER0", 0, "Timer 0", ""},
	{274, "TIMER1", 0, "Timer 1", ""},
	{275, "TIMER2", 0, "Timer 2", ""},
	{276, "TIMER_JOBS", 0, "Timer Jobs", ""},
	{277, "TIMER_AUTOSAVE", 0, "Timer Autosave", ""},
	{278, "TIMER_REPORT", 0, "Timer Report", ""},
	{279, "TIMERREGION", 0, "Timer Region", ""},
	{0, "", 0, NULL, NULL},
	{400, "NDOF_MOTION", 0, "NDOF Motion", ""},
	{401, "NDOF_BUTTON_MENU", 0, "NDOF Menu", ""},
	{402, "NDOF_BUTTON_FIT", 0, "NDOF Fit", ""},
	{403, "NDOF_BUTTON_TOP", 0, "NDOF Top", ""},
	{404, "NDOF_BUTTON_BOTTOM", 0, "NDOF Bottom", ""},
	{405, "NDOF_BUTTON_LEFT", 0, "NDOF Left", ""},
	{406, "NDOF_BUTTON_RIGHT", 0, "NDOF Right", ""},
	{407, "NDOF_BUTTON_FRONT", 0, "NDOF Front", ""},
	{408, "NDOF_BUTTON_BACK", 0, "NDOF Back", ""},
	{409, "NDOF_BUTTON_ISO1", 0, "NDOF Isometric 1", ""},
	{410, "NDOF_BUTTON_ISO2", 0, "NDOF Isometric 2", ""},
	{411, "NDOF_BUTTON_ROLL_CW", 0, "NDOF Roll CW", ""},
	{412, "NDOF_BUTTON_ROLL_CCW", 0, "NDOF Roll CCW", ""},
	{413, "NDOF_BUTTON_SPIN_CW", 0, "NDOF Spin CW", ""},
	{414, "NDOF_BUTTON_SPIN_CCW", 0, "NDOF Spin CCW", ""},
	{415, "NDOF_BUTTON_TILT_CW", 0, "NDOF Tilt CW", ""},
	{416, "NDOF_BUTTON_TILT_CCW", 0, "NDOF Tilt CCW", ""},
	{417, "NDOF_BUTTON_ROTATE", 0, "NDOF Rotate", ""},
	{418, "NDOF_BUTTON_PANZOOM", 0, "NDOF Pan/Zoom", ""},
	{419, "NDOF_BUTTON_DOMINANT", 0, "NDOF Dominant", ""},
	{420, "NDOF_BUTTON_PLUS", 0, "NDOF Plus", ""},
	{421, "NDOF_BUTTON_MINUS", 0, "NDOF Minus", ""},
	{422, "NDOF_BUTTON_ESC", 0, "NDOF Esc", NULL},
	{423, "NDOF_BUTTON_ALT", 0, "NDOF Alt", NULL},
	{424, "NDOF_BUTTON_SHIFT", 0, "NDOF Shift", NULL},
	{425, "NDOF_BUTTON_CTRL", 0, "NDOF Ctrl", NULL},
	{426, "NDOF_BUTTON_1", 0, "NDOF Button 1", ""},
	{427, "NDOF_BUTTON_2", 0, "NDOF Button 2", ""},
	{428, "NDOF_BUTTON_3", 0, "NDOF Button 3", ""},
	{429, "NDOF_BUTTON_4", 0, "NDOF Button 4", ""},
	{430, "NDOF_BUTTON_5", 0, "NDOF Button 5", ""},
	{431, "NDOF_BUTTON_6", 0, "NDOF Button 6", ""},
	{432, "NDOF_BUTTON_7", 0, "NDOF Button 7", ""},
	{433, "NDOF_BUTTON_8", 0, "NDOF Button 8", ""},
	{434, "NDOF_BUTTON_9", 0, "NDOF Button 9", ""},
	{435, "NDOF_BUTTON_10", 0, "NDOF Button 10", ""},
	{436, "NDOF_BUTTON_A", 0, "NDOF Button A", ""},
	{437, "NDOF_BUTTON_B", 0, "NDOF Button B", ""},
	{438, "NDOF_BUTTON_C", 0, "NDOF Button C", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMapItems_new_key_modifier = {
	{(PropertyRNA *)&rna_KeyMapItems_new_head, (PropertyRNA *)&rna_KeyMapItems_new_oskey,
	-1, "key_modifier", 3, "Key Modifier",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_KeyMapItems_new_key_modifier_items, 195, 0
};

BoolPropertyRNA rna_KeyMapItems_new_head = {
	{(PropertyRNA *)&rna_KeyMapItems_new_item, (PropertyRNA *)&rna_KeyMapItems_new_key_modifier,
	-1, "head", 3, "At Head",
	"Force item to be added at start (not end) of key map so that it doesn\'t get blocked by an existing key map item",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_KeyMapItems_new_item = {
	{NULL, (PropertyRNA *)&rna_KeyMapItems_new_head,
	-1, "item", 8388616, "Item",
	"Added key map item",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMapItem
};

FunctionRNA rna_KeyMapItems_new_func = {
	{(FunctionRNA *)&rna_KeyMapItems_new_modal_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_KeyMapItems_new_idname, (PropertyRNA *)&rna_KeyMapItems_new_item}},
	"new", 16, "new",
	KeyMapItems_new_call,
	(PropertyRNA *)&rna_KeyMapItems_new_item
};

StringPropertyRNA rna_KeyMapItems_new_modal_propvalue = {
	{(PropertyRNA *)&rna_KeyMapItems_new_modal_type, NULL,
	-1, "propvalue", 262149, "Property Value",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

static EnumPropertyItem rna_KeyMapItems_new_modal_type_items[196] = {
	{0, "NONE", 0, "", ""},
	{1, "LEFTMOUSE", 0, "Left Mouse", ""},
	{2, "MIDDLEMOUSE", 0, "Middle Mouse", ""},
	{3, "RIGHTMOUSE", 0, "Right Mouse", ""},
	{7, "BUTTON4MOUSE", 0, "Button4 Mouse", ""},
	{8, "BUTTON5MOUSE", 0, "Button5 Mouse", ""},
	{18, "BUTTON6MOUSE", 0, "Button6 Mouse", ""},
	{19, "BUTTON7MOUSE", 0, "Button7 Mouse", ""},
	{5, "ACTIONMOUSE", 0, "Action Mouse", ""},
	{6, "SELECTMOUSE", 0, "Select Mouse", ""},
	{0, "", 0, NULL, NULL},
	{4, "MOUSEMOVE", 0, "Mouse Move", ""},
	{17, "INBETWEEN_MOUSEMOVE", 0, "In-between Move", ""},
	{14, "TRACKPADPAN", 0, "Mouse/Trackpad Pan", ""},
	{15, "TRACKPADZOOM", 0, "Mouse/Trackpad Zoom", ""},
	{16, "MOUSEROTATE", 0, "Mouse/Trackpad Rotate", ""},
	{0, "", 0, NULL, NULL},
	{10, "WHEELUPMOUSE", 0, "Wheel Up", ""},
	{11, "WHEELDOWNMOUSE", 0, "Wheel Down", ""},
	{12, "WHEELINMOUSE", 0, "Wheel In", ""},
	{13, "WHEELOUTMOUSE", 0, "Wheel Out", ""},
	{0, "", 0, NULL, NULL},
	{20483, "EVT_TWEAK_L", 0, "Tweak Left", ""},
	{20484, "EVT_TWEAK_M", 0, "Tweak Middle", ""},
	{20485, "EVT_TWEAK_R", 0, "Tweak Right", ""},
	{20486, "EVT_TWEAK_A", 0, "Tweak Action", ""},
	{20487, "EVT_TWEAK_S", 0, "Tweak Select", ""},
	{0, "", 0, NULL, NULL},
	{97, "A", 0, "A", ""},
	{98, "B", 0, "B", ""},
	{99, "C", 0, "C", ""},
	{100, "D", 0, "D", ""},
	{101, "E", 0, "E", ""},
	{102, "F", 0, "F", ""},
	{103, "G", 0, "G", ""},
	{104, "H", 0, "H", ""},
	{105, "I", 0, "I", ""},
	{106, "J", 0, "J", ""},
	{107, "K", 0, "K", ""},
	{108, "L", 0, "L", ""},
	{109, "M", 0, "M", ""},
	{110, "N", 0, "N", ""},
	{111, "O", 0, "O", ""},
	{112, "P", 0, "P", ""},
	{113, "Q", 0, "Q", ""},
	{114, "R", 0, "R", ""},
	{115, "S", 0, "S", ""},
	{116, "T", 0, "T", ""},
	{117, "U", 0, "U", ""},
	{118, "V", 0, "V", ""},
	{119, "W", 0, "W", ""},
	{120, "X", 0, "X", ""},
	{121, "Y", 0, "Y", ""},
	{122, "Z", 0, "Z", ""},
	{0, "", 0, NULL, NULL},
	{48, "ZERO", 0, "0", ""},
	{49, "ONE", 0, "1", ""},
	{50, "TWO", 0, "2", ""},
	{51, "THREE", 0, "3", ""},
	{52, "FOUR", 0, "4", ""},
	{53, "FIVE", 0, "5", ""},
	{54, "SIX", 0, "6", ""},
	{55, "SEVEN", 0, "7", ""},
	{56, "EIGHT", 0, "8", ""},
	{57, "NINE", 0, "9", ""},
	{0, "", 0, NULL, NULL},
	{212, "LEFT_CTRL", 0, "Left Ctrl", ""},
	{213, "LEFT_ALT", 0, "Left Alt", ""},
	{217, "LEFT_SHIFT", 0, "Left Shift", ""},
	{214, "RIGHT_ALT", 0, "Right Alt", ""},
	{215, "RIGHT_CTRL", 0, "Right Ctrl", ""},
	{216, "RIGHT_SHIFT", 0, "Right Shift", ""},
	{0, "", 0, NULL, NULL},
	{172, "OSKEY", 0, "OS Key", ""},
	{173, "GRLESS", 0, "Grless", ""},
	{218, "ESC", 0, "Esc", ""},
	{219, "TAB", 0, "Tab", ""},
	{220, "RET", 0, "Return", ""},
	{221, "SPACE", 0, "Spacebar", ""},
	{222, "LINE_FEED", 0, "Line Feed", ""},
	{223, "BACK_SPACE", 0, "Back Space", ""},
	{224, "DEL", 0, "Delete", ""},
	{225, "SEMI_COLON", 0, ";", ""},
	{226, "PERIOD", 0, ".", ""},
	{227, "COMMA", 0, ",", ""},
	{228, "QUOTE", 0, "\"", ""},
	{229, "ACCENT_GRAVE", 0, "`", ""},
	{230, "MINUS", 0, "-", ""},
	{232, "SLASH", 0, "/", ""},
	{233, "BACK_SLASH", 0, "\\", ""},
	{234, "EQUAL", 0, "=", ""},
	{235, "LEFT_BRACKET", 0, "[", ""},
	{236, "RIGHT_BRACKET", 0, "]", ""},
	{137, "LEFT_ARROW", 0, "Left Arrow", ""},
	{138, "DOWN_ARROW", 0, "Down Arrow", ""},
	{139, "RIGHT_ARROW", 0, "Right Arrow", ""},
	{140, "UP_ARROW", 0, "Up Arrow", ""},
	{152, "NUMPAD_2", 0, "Numpad 2", ""},
	{154, "NUMPAD_4", 0, "Numpad 4", ""},
	{156, "NUMPAD_6", 0, "Numpad 6", ""},
	{158, "NUMPAD_8", 0, "Numpad 8", ""},
	{151, "NUMPAD_1", 0, "Numpad 1", ""},
	{153, "NUMPAD_3", 0, "Numpad 3", ""},
	{155, "NUMPAD_5", 0, "Numpad 5", ""},
	{157, "NUMPAD_7", 0, "Numpad 7", ""},
	{159, "NUMPAD_9", 0, "Numpad 9", ""},
	{199, "NUMPAD_PERIOD", 0, "Numpad .", ""},
	{161, "NUMPAD_SLASH", 0, "Numpad /", ""},
	{160, "NUMPAD_ASTERIX", 0, "Numpad *", ""},
	{150, "NUMPAD_0", 0, "Numpad 0", ""},
	{162, "NUMPAD_MINUS", 0, "Numpad -", ""},
	{163, "NUMPAD_ENTER", 0, "Numpad Enter", ""},
	{164, "NUMPAD_PLUS", 0, "Numpad +", ""},
	{300, "F1", 0, "F1", ""},
	{301, "F2", 0, "F2", ""},
	{302, "F3", 0, "F3", ""},
	{303, "F4", 0, "F4", ""},
	{304, "F5", 0, "F5", ""},
	{305, "F6", 0, "F6", ""},
	{306, "F7", 0, "F7", ""},
	{307, "F8", 0, "F8", ""},
	{308, "F9", 0, "F9", ""},
	{309, "F10", 0, "F10", ""},
	{310, "F11", 0, "F11", ""},
	{311, "F12", 0, "F12", ""},
	{312, "F13", 0, "F13", ""},
	{313, "F14", 0, "F14", ""},
	{314, "F15", 0, "F15", ""},
	{315, "F16", 0, "F16", ""},
	{316, "F17", 0, "F17", ""},
	{317, "F18", 0, "F18", ""},
	{318, "F19", 0, "F19", ""},
	{165, "PAUSE", 0, "Pause", ""},
	{166, "INSERT", 0, "Insert", ""},
	{167, "HOME", 0, "Home", ""},
	{168, "PAGE_UP", 0, "Page Up", ""},
	{169, "PAGE_DOWN", 0, "Page Down", ""},
	{170, "END", 0, "End", ""},
	{0, "", 0, NULL, NULL},
	{174, "MEDIA_PLAY", 0, "Media Play/Pause", ""},
	{175, "MEDIA_STOP", 0, "Media Stop", ""},
	{176, "MEDIA_FIRST", 0, "Media First", ""},
	{177, "MEDIA_LAST", 0, "Media Last", ""},
	{0, "", 0, NULL, NULL},
	{-2, "TEXTINPUT", 0, "Text Input", ""},
	{0, "", 0, NULL, NULL},
	{260, "WINDOW_DEACTIVATE", 0, "Window Deactivate", ""},
	{272, "TIMER", 0, "Timer", ""},
	{273, "TIMER0", 0, "Timer 0", ""},
	{274, "TIMER1", 0, "Timer 1", ""},
	{275, "TIMER2", 0, "Timer 2", ""},
	{276, "TIMER_JOBS", 0, "Timer Jobs", ""},
	{277, "TIMER_AUTOSAVE", 0, "Timer Autosave", ""},
	{278, "TIMER_REPORT", 0, "Timer Report", ""},
	{279, "TIMERREGION", 0, "Timer Region", ""},
	{0, "", 0, NULL, NULL},
	{400, "NDOF_MOTION", 0, "NDOF Motion", ""},
	{401, "NDOF_BUTTON_MENU", 0, "NDOF Menu", ""},
	{402, "NDOF_BUTTON_FIT", 0, "NDOF Fit", ""},
	{403, "NDOF_BUTTON_TOP", 0, "NDOF Top", ""},
	{404, "NDOF_BUTTON_BOTTOM", 0, "NDOF Bottom", ""},
	{405, "NDOF_BUTTON_LEFT", 0, "NDOF Left", ""},
	{406, "NDOF_BUTTON_RIGHT", 0, "NDOF Right", ""},
	{407, "NDOF_BUTTON_FRONT", 0, "NDOF Front", ""},
	{408, "NDOF_BUTTON_BACK", 0, "NDOF Back", ""},
	{409, "NDOF_BUTTON_ISO1", 0, "NDOF Isometric 1", ""},
	{410, "NDOF_BUTTON_ISO2", 0, "NDOF Isometric 2", ""},
	{411, "NDOF_BUTTON_ROLL_CW", 0, "NDOF Roll CW", ""},
	{412, "NDOF_BUTTON_ROLL_CCW", 0, "NDOF Roll CCW", ""},
	{413, "NDOF_BUTTON_SPIN_CW", 0, "NDOF Spin CW", ""},
	{414, "NDOF_BUTTON_SPIN_CCW", 0, "NDOF Spin CCW", ""},
	{415, "NDOF_BUTTON_TILT_CW", 0, "NDOF Tilt CW", ""},
	{416, "NDOF_BUTTON_TILT_CCW", 0, "NDOF Tilt CCW", ""},
	{417, "NDOF_BUTTON_ROTATE", 0, "NDOF Rotate", ""},
	{418, "NDOF_BUTTON_PANZOOM", 0, "NDOF Pan/Zoom", ""},
	{419, "NDOF_BUTTON_DOMINANT", 0, "NDOF Dominant", ""},
	{420, "NDOF_BUTTON_PLUS", 0, "NDOF Plus", ""},
	{421, "NDOF_BUTTON_MINUS", 0, "NDOF Minus", ""},
	{422, "NDOF_BUTTON_ESC", 0, "NDOF Esc", NULL},
	{423, "NDOF_BUTTON_ALT", 0, "NDOF Alt", NULL},
	{424, "NDOF_BUTTON_SHIFT", 0, "NDOF Shift", NULL},
	{425, "NDOF_BUTTON_CTRL", 0, "NDOF Ctrl", NULL},
	{426, "NDOF_BUTTON_1", 0, "NDOF Button 1", ""},
	{427, "NDOF_BUTTON_2", 0, "NDOF Button 2", ""},
	{428, "NDOF_BUTTON_3", 0, "NDOF Button 3", ""},
	{429, "NDOF_BUTTON_4", 0, "NDOF Button 4", ""},
	{430, "NDOF_BUTTON_5", 0, "NDOF Button 5", ""},
	{431, "NDOF_BUTTON_6", 0, "NDOF Button 6", ""},
	{432, "NDOF_BUTTON_7", 0, "NDOF Button 7", ""},
	{433, "NDOF_BUTTON_8", 0, "NDOF Button 8", ""},
	{434, "NDOF_BUTTON_9", 0, "NDOF Button 9", ""},
	{435, "NDOF_BUTTON_10", 0, "NDOF Button 10", ""},
	{436, "NDOF_BUTTON_A", 0, "NDOF Button A", ""},
	{437, "NDOF_BUTTON_B", 0, "NDOF Button B", ""},
	{438, "NDOF_BUTTON_C", 0, "NDOF Button C", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMapItems_new_modal_type = {
	{(PropertyRNA *)&rna_KeyMapItems_new_modal_value, (PropertyRNA *)&rna_KeyMapItems_new_modal_propvalue,
	-1, "type", 7, "Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_KeyMapItems_new_modal_type_items, 195, 0
};

static EnumPropertyItem rna_KeyMapItems_new_modal_value_items[15] = {
	{-1, "ANY", 0, "Any", ""},
	{0, "NOTHING", 0, "Nothing", ""},
	{1, "PRESS", 0, "Press", ""},
	{2, "RELEASE", 0, "Release", ""},
	{3, "CLICK", 0, "Click", ""},
	{4, "DOUBLE_CLICK", 0, "Double Click", ""},
	{1, "NORTH", 0, "North", ""},
	{2, "NORTH_EAST", 0, "North-East", ""},
	{3, "EAST", 0, "East", ""},
	{4, "SOUTH_EAST", 0, "South-East", ""},
	{5, "SOUTH", 0, "South", ""},
	{6, "SOUTH_WEST", 0, "South-West", ""},
	{7, "WEST", 0, "West", ""},
	{8, "NORTH_WEST", 0, "North-West", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMapItems_new_modal_value = {
	{(PropertyRNA *)&rna_KeyMapItems_new_modal_any, (PropertyRNA *)&rna_KeyMapItems_new_modal_type,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_KeyMapItems_new_modal_value_items, 14, 0
};

BoolPropertyRNA rna_KeyMapItems_new_modal_any = {
	{(PropertyRNA *)&rna_KeyMapItems_new_modal_shift, (PropertyRNA *)&rna_KeyMapItems_new_modal_value,
	-1, "any", 3, "Any",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyMapItems_new_modal_shift = {
	{(PropertyRNA *)&rna_KeyMapItems_new_modal_ctrl, (PropertyRNA *)&rna_KeyMapItems_new_modal_any,
	-1, "shift", 3, "Shift",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyMapItems_new_modal_ctrl = {
	{(PropertyRNA *)&rna_KeyMapItems_new_modal_alt, (PropertyRNA *)&rna_KeyMapItems_new_modal_shift,
	-1, "ctrl", 3, "Ctrl",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyMapItems_new_modal_alt = {
	{(PropertyRNA *)&rna_KeyMapItems_new_modal_oskey, (PropertyRNA *)&rna_KeyMapItems_new_modal_ctrl,
	-1, "alt", 3, "Alt",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyMapItems_new_modal_oskey = {
	{(PropertyRNA *)&rna_KeyMapItems_new_modal_key_modifier, (PropertyRNA *)&rna_KeyMapItems_new_modal_alt,
	-1, "oskey", 3, "OS Key",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_KeyMapItems_new_modal_key_modifier_items[196] = {
	{0, "NONE", 0, "", ""},
	{1, "LEFTMOUSE", 0, "Left Mouse", ""},
	{2, "MIDDLEMOUSE", 0, "Middle Mouse", ""},
	{3, "RIGHTMOUSE", 0, "Right Mouse", ""},
	{7, "BUTTON4MOUSE", 0, "Button4 Mouse", ""},
	{8, "BUTTON5MOUSE", 0, "Button5 Mouse", ""},
	{18, "BUTTON6MOUSE", 0, "Button6 Mouse", ""},
	{19, "BUTTON7MOUSE", 0, "Button7 Mouse", ""},
	{5, "ACTIONMOUSE", 0, "Action Mouse", ""},
	{6, "SELECTMOUSE", 0, "Select Mouse", ""},
	{0, "", 0, NULL, NULL},
	{4, "MOUSEMOVE", 0, "Mouse Move", ""},
	{17, "INBETWEEN_MOUSEMOVE", 0, "In-between Move", ""},
	{14, "TRACKPADPAN", 0, "Mouse/Trackpad Pan", ""},
	{15, "TRACKPADZOOM", 0, "Mouse/Trackpad Zoom", ""},
	{16, "MOUSEROTATE", 0, "Mouse/Trackpad Rotate", ""},
	{0, "", 0, NULL, NULL},
	{10, "WHEELUPMOUSE", 0, "Wheel Up", ""},
	{11, "WHEELDOWNMOUSE", 0, "Wheel Down", ""},
	{12, "WHEELINMOUSE", 0, "Wheel In", ""},
	{13, "WHEELOUTMOUSE", 0, "Wheel Out", ""},
	{0, "", 0, NULL, NULL},
	{20483, "EVT_TWEAK_L", 0, "Tweak Left", ""},
	{20484, "EVT_TWEAK_M", 0, "Tweak Middle", ""},
	{20485, "EVT_TWEAK_R", 0, "Tweak Right", ""},
	{20486, "EVT_TWEAK_A", 0, "Tweak Action", ""},
	{20487, "EVT_TWEAK_S", 0, "Tweak Select", ""},
	{0, "", 0, NULL, NULL},
	{97, "A", 0, "A", ""},
	{98, "B", 0, "B", ""},
	{99, "C", 0, "C", ""},
	{100, "D", 0, "D", ""},
	{101, "E", 0, "E", ""},
	{102, "F", 0, "F", ""},
	{103, "G", 0, "G", ""},
	{104, "H", 0, "H", ""},
	{105, "I", 0, "I", ""},
	{106, "J", 0, "J", ""},
	{107, "K", 0, "K", ""},
	{108, "L", 0, "L", ""},
	{109, "M", 0, "M", ""},
	{110, "N", 0, "N", ""},
	{111, "O", 0, "O", ""},
	{112, "P", 0, "P", ""},
	{113, "Q", 0, "Q", ""},
	{114, "R", 0, "R", ""},
	{115, "S", 0, "S", ""},
	{116, "T", 0, "T", ""},
	{117, "U", 0, "U", ""},
	{118, "V", 0, "V", ""},
	{119, "W", 0, "W", ""},
	{120, "X", 0, "X", ""},
	{121, "Y", 0, "Y", ""},
	{122, "Z", 0, "Z", ""},
	{0, "", 0, NULL, NULL},
	{48, "ZERO", 0, "0", ""},
	{49, "ONE", 0, "1", ""},
	{50, "TWO", 0, "2", ""},
	{51, "THREE", 0, "3", ""},
	{52, "FOUR", 0, "4", ""},
	{53, "FIVE", 0, "5", ""},
	{54, "SIX", 0, "6", ""},
	{55, "SEVEN", 0, "7", ""},
	{56, "EIGHT", 0, "8", ""},
	{57, "NINE", 0, "9", ""},
	{0, "", 0, NULL, NULL},
	{212, "LEFT_CTRL", 0, "Left Ctrl", ""},
	{213, "LEFT_ALT", 0, "Left Alt", ""},
	{217, "LEFT_SHIFT", 0, "Left Shift", ""},
	{214, "RIGHT_ALT", 0, "Right Alt", ""},
	{215, "RIGHT_CTRL", 0, "Right Ctrl", ""},
	{216, "RIGHT_SHIFT", 0, "Right Shift", ""},
	{0, "", 0, NULL, NULL},
	{172, "OSKEY", 0, "OS Key", ""},
	{173, "GRLESS", 0, "Grless", ""},
	{218, "ESC", 0, "Esc", ""},
	{219, "TAB", 0, "Tab", ""},
	{220, "RET", 0, "Return", ""},
	{221, "SPACE", 0, "Spacebar", ""},
	{222, "LINE_FEED", 0, "Line Feed", ""},
	{223, "BACK_SPACE", 0, "Back Space", ""},
	{224, "DEL", 0, "Delete", ""},
	{225, "SEMI_COLON", 0, ";", ""},
	{226, "PERIOD", 0, ".", ""},
	{227, "COMMA", 0, ",", ""},
	{228, "QUOTE", 0, "\"", ""},
	{229, "ACCENT_GRAVE", 0, "`", ""},
	{230, "MINUS", 0, "-", ""},
	{232, "SLASH", 0, "/", ""},
	{233, "BACK_SLASH", 0, "\\", ""},
	{234, "EQUAL", 0, "=", ""},
	{235, "LEFT_BRACKET", 0, "[", ""},
	{236, "RIGHT_BRACKET", 0, "]", ""},
	{137, "LEFT_ARROW", 0, "Left Arrow", ""},
	{138, "DOWN_ARROW", 0, "Down Arrow", ""},
	{139, "RIGHT_ARROW", 0, "Right Arrow", ""},
	{140, "UP_ARROW", 0, "Up Arrow", ""},
	{152, "NUMPAD_2", 0, "Numpad 2", ""},
	{154, "NUMPAD_4", 0, "Numpad 4", ""},
	{156, "NUMPAD_6", 0, "Numpad 6", ""},
	{158, "NUMPAD_8", 0, "Numpad 8", ""},
	{151, "NUMPAD_1", 0, "Numpad 1", ""},
	{153, "NUMPAD_3", 0, "Numpad 3", ""},
	{155, "NUMPAD_5", 0, "Numpad 5", ""},
	{157, "NUMPAD_7", 0, "Numpad 7", ""},
	{159, "NUMPAD_9", 0, "Numpad 9", ""},
	{199, "NUMPAD_PERIOD", 0, "Numpad .", ""},
	{161, "NUMPAD_SLASH", 0, "Numpad /", ""},
	{160, "NUMPAD_ASTERIX", 0, "Numpad *", ""},
	{150, "NUMPAD_0", 0, "Numpad 0", ""},
	{162, "NUMPAD_MINUS", 0, "Numpad -", ""},
	{163, "NUMPAD_ENTER", 0, "Numpad Enter", ""},
	{164, "NUMPAD_PLUS", 0, "Numpad +", ""},
	{300, "F1", 0, "F1", ""},
	{301, "F2", 0, "F2", ""},
	{302, "F3", 0, "F3", ""},
	{303, "F4", 0, "F4", ""},
	{304, "F5", 0, "F5", ""},
	{305, "F6", 0, "F6", ""},
	{306, "F7", 0, "F7", ""},
	{307, "F8", 0, "F8", ""},
	{308, "F9", 0, "F9", ""},
	{309, "F10", 0, "F10", ""},
	{310, "F11", 0, "F11", ""},
	{311, "F12", 0, "F12", ""},
	{312, "F13", 0, "F13", ""},
	{313, "F14", 0, "F14", ""},
	{314, "F15", 0, "F15", ""},
	{315, "F16", 0, "F16", ""},
	{316, "F17", 0, "F17", ""},
	{317, "F18", 0, "F18", ""},
	{318, "F19", 0, "F19", ""},
	{165, "PAUSE", 0, "Pause", ""},
	{166, "INSERT", 0, "Insert", ""},
	{167, "HOME", 0, "Home", ""},
	{168, "PAGE_UP", 0, "Page Up", ""},
	{169, "PAGE_DOWN", 0, "Page Down", ""},
	{170, "END", 0, "End", ""},
	{0, "", 0, NULL, NULL},
	{174, "MEDIA_PLAY", 0, "Media Play/Pause", ""},
	{175, "MEDIA_STOP", 0, "Media Stop", ""},
	{176, "MEDIA_FIRST", 0, "Media First", ""},
	{177, "MEDIA_LAST", 0, "Media Last", ""},
	{0, "", 0, NULL, NULL},
	{-2, "TEXTINPUT", 0, "Text Input", ""},
	{0, "", 0, NULL, NULL},
	{260, "WINDOW_DEACTIVATE", 0, "Window Deactivate", ""},
	{272, "TIMER", 0, "Timer", ""},
	{273, "TIMER0", 0, "Timer 0", ""},
	{274, "TIMER1", 0, "Timer 1", ""},
	{275, "TIMER2", 0, "Timer 2", ""},
	{276, "TIMER_JOBS", 0, "Timer Jobs", ""},
	{277, "TIMER_AUTOSAVE", 0, "Timer Autosave", ""},
	{278, "TIMER_REPORT", 0, "Timer Report", ""},
	{279, "TIMERREGION", 0, "Timer Region", ""},
	{0, "", 0, NULL, NULL},
	{400, "NDOF_MOTION", 0, "NDOF Motion", ""},
	{401, "NDOF_BUTTON_MENU", 0, "NDOF Menu", ""},
	{402, "NDOF_BUTTON_FIT", 0, "NDOF Fit", ""},
	{403, "NDOF_BUTTON_TOP", 0, "NDOF Top", ""},
	{404, "NDOF_BUTTON_BOTTOM", 0, "NDOF Bottom", ""},
	{405, "NDOF_BUTTON_LEFT", 0, "NDOF Left", ""},
	{406, "NDOF_BUTTON_RIGHT", 0, "NDOF Right", ""},
	{407, "NDOF_BUTTON_FRONT", 0, "NDOF Front", ""},
	{408, "NDOF_BUTTON_BACK", 0, "NDOF Back", ""},
	{409, "NDOF_BUTTON_ISO1", 0, "NDOF Isometric 1", ""},
	{410, "NDOF_BUTTON_ISO2", 0, "NDOF Isometric 2", ""},
	{411, "NDOF_BUTTON_ROLL_CW", 0, "NDOF Roll CW", ""},
	{412, "NDOF_BUTTON_ROLL_CCW", 0, "NDOF Roll CCW", ""},
	{413, "NDOF_BUTTON_SPIN_CW", 0, "NDOF Spin CW", ""},
	{414, "NDOF_BUTTON_SPIN_CCW", 0, "NDOF Spin CCW", ""},
	{415, "NDOF_BUTTON_TILT_CW", 0, "NDOF Tilt CW", ""},
	{416, "NDOF_BUTTON_TILT_CCW", 0, "NDOF Tilt CCW", ""},
	{417, "NDOF_BUTTON_ROTATE", 0, "NDOF Rotate", ""},
	{418, "NDOF_BUTTON_PANZOOM", 0, "NDOF Pan/Zoom", ""},
	{419, "NDOF_BUTTON_DOMINANT", 0, "NDOF Dominant", ""},
	{420, "NDOF_BUTTON_PLUS", 0, "NDOF Plus", ""},
	{421, "NDOF_BUTTON_MINUS", 0, "NDOF Minus", ""},
	{422, "NDOF_BUTTON_ESC", 0, "NDOF Esc", NULL},
	{423, "NDOF_BUTTON_ALT", 0, "NDOF Alt", NULL},
	{424, "NDOF_BUTTON_SHIFT", 0, "NDOF Shift", NULL},
	{425, "NDOF_BUTTON_CTRL", 0, "NDOF Ctrl", NULL},
	{426, "NDOF_BUTTON_1", 0, "NDOF Button 1", ""},
	{427, "NDOF_BUTTON_2", 0, "NDOF Button 2", ""},
	{428, "NDOF_BUTTON_3", 0, "NDOF Button 3", ""},
	{429, "NDOF_BUTTON_4", 0, "NDOF Button 4", ""},
	{430, "NDOF_BUTTON_5", 0, "NDOF Button 5", ""},
	{431, "NDOF_BUTTON_6", 0, "NDOF Button 6", ""},
	{432, "NDOF_BUTTON_7", 0, "NDOF Button 7", ""},
	{433, "NDOF_BUTTON_8", 0, "NDOF Button 8", ""},
	{434, "NDOF_BUTTON_9", 0, "NDOF Button 9", ""},
	{435, "NDOF_BUTTON_10", 0, "NDOF Button 10", ""},
	{436, "NDOF_BUTTON_A", 0, "NDOF Button A", ""},
	{437, "NDOF_BUTTON_B", 0, "NDOF Button B", ""},
	{438, "NDOF_BUTTON_C", 0, "NDOF Button C", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMapItems_new_modal_key_modifier = {
	{(PropertyRNA *)&rna_KeyMapItems_new_modal_item, (PropertyRNA *)&rna_KeyMapItems_new_modal_oskey,
	-1, "key_modifier", 3, "Key Modifier",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_KeyMapItems_new_modal_key_modifier_items, 195, 0
};

PointerPropertyRNA rna_KeyMapItems_new_modal_item = {
	{NULL, (PropertyRNA *)&rna_KeyMapItems_new_modal_key_modifier,
	-1, "item", 8388616, "Item",
	"Added key map item",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMapItem
};

FunctionRNA rna_KeyMapItems_new_modal_func = {
	{(FunctionRNA *)&rna_KeyMapItems_remove_func, (FunctionRNA *)&rna_KeyMapItems_new_func,
	NULL,
	{(PropertyRNA *)&rna_KeyMapItems_new_modal_propvalue, (PropertyRNA *)&rna_KeyMapItems_new_modal_item}},
	"new_modal", 16, "new_modal",
	KeyMapItems_new_modal_call,
	(PropertyRNA *)&rna_KeyMapItems_new_modal_item
};

PointerPropertyRNA rna_KeyMapItems_remove_item = {
	{NULL, NULL,
	-1, "item", 264196, "Item",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMapItem
};

FunctionRNA rna_KeyMapItems_remove_func = {
	{(FunctionRNA *)&rna_KeyMapItems_from_id_func, (FunctionRNA *)&rna_KeyMapItems_new_modal_func,
	NULL,
	{(PropertyRNA *)&rna_KeyMapItems_remove_item, (PropertyRNA *)&rna_KeyMapItems_remove_item}},
	"remove", 16, "remove",
	KeyMapItems_remove_call,
	NULL
};

IntPropertyRNA rna_KeyMapItems_from_id_id = {
	{(PropertyRNA *)&rna_KeyMapItems_from_id_item, NULL,
	-1, "id", 7, "id",
	"ID of the item",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_KeyMapItems_from_id_item = {
	{NULL, (PropertyRNA *)&rna_KeyMapItems_from_id_id,
	-1, "item", 8388616, "Item",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMapItem
};

FunctionRNA rna_KeyMapItems_from_id_func = {
	{NULL, (FunctionRNA *)&rna_KeyMapItems_remove_func,
	NULL,
	{(PropertyRNA *)&rna_KeyMapItems_from_id_id, (PropertyRNA *)&rna_KeyMapItems_from_id_item}},
	"from_id", 0, "from_id",
	KeyMapItems_from_id_call,
	(PropertyRNA *)&rna_KeyMapItems_from_id_item
};

StructRNA RNA_KeyMapItems = {
	{(ContainerRNA *)&RNA_KeyMapItem, (ContainerRNA *)&RNA_KeyMap,
	NULL,
	{(PropertyRNA *)&rna_KeyMapItems_rna_properties, (PropertyRNA *)&rna_KeyMapItems_rna_type}},
	"KeyMapItems", NULL, NULL, 4, "KeyMap Items",
	"Collection of keymap items",
	"*", 17,
	NULL, (PropertyRNA *)&rna_KeyMapItems_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_KeyMapItems_new_func, (FunctionRNA *)&rna_KeyMapItems_from_id_func}
};

/* Key Map Item */
CollectionPropertyRNA rna_KeyMapItem_rna_properties = {
	{(PropertyRNA *)&rna_KeyMapItem_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_rna_properties_begin, KeyMapItem_rna_properties_next, KeyMapItem_rna_properties_end, KeyMapItem_rna_properties_get, NULL, NULL, KeyMapItem_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_KeyMapItem_rna_type = {
	{(PropertyRNA *)&rna_KeyMapItem_idname, (PropertyRNA *)&rna_KeyMapItem_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_KeyMapItem_idname = {
	{(PropertyRNA *)&rna_KeyMapItem_name, (PropertyRNA *)&rna_KeyMapItem_rna_type,
	-1, "idname", 262145, "Identifier",
	"Identifier of operator to call on input event",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_KeyMapItem_update, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_idname_get, KeyMapItem_idname_length, KeyMapItem_idname_set, NULL, NULL, NULL, 64, ""
};

StringPropertyRNA rna_KeyMapItem_name = {
	{(PropertyRNA *)&rna_KeyMapItem_properties, (PropertyRNA *)&rna_KeyMapItem_idname,
	-1, "name", 262144, "Name",
	"Name of operator (translated) to call on input event",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_name_get, KeyMapItem_name_length, NULL, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_KeyMapItem_properties = {
	{(PropertyRNA *)&rna_KeyMapItem_map_type, (PropertyRNA *)&rna_KeyMapItem_name,
	-1, "properties", 8388608, "Properties",
	"Properties to set when the operator is called",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_properties_get, NULL, NULL, NULL,&RNA_OperatorProperties
};

static EnumPropertyItem rna_KeyMapItem_map_type_items[7] = {
	{0, "KEYBOARD", 0, "Keyboard", ""},
	{2, "TWEAK", 0, "Tweak", ""},
	{1, "MOUSE", 0, "Mouse", ""},
	{5, "NDOF", 0, "NDOF", ""},
	{3, "TEXTINPUT", 0, "Text Input", ""},
	{4, "TIMER", 0, "Timer", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMapItem_map_type = {
	{(PropertyRNA *)&rna_KeyMapItem_type, (PropertyRNA *)&rna_KeyMapItem_properties,
	-1, "map_type", 3, "Map Type",
	"Type of event mapping",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_map_type_get, KeyMapItem_map_type_set, NULL, NULL, NULL, NULL, rna_KeyMapItem_map_type_items, 6, 0
};

static EnumPropertyItem rna_KeyMapItem_type_items[196] = {
	{0, "NONE", 0, "", ""},
	{1, "LEFTMOUSE", 0, "Left Mouse", ""},
	{2, "MIDDLEMOUSE", 0, "Middle Mouse", ""},
	{3, "RIGHTMOUSE", 0, "Right Mouse", ""},
	{7, "BUTTON4MOUSE", 0, "Button4 Mouse", ""},
	{8, "BUTTON5MOUSE", 0, "Button5 Mouse", ""},
	{18, "BUTTON6MOUSE", 0, "Button6 Mouse", ""},
	{19, "BUTTON7MOUSE", 0, "Button7 Mouse", ""},
	{5, "ACTIONMOUSE", 0, "Action Mouse", ""},
	{6, "SELECTMOUSE", 0, "Select Mouse", ""},
	{0, "", 0, NULL, NULL},
	{4, "MOUSEMOVE", 0, "Mouse Move", ""},
	{17, "INBETWEEN_MOUSEMOVE", 0, "In-between Move", ""},
	{14, "TRACKPADPAN", 0, "Mouse/Trackpad Pan", ""},
	{15, "TRACKPADZOOM", 0, "Mouse/Trackpad Zoom", ""},
	{16, "MOUSEROTATE", 0, "Mouse/Trackpad Rotate", ""},
	{0, "", 0, NULL, NULL},
	{10, "WHEELUPMOUSE", 0, "Wheel Up", ""},
	{11, "WHEELDOWNMOUSE", 0, "Wheel Down", ""},
	{12, "WHEELINMOUSE", 0, "Wheel In", ""},
	{13, "WHEELOUTMOUSE", 0, "Wheel Out", ""},
	{0, "", 0, NULL, NULL},
	{20483, "EVT_TWEAK_L", 0, "Tweak Left", ""},
	{20484, "EVT_TWEAK_M", 0, "Tweak Middle", ""},
	{20485, "EVT_TWEAK_R", 0, "Tweak Right", ""},
	{20486, "EVT_TWEAK_A", 0, "Tweak Action", ""},
	{20487, "EVT_TWEAK_S", 0, "Tweak Select", ""},
	{0, "", 0, NULL, NULL},
	{97, "A", 0, "A", ""},
	{98, "B", 0, "B", ""},
	{99, "C", 0, "C", ""},
	{100, "D", 0, "D", ""},
	{101, "E", 0, "E", ""},
	{102, "F", 0, "F", ""},
	{103, "G", 0, "G", ""},
	{104, "H", 0, "H", ""},
	{105, "I", 0, "I", ""},
	{106, "J", 0, "J", ""},
	{107, "K", 0, "K", ""},
	{108, "L", 0, "L", ""},
	{109, "M", 0, "M", ""},
	{110, "N", 0, "N", ""},
	{111, "O", 0, "O", ""},
	{112, "P", 0, "P", ""},
	{113, "Q", 0, "Q", ""},
	{114, "R", 0, "R", ""},
	{115, "S", 0, "S", ""},
	{116, "T", 0, "T", ""},
	{117, "U", 0, "U", ""},
	{118, "V", 0, "V", ""},
	{119, "W", 0, "W", ""},
	{120, "X", 0, "X", ""},
	{121, "Y", 0, "Y", ""},
	{122, "Z", 0, "Z", ""},
	{0, "", 0, NULL, NULL},
	{48, "ZERO", 0, "0", ""},
	{49, "ONE", 0, "1", ""},
	{50, "TWO", 0, "2", ""},
	{51, "THREE", 0, "3", ""},
	{52, "FOUR", 0, "4", ""},
	{53, "FIVE", 0, "5", ""},
	{54, "SIX", 0, "6", ""},
	{55, "SEVEN", 0, "7", ""},
	{56, "EIGHT", 0, "8", ""},
	{57, "NINE", 0, "9", ""},
	{0, "", 0, NULL, NULL},
	{212, "LEFT_CTRL", 0, "Left Ctrl", ""},
	{213, "LEFT_ALT", 0, "Left Alt", ""},
	{217, "LEFT_SHIFT", 0, "Left Shift", ""},
	{214, "RIGHT_ALT", 0, "Right Alt", ""},
	{215, "RIGHT_CTRL", 0, "Right Ctrl", ""},
	{216, "RIGHT_SHIFT", 0, "Right Shift", ""},
	{0, "", 0, NULL, NULL},
	{172, "OSKEY", 0, "OS Key", ""},
	{173, "GRLESS", 0, "Grless", ""},
	{218, "ESC", 0, "Esc", ""},
	{219, "TAB", 0, "Tab", ""},
	{220, "RET", 0, "Return", ""},
	{221, "SPACE", 0, "Spacebar", ""},
	{222, "LINE_FEED", 0, "Line Feed", ""},
	{223, "BACK_SPACE", 0, "Back Space", ""},
	{224, "DEL", 0, "Delete", ""},
	{225, "SEMI_COLON", 0, ";", ""},
	{226, "PERIOD", 0, ".", ""},
	{227, "COMMA", 0, ",", ""},
	{228, "QUOTE", 0, "\"", ""},
	{229, "ACCENT_GRAVE", 0, "`", ""},
	{230, "MINUS", 0, "-", ""},
	{232, "SLASH", 0, "/", ""},
	{233, "BACK_SLASH", 0, "\\", ""},
	{234, "EQUAL", 0, "=", ""},
	{235, "LEFT_BRACKET", 0, "[", ""},
	{236, "RIGHT_BRACKET", 0, "]", ""},
	{137, "LEFT_ARROW", 0, "Left Arrow", ""},
	{138, "DOWN_ARROW", 0, "Down Arrow", ""},
	{139, "RIGHT_ARROW", 0, "Right Arrow", ""},
	{140, "UP_ARROW", 0, "Up Arrow", ""},
	{152, "NUMPAD_2", 0, "Numpad 2", ""},
	{154, "NUMPAD_4", 0, "Numpad 4", ""},
	{156, "NUMPAD_6", 0, "Numpad 6", ""},
	{158, "NUMPAD_8", 0, "Numpad 8", ""},
	{151, "NUMPAD_1", 0, "Numpad 1", ""},
	{153, "NUMPAD_3", 0, "Numpad 3", ""},
	{155, "NUMPAD_5", 0, "Numpad 5", ""},
	{157, "NUMPAD_7", 0, "Numpad 7", ""},
	{159, "NUMPAD_9", 0, "Numpad 9", ""},
	{199, "NUMPAD_PERIOD", 0, "Numpad .", ""},
	{161, "NUMPAD_SLASH", 0, "Numpad /", ""},
	{160, "NUMPAD_ASTERIX", 0, "Numpad *", ""},
	{150, "NUMPAD_0", 0, "Numpad 0", ""},
	{162, "NUMPAD_MINUS", 0, "Numpad -", ""},
	{163, "NUMPAD_ENTER", 0, "Numpad Enter", ""},
	{164, "NUMPAD_PLUS", 0, "Numpad +", ""},
	{300, "F1", 0, "F1", ""},
	{301, "F2", 0, "F2", ""},
	{302, "F3", 0, "F3", ""},
	{303, "F4", 0, "F4", ""},
	{304, "F5", 0, "F5", ""},
	{305, "F6", 0, "F6", ""},
	{306, "F7", 0, "F7", ""},
	{307, "F8", 0, "F8", ""},
	{308, "F9", 0, "F9", ""},
	{309, "F10", 0, "F10", ""},
	{310, "F11", 0, "F11", ""},
	{311, "F12", 0, "F12", ""},
	{312, "F13", 0, "F13", ""},
	{313, "F14", 0, "F14", ""},
	{314, "F15", 0, "F15", ""},
	{315, "F16", 0, "F16", ""},
	{316, "F17", 0, "F17", ""},
	{317, "F18", 0, "F18", ""},
	{318, "F19", 0, "F19", ""},
	{165, "PAUSE", 0, "Pause", ""},
	{166, "INSERT", 0, "Insert", ""},
	{167, "HOME", 0, "Home", ""},
	{168, "PAGE_UP", 0, "Page Up", ""},
	{169, "PAGE_DOWN", 0, "Page Down", ""},
	{170, "END", 0, "End", ""},
	{0, "", 0, NULL, NULL},
	{174, "MEDIA_PLAY", 0, "Media Play/Pause", ""},
	{175, "MEDIA_STOP", 0, "Media Stop", ""},
	{176, "MEDIA_FIRST", 0, "Media First", ""},
	{177, "MEDIA_LAST", 0, "Media Last", ""},
	{0, "", 0, NULL, NULL},
	{-2, "TEXTINPUT", 0, "Text Input", ""},
	{0, "", 0, NULL, NULL},
	{260, "WINDOW_DEACTIVATE", 0, "Window Deactivate", ""},
	{272, "TIMER", 0, "Timer", ""},
	{273, "TIMER0", 0, "Timer 0", ""},
	{274, "TIMER1", 0, "Timer 1", ""},
	{275, "TIMER2", 0, "Timer 2", ""},
	{276, "TIMER_JOBS", 0, "Timer Jobs", ""},
	{277, "TIMER_AUTOSAVE", 0, "Timer Autosave", ""},
	{278, "TIMER_REPORT", 0, "Timer Report", ""},
	{279, "TIMERREGION", 0, "Timer Region", ""},
	{0, "", 0, NULL, NULL},
	{400, "NDOF_MOTION", 0, "NDOF Motion", ""},
	{401, "NDOF_BUTTON_MENU", 0, "NDOF Menu", ""},
	{402, "NDOF_BUTTON_FIT", 0, "NDOF Fit", ""},
	{403, "NDOF_BUTTON_TOP", 0, "NDOF Top", ""},
	{404, "NDOF_BUTTON_BOTTOM", 0, "NDOF Bottom", ""},
	{405, "NDOF_BUTTON_LEFT", 0, "NDOF Left", ""},
	{406, "NDOF_BUTTON_RIGHT", 0, "NDOF Right", ""},
	{407, "NDOF_BUTTON_FRONT", 0, "NDOF Front", ""},
	{408, "NDOF_BUTTON_BACK", 0, "NDOF Back", ""},
	{409, "NDOF_BUTTON_ISO1", 0, "NDOF Isometric 1", ""},
	{410, "NDOF_BUTTON_ISO2", 0, "NDOF Isometric 2", ""},
	{411, "NDOF_BUTTON_ROLL_CW", 0, "NDOF Roll CW", ""},
	{412, "NDOF_BUTTON_ROLL_CCW", 0, "NDOF Roll CCW", ""},
	{413, "NDOF_BUTTON_SPIN_CW", 0, "NDOF Spin CW", ""},
	{414, "NDOF_BUTTON_SPIN_CCW", 0, "NDOF Spin CCW", ""},
	{415, "NDOF_BUTTON_TILT_CW", 0, "NDOF Tilt CW", ""},
	{416, "NDOF_BUTTON_TILT_CCW", 0, "NDOF Tilt CCW", ""},
	{417, "NDOF_BUTTON_ROTATE", 0, "NDOF Rotate", ""},
	{418, "NDOF_BUTTON_PANZOOM", 0, "NDOF Pan/Zoom", ""},
	{419, "NDOF_BUTTON_DOMINANT", 0, "NDOF Dominant", ""},
	{420, "NDOF_BUTTON_PLUS", 0, "NDOF Plus", ""},
	{421, "NDOF_BUTTON_MINUS", 0, "NDOF Minus", ""},
	{422, "NDOF_BUTTON_ESC", 0, "NDOF Esc", NULL},
	{423, "NDOF_BUTTON_ALT", 0, "NDOF Alt", NULL},
	{424, "NDOF_BUTTON_SHIFT", 0, "NDOF Shift", NULL},
	{425, "NDOF_BUTTON_CTRL", 0, "NDOF Ctrl", NULL},
	{426, "NDOF_BUTTON_1", 0, "NDOF Button 1", ""},
	{427, "NDOF_BUTTON_2", 0, "NDOF Button 2", ""},
	{428, "NDOF_BUTTON_3", 0, "NDOF Button 3", ""},
	{429, "NDOF_BUTTON_4", 0, "NDOF Button 4", ""},
	{430, "NDOF_BUTTON_5", 0, "NDOF Button 5", ""},
	{431, "NDOF_BUTTON_6", 0, "NDOF Button 6", ""},
	{432, "NDOF_BUTTON_7", 0, "NDOF Button 7", ""},
	{433, "NDOF_BUTTON_8", 0, "NDOF Button 8", ""},
	{434, "NDOF_BUTTON_9", 0, "NDOF Button 9", ""},
	{435, "NDOF_BUTTON_10", 0, "NDOF Button 10", ""},
	{436, "NDOF_BUTTON_A", 0, "NDOF Button A", ""},
	{437, "NDOF_BUTTON_B", 0, "NDOF Button B", ""},
	{438, "NDOF_BUTTON_C", 0, "NDOF Button C", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMapItem_type = {
	{(PropertyRNA *)&rna_KeyMapItem_value, (PropertyRNA *)&rna_KeyMapItem_map_type,
	-1, "type", 3, "Type",
	"Type of event",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_type_get, KeyMapItem_type_set, rna_KeyMapItem_type_itemf, NULL, NULL, NULL, rna_KeyMapItem_type_items, 195, 0
};

static EnumPropertyItem rna_KeyMapItem_value_items[15] = {
	{-1, "ANY", 0, "Any", ""},
	{0, "NOTHING", 0, "Nothing", ""},
	{1, "PRESS", 0, "Press", ""},
	{2, "RELEASE", 0, "Release", ""},
	{3, "CLICK", 0, "Click", ""},
	{4, "DOUBLE_CLICK", 0, "Double Click", ""},
	{1, "NORTH", 0, "North", ""},
	{2, "NORTH_EAST", 0, "North-East", ""},
	{3, "EAST", 0, "East", ""},
	{4, "SOUTH_EAST", 0, "South-East", ""},
	{5, "SOUTH", 0, "South", ""},
	{6, "SOUTH_WEST", 0, "South-West", ""},
	{7, "WEST", 0, "West", ""},
	{8, "NORTH_WEST", 0, "North-West", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMapItem_value = {
	{(PropertyRNA *)&rna_KeyMapItem_id, (PropertyRNA *)&rna_KeyMapItem_type,
	-1, "value", 3, "Value",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_value_get, KeyMapItem_value_set, rna_KeyMapItem_value_itemf, NULL, NULL, NULL, rna_KeyMapItem_value_items, 14, 0
};

IntPropertyRNA rna_KeyMapItem_id = {
	{(PropertyRNA *)&rna_KeyMapItem_any, (PropertyRNA *)&rna_KeyMapItem_value,
	-1, "id", 8194, "ID",
	"ID of the item",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, NULL, NULL,
	offsetof(wmKeyMapItem, id), 1, NULL},
	KeyMapItem_id_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-32768, 32767, -32768, 32767, 1, 0, NULL
};

BoolPropertyRNA rna_KeyMapItem_any = {
	{(PropertyRNA *)&rna_KeyMapItem_shift, (PropertyRNA *)&rna_KeyMapItem_id,
	-1, "any", 3, "Any",
	"Any modifier keys pressed",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_any_get, KeyMapItem_any_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyMapItem_shift = {
	{(PropertyRNA *)&rna_KeyMapItem_ctrl, (PropertyRNA *)&rna_KeyMapItem_any,
	-1, "shift", 8195, "Shift",
	"Shift key pressed",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, NULL, NULL,
	offsetof(wmKeyMapItem, shift), 1, NULL},
	KeyMapItem_shift_get, KeyMapItem_shift_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyMapItem_ctrl = {
	{(PropertyRNA *)&rna_KeyMapItem_alt, (PropertyRNA *)&rna_KeyMapItem_shift,
	-1, "ctrl", 8195, "Ctrl",
	"Control key pressed",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, NULL, NULL,
	offsetof(wmKeyMapItem, ctrl), 1, NULL},
	KeyMapItem_ctrl_get, KeyMapItem_ctrl_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyMapItem_alt = {
	{(PropertyRNA *)&rna_KeyMapItem_oskey, (PropertyRNA *)&rna_KeyMapItem_ctrl,
	-1, "alt", 8195, "Alt",
	"Alt key pressed",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, NULL, NULL,
	offsetof(wmKeyMapItem, alt), 1, NULL},
	KeyMapItem_alt_get, KeyMapItem_alt_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyMapItem_oskey = {
	{(PropertyRNA *)&rna_KeyMapItem_key_modifier, (PropertyRNA *)&rna_KeyMapItem_alt,
	-1, "oskey", 8195, "OS Key",
	"Operating system key pressed",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, NULL, NULL,
	offsetof(wmKeyMapItem, oskey), 1, NULL},
	KeyMapItem_oskey_get, KeyMapItem_oskey_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_KeyMapItem_key_modifier_items[196] = {
	{0, "NONE", 0, "", ""},
	{1, "LEFTMOUSE", 0, "Left Mouse", ""},
	{2, "MIDDLEMOUSE", 0, "Middle Mouse", ""},
	{3, "RIGHTMOUSE", 0, "Right Mouse", ""},
	{7, "BUTTON4MOUSE", 0, "Button4 Mouse", ""},
	{8, "BUTTON5MOUSE", 0, "Button5 Mouse", ""},
	{18, "BUTTON6MOUSE", 0, "Button6 Mouse", ""},
	{19, "BUTTON7MOUSE", 0, "Button7 Mouse", ""},
	{5, "ACTIONMOUSE", 0, "Action Mouse", ""},
	{6, "SELECTMOUSE", 0, "Select Mouse", ""},
	{0, "", 0, NULL, NULL},
	{4, "MOUSEMOVE", 0, "Mouse Move", ""},
	{17, "INBETWEEN_MOUSEMOVE", 0, "In-between Move", ""},
	{14, "TRACKPADPAN", 0, "Mouse/Trackpad Pan", ""},
	{15, "TRACKPADZOOM", 0, "Mouse/Trackpad Zoom", ""},
	{16, "MOUSEROTATE", 0, "Mouse/Trackpad Rotate", ""},
	{0, "", 0, NULL, NULL},
	{10, "WHEELUPMOUSE", 0, "Wheel Up", ""},
	{11, "WHEELDOWNMOUSE", 0, "Wheel Down", ""},
	{12, "WHEELINMOUSE", 0, "Wheel In", ""},
	{13, "WHEELOUTMOUSE", 0, "Wheel Out", ""},
	{0, "", 0, NULL, NULL},
	{20483, "EVT_TWEAK_L", 0, "Tweak Left", ""},
	{20484, "EVT_TWEAK_M", 0, "Tweak Middle", ""},
	{20485, "EVT_TWEAK_R", 0, "Tweak Right", ""},
	{20486, "EVT_TWEAK_A", 0, "Tweak Action", ""},
	{20487, "EVT_TWEAK_S", 0, "Tweak Select", ""},
	{0, "", 0, NULL, NULL},
	{97, "A", 0, "A", ""},
	{98, "B", 0, "B", ""},
	{99, "C", 0, "C", ""},
	{100, "D", 0, "D", ""},
	{101, "E", 0, "E", ""},
	{102, "F", 0, "F", ""},
	{103, "G", 0, "G", ""},
	{104, "H", 0, "H", ""},
	{105, "I", 0, "I", ""},
	{106, "J", 0, "J", ""},
	{107, "K", 0, "K", ""},
	{108, "L", 0, "L", ""},
	{109, "M", 0, "M", ""},
	{110, "N", 0, "N", ""},
	{111, "O", 0, "O", ""},
	{112, "P", 0, "P", ""},
	{113, "Q", 0, "Q", ""},
	{114, "R", 0, "R", ""},
	{115, "S", 0, "S", ""},
	{116, "T", 0, "T", ""},
	{117, "U", 0, "U", ""},
	{118, "V", 0, "V", ""},
	{119, "W", 0, "W", ""},
	{120, "X", 0, "X", ""},
	{121, "Y", 0, "Y", ""},
	{122, "Z", 0, "Z", ""},
	{0, "", 0, NULL, NULL},
	{48, "ZERO", 0, "0", ""},
	{49, "ONE", 0, "1", ""},
	{50, "TWO", 0, "2", ""},
	{51, "THREE", 0, "3", ""},
	{52, "FOUR", 0, "4", ""},
	{53, "FIVE", 0, "5", ""},
	{54, "SIX", 0, "6", ""},
	{55, "SEVEN", 0, "7", ""},
	{56, "EIGHT", 0, "8", ""},
	{57, "NINE", 0, "9", ""},
	{0, "", 0, NULL, NULL},
	{212, "LEFT_CTRL", 0, "Left Ctrl", ""},
	{213, "LEFT_ALT", 0, "Left Alt", ""},
	{217, "LEFT_SHIFT", 0, "Left Shift", ""},
	{214, "RIGHT_ALT", 0, "Right Alt", ""},
	{215, "RIGHT_CTRL", 0, "Right Ctrl", ""},
	{216, "RIGHT_SHIFT", 0, "Right Shift", ""},
	{0, "", 0, NULL, NULL},
	{172, "OSKEY", 0, "OS Key", ""},
	{173, "GRLESS", 0, "Grless", ""},
	{218, "ESC", 0, "Esc", ""},
	{219, "TAB", 0, "Tab", ""},
	{220, "RET", 0, "Return", ""},
	{221, "SPACE", 0, "Spacebar", ""},
	{222, "LINE_FEED", 0, "Line Feed", ""},
	{223, "BACK_SPACE", 0, "Back Space", ""},
	{224, "DEL", 0, "Delete", ""},
	{225, "SEMI_COLON", 0, ";", ""},
	{226, "PERIOD", 0, ".", ""},
	{227, "COMMA", 0, ",", ""},
	{228, "QUOTE", 0, "\"", ""},
	{229, "ACCENT_GRAVE", 0, "`", ""},
	{230, "MINUS", 0, "-", ""},
	{232, "SLASH", 0, "/", ""},
	{233, "BACK_SLASH", 0, "\\", ""},
	{234, "EQUAL", 0, "=", ""},
	{235, "LEFT_BRACKET", 0, "[", ""},
	{236, "RIGHT_BRACKET", 0, "]", ""},
	{137, "LEFT_ARROW", 0, "Left Arrow", ""},
	{138, "DOWN_ARROW", 0, "Down Arrow", ""},
	{139, "RIGHT_ARROW", 0, "Right Arrow", ""},
	{140, "UP_ARROW", 0, "Up Arrow", ""},
	{152, "NUMPAD_2", 0, "Numpad 2", ""},
	{154, "NUMPAD_4", 0, "Numpad 4", ""},
	{156, "NUMPAD_6", 0, "Numpad 6", ""},
	{158, "NUMPAD_8", 0, "Numpad 8", ""},
	{151, "NUMPAD_1", 0, "Numpad 1", ""},
	{153, "NUMPAD_3", 0, "Numpad 3", ""},
	{155, "NUMPAD_5", 0, "Numpad 5", ""},
	{157, "NUMPAD_7", 0, "Numpad 7", ""},
	{159, "NUMPAD_9", 0, "Numpad 9", ""},
	{199, "NUMPAD_PERIOD", 0, "Numpad .", ""},
	{161, "NUMPAD_SLASH", 0, "Numpad /", ""},
	{160, "NUMPAD_ASTERIX", 0, "Numpad *", ""},
	{150, "NUMPAD_0", 0, "Numpad 0", ""},
	{162, "NUMPAD_MINUS", 0, "Numpad -", ""},
	{163, "NUMPAD_ENTER", 0, "Numpad Enter", ""},
	{164, "NUMPAD_PLUS", 0, "Numpad +", ""},
	{300, "F1", 0, "F1", ""},
	{301, "F2", 0, "F2", ""},
	{302, "F3", 0, "F3", ""},
	{303, "F4", 0, "F4", ""},
	{304, "F5", 0, "F5", ""},
	{305, "F6", 0, "F6", ""},
	{306, "F7", 0, "F7", ""},
	{307, "F8", 0, "F8", ""},
	{308, "F9", 0, "F9", ""},
	{309, "F10", 0, "F10", ""},
	{310, "F11", 0, "F11", ""},
	{311, "F12", 0, "F12", ""},
	{312, "F13", 0, "F13", ""},
	{313, "F14", 0, "F14", ""},
	{314, "F15", 0, "F15", ""},
	{315, "F16", 0, "F16", ""},
	{316, "F17", 0, "F17", ""},
	{317, "F18", 0, "F18", ""},
	{318, "F19", 0, "F19", ""},
	{165, "PAUSE", 0, "Pause", ""},
	{166, "INSERT", 0, "Insert", ""},
	{167, "HOME", 0, "Home", ""},
	{168, "PAGE_UP", 0, "Page Up", ""},
	{169, "PAGE_DOWN", 0, "Page Down", ""},
	{170, "END", 0, "End", ""},
	{0, "", 0, NULL, NULL},
	{174, "MEDIA_PLAY", 0, "Media Play/Pause", ""},
	{175, "MEDIA_STOP", 0, "Media Stop", ""},
	{176, "MEDIA_FIRST", 0, "Media First", ""},
	{177, "MEDIA_LAST", 0, "Media Last", ""},
	{0, "", 0, NULL, NULL},
	{-2, "TEXTINPUT", 0, "Text Input", ""},
	{0, "", 0, NULL, NULL},
	{260, "WINDOW_DEACTIVATE", 0, "Window Deactivate", ""},
	{272, "TIMER", 0, "Timer", ""},
	{273, "TIMER0", 0, "Timer 0", ""},
	{274, "TIMER1", 0, "Timer 1", ""},
	{275, "TIMER2", 0, "Timer 2", ""},
	{276, "TIMER_JOBS", 0, "Timer Jobs", ""},
	{277, "TIMER_AUTOSAVE", 0, "Timer Autosave", ""},
	{278, "TIMER_REPORT", 0, "Timer Report", ""},
	{279, "TIMERREGION", 0, "Timer Region", ""},
	{0, "", 0, NULL, NULL},
	{400, "NDOF_MOTION", 0, "NDOF Motion", ""},
	{401, "NDOF_BUTTON_MENU", 0, "NDOF Menu", ""},
	{402, "NDOF_BUTTON_FIT", 0, "NDOF Fit", ""},
	{403, "NDOF_BUTTON_TOP", 0, "NDOF Top", ""},
	{404, "NDOF_BUTTON_BOTTOM", 0, "NDOF Bottom", ""},
	{405, "NDOF_BUTTON_LEFT", 0, "NDOF Left", ""},
	{406, "NDOF_BUTTON_RIGHT", 0, "NDOF Right", ""},
	{407, "NDOF_BUTTON_FRONT", 0, "NDOF Front", ""},
	{408, "NDOF_BUTTON_BACK", 0, "NDOF Back", ""},
	{409, "NDOF_BUTTON_ISO1", 0, "NDOF Isometric 1", ""},
	{410, "NDOF_BUTTON_ISO2", 0, "NDOF Isometric 2", ""},
	{411, "NDOF_BUTTON_ROLL_CW", 0, "NDOF Roll CW", ""},
	{412, "NDOF_BUTTON_ROLL_CCW", 0, "NDOF Roll CCW", ""},
	{413, "NDOF_BUTTON_SPIN_CW", 0, "NDOF Spin CW", ""},
	{414, "NDOF_BUTTON_SPIN_CCW", 0, "NDOF Spin CCW", ""},
	{415, "NDOF_BUTTON_TILT_CW", 0, "NDOF Tilt CW", ""},
	{416, "NDOF_BUTTON_TILT_CCW", 0, "NDOF Tilt CCW", ""},
	{417, "NDOF_BUTTON_ROTATE", 0, "NDOF Rotate", ""},
	{418, "NDOF_BUTTON_PANZOOM", 0, "NDOF Pan/Zoom", ""},
	{419, "NDOF_BUTTON_DOMINANT", 0, "NDOF Dominant", ""},
	{420, "NDOF_BUTTON_PLUS", 0, "NDOF Plus", ""},
	{421, "NDOF_BUTTON_MINUS", 0, "NDOF Minus", ""},
	{422, "NDOF_BUTTON_ESC", 0, "NDOF Esc", NULL},
	{423, "NDOF_BUTTON_ALT", 0, "NDOF Alt", NULL},
	{424, "NDOF_BUTTON_SHIFT", 0, "NDOF Shift", NULL},
	{425, "NDOF_BUTTON_CTRL", 0, "NDOF Ctrl", NULL},
	{426, "NDOF_BUTTON_1", 0, "NDOF Button 1", ""},
	{427, "NDOF_BUTTON_2", 0, "NDOF Button 2", ""},
	{428, "NDOF_BUTTON_3", 0, "NDOF Button 3", ""},
	{429, "NDOF_BUTTON_4", 0, "NDOF Button 4", ""},
	{430, "NDOF_BUTTON_5", 0, "NDOF Button 5", ""},
	{431, "NDOF_BUTTON_6", 0, "NDOF Button 6", ""},
	{432, "NDOF_BUTTON_7", 0, "NDOF Button 7", ""},
	{433, "NDOF_BUTTON_8", 0, "NDOF Button 8", ""},
	{434, "NDOF_BUTTON_9", 0, "NDOF Button 9", ""},
	{435, "NDOF_BUTTON_10", 0, "NDOF Button 10", ""},
	{436, "NDOF_BUTTON_A", 0, "NDOF Button A", ""},
	{437, "NDOF_BUTTON_B", 0, "NDOF Button B", ""},
	{438, "NDOF_BUTTON_C", 0, "NDOF Button C", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMapItem_key_modifier = {
	{(PropertyRNA *)&rna_KeyMapItem_show_expanded, (PropertyRNA *)&rna_KeyMapItem_oskey,
	-1, "key_modifier", 3, "Key Modifier",
	"Regular key pressed as a modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_key_modifier_get, KeyMapItem_key_modifier_set, NULL, NULL, NULL, NULL, rna_KeyMapItem_key_modifier_items, 195, 0
};

BoolPropertyRNA rna_KeyMapItem_show_expanded = {
	{(PropertyRNA *)&rna_KeyMapItem_propvalue, (PropertyRNA *)&rna_KeyMapItem_key_modifier,
	-1, "show_expanded", 4099, "Expanded",
	"Show key map event and property details in the user interface",
	4, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_show_expanded_get, KeyMapItem_show_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_KeyMapItem_propvalue_items[2] = {
	{0, "NONE", 0, "", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMapItem_propvalue = {
	{(PropertyRNA *)&rna_KeyMapItem_active, (PropertyRNA *)&rna_KeyMapItem_show_expanded,
	-1, "propvalue", 3, "Property Value",
	"The value this event translates to in a modal keymap",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_propvalue_get, KeyMapItem_propvalue_set, rna_KeyMapItem_propvalue_itemf, NULL, NULL, NULL, rna_KeyMapItem_propvalue_items, 1, 0
};

BoolPropertyRNA rna_KeyMapItem_active = {
	{(PropertyRNA *)&rna_KeyMapItem_is_user_modified, (PropertyRNA *)&rna_KeyMapItem_propvalue,
	-1, "active", 4099, "Active",
	"Activate or deactivate item",
	38, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_KeyMapItem_update, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_active_get, KeyMapItem_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyMapItem_is_user_modified = {
	{(PropertyRNA *)&rna_KeyMapItem_is_user_defined, (PropertyRNA *)&rna_KeyMapItem_active,
	-1, "is_user_modified", 2, "User Modified",
	"Is this keymap item modified by the user",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_is_user_modified_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyMapItem_is_user_defined = {
	{NULL, (PropertyRNA *)&rna_KeyMapItem_is_user_modified,
	-1, "is_user_defined", 2, "User Defined",
	"Is this keymap item user defined (doesn\'t just replace a builtin item)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_is_user_defined_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_KeyMapItem_compare_item = {
	{(PropertyRNA *)&rna_KeyMapItem_compare_result, NULL,
	-1, "item", 8388612, "Item",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMapItem
};

BoolPropertyRNA rna_KeyMapItem_compare_result = {
	{NULL, (PropertyRNA *)&rna_KeyMapItem_compare_item,
	-1, "result", 11, "Comparison result",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_KeyMapItem_compare_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_KeyMapItem_compare_item, (PropertyRNA *)&rna_KeyMapItem_compare_result}},
	"compare", 0, "compare",
	KeyMapItem_compare_call,
	(PropertyRNA *)&rna_KeyMapItem_compare_result
};

StructRNA RNA_KeyMapItem = {
	{(ContainerRNA *)&RNA_World, (ContainerRNA *)&RNA_KeyMapItems,
	NULL,
	{(PropertyRNA *)&rna_KeyMapItem_rna_properties, (PropertyRNA *)&rna_KeyMapItem_is_user_defined}},
	"KeyMapItem", NULL, NULL, 4, "Key Map Item",
	"Item in a Key Map",
	"*", 17,
	(PropertyRNA *)&rna_KeyMapItem_idname, (PropertyRNA *)&rna_KeyMapItem_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_KeyMapItem_compare_func, (FunctionRNA *)&rna_KeyMapItem_compare_func}
};

