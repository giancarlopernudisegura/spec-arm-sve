
/* Automatically generated struct definitions for the Data API.
 * Do not edit manually, changes will be overwritten.           */

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

#include "rna_color.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_CurveMapPoint_rna_properties;
PointerPropertyRNA rna_CurveMapPoint_rna_type;
FloatPropertyRNA rna_CurveMapPoint_location;
EnumPropertyRNA rna_CurveMapPoint_handle_type;
BoolPropertyRNA rna_CurveMapPoint_select;


CollectionPropertyRNA rna_CurveMap_rna_properties;
PointerPropertyRNA rna_CurveMap_rna_type;
EnumPropertyRNA rna_CurveMap_extend;
CollectionPropertyRNA rna_CurveMap_points;

extern FunctionRNA rna_CurveMap_evaluate_func;
extern FloatPropertyRNA rna_CurveMap_evaluate_position;
extern FloatPropertyRNA rna_CurveMap_evaluate_value;



CollectionPropertyRNA rna_CurveMapPoints_rna_properties;
PointerPropertyRNA rna_CurveMapPoints_rna_type;

extern FunctionRNA rna_CurveMapPoints_new_func;
extern FloatPropertyRNA rna_CurveMapPoints_new_position;
extern FloatPropertyRNA rna_CurveMapPoints_new_value;
extern PointerPropertyRNA rna_CurveMapPoints_new_point;

extern FunctionRNA rna_CurveMapPoints_remove_func;
extern PointerPropertyRNA rna_CurveMapPoints_remove_point;



CollectionPropertyRNA rna_CurveMapping_rna_properties;
PointerPropertyRNA rna_CurveMapping_rna_type;
BoolPropertyRNA rna_CurveMapping_use_clip;
FloatPropertyRNA rna_CurveMapping_clip_min_x;
FloatPropertyRNA rna_CurveMapping_clip_min_y;
FloatPropertyRNA rna_CurveMapping_clip_max_x;
FloatPropertyRNA rna_CurveMapping_clip_max_y;
CollectionPropertyRNA rna_CurveMapping_curves;
FloatPropertyRNA rna_CurveMapping_black_level;
FloatPropertyRNA rna_CurveMapping_white_level;

extern FunctionRNA rna_CurveMapping_update_func;
extern FunctionRNA rna_CurveMapping_initialize_func;


CollectionPropertyRNA rna_ColorRampElement_rna_properties;
PointerPropertyRNA rna_ColorRampElement_rna_type;
FloatPropertyRNA rna_ColorRampElement_color;
FloatPropertyRNA rna_ColorRampElement_alpha;
FloatPropertyRNA rna_ColorRampElement_position;


CollectionPropertyRNA rna_ColorRamp_rna_properties;
PointerPropertyRNA rna_ColorRamp_rna_type;
CollectionPropertyRNA rna_ColorRamp_elements;
EnumPropertyRNA rna_ColorRamp_interpolation;
EnumPropertyRNA rna_ColorRamp_hue_interpolation;
EnumPropertyRNA rna_ColorRamp_color_mode;

extern FunctionRNA rna_ColorRamp_evaluate_func;
extern FloatPropertyRNA rna_ColorRamp_evaluate_position;
extern FloatPropertyRNA rna_ColorRamp_evaluate_color;



CollectionPropertyRNA rna_ColorRampElements_rna_properties;
PointerPropertyRNA rna_ColorRampElements_rna_type;

extern FunctionRNA rna_ColorRampElements_new_func;
extern FloatPropertyRNA rna_ColorRampElements_new_position;
extern PointerPropertyRNA rna_ColorRampElements_new_element;

extern FunctionRNA rna_ColorRampElements_remove_func;
extern PointerPropertyRNA rna_ColorRampElements_remove_element;



CollectionPropertyRNA rna_Histogram_rna_properties;
PointerPropertyRNA rna_Histogram_rna_type;
EnumPropertyRNA rna_Histogram_mode;
BoolPropertyRNA rna_Histogram_show_line;


CollectionPropertyRNA rna_Scopes_rna_properties;
PointerPropertyRNA rna_Scopes_rna_type;
BoolPropertyRNA rna_Scopes_use_full_resolution;
FloatPropertyRNA rna_Scopes_accuracy;
PointerPropertyRNA rna_Scopes_histogram;
EnumPropertyRNA rna_Scopes_waveform_mode;
FloatPropertyRNA rna_Scopes_waveform_alpha;
FloatPropertyRNA rna_Scopes_vectorscope_alpha;


CollectionPropertyRNA rna_ColorManagedDisplaySettings_rna_properties;
PointerPropertyRNA rna_ColorManagedDisplaySettings_rna_type;
EnumPropertyRNA rna_ColorManagedDisplaySettings_display_device;


CollectionPropertyRNA rna_ColorManagedViewSettings_rna_properties;
PointerPropertyRNA rna_ColorManagedViewSettings_rna_type;
EnumPropertyRNA rna_ColorManagedViewSettings_look;
EnumPropertyRNA rna_ColorManagedViewSettings_view_transform;
FloatPropertyRNA rna_ColorManagedViewSettings_exposure;
FloatPropertyRNA rna_ColorManagedViewSettings_gamma;
PointerPropertyRNA rna_ColorManagedViewSettings_curve_mapping;
BoolPropertyRNA rna_ColorManagedViewSettings_use_curve_mapping;


CollectionPropertyRNA rna_ColorManagedInputColorspaceSettings_rna_properties;
PointerPropertyRNA rna_ColorManagedInputColorspaceSettings_rna_type;
EnumPropertyRNA rna_ColorManagedInputColorspaceSettings_name;


CollectionPropertyRNA rna_ColorManagedSequencerColorspaceSettings_rna_properties;
PointerPropertyRNA rna_ColorManagedSequencerColorspaceSettings_rna_type;
EnumPropertyRNA rna_ColorManagedSequencerColorspaceSettings_name;

static PointerRNA CurveMapPoint_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void CurveMapPoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_CurveMapPoint_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = CurveMapPoint_rna_properties_get(iter);
}

void CurveMapPoint_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = CurveMapPoint_rna_properties_get(iter);
}

void CurveMapPoint_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int CurveMapPoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA CurveMapPoint_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void CurveMapPoint_location_get(PointerRNA *ptr, float values[2])
{
	CurveMapPoint *data = (CurveMapPoint *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		values[i] = (float)((&data->x)[i]);
	}
}

void CurveMapPoint_location_set(PointerRNA *ptr, const float values[2])
{
	CurveMapPoint *data = (CurveMapPoint *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		(&data->x)[i] = values[i];
	}
}

int CurveMapPoint_handle_type_get(PointerRNA *ptr)
{
	CurveMapPoint *data = (CurveMapPoint *)(ptr->data);
	return ((data->flag) & 2);
}

void CurveMapPoint_handle_type_set(PointerRNA *ptr, int value)
{
	CurveMapPoint *data = (CurveMapPoint *)(ptr->data);
	data->flag &= ~2;
	data->flag |= value;
}

int CurveMapPoint_select_get(PointerRNA *ptr)
{
	CurveMapPoint *data = (CurveMapPoint *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void CurveMapPoint_select_set(PointerRNA *ptr, int value)
{
	CurveMapPoint *data = (CurveMapPoint *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

static PointerRNA CurveMap_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void CurveMap_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_CurveMap_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = CurveMap_rna_properties_get(iter);
}

void CurveMap_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = CurveMap_rna_properties_get(iter);
}

void CurveMap_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int CurveMap_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA CurveMap_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int CurveMap_extend_get(PointerRNA *ptr)
{
	CurveMap *data = (CurveMap *)(ptr->data);
	return ((data->flag) & 1);
}

void CurveMap_extend_set(PointerRNA *ptr, int value)
{
	CurveMap *data = (CurveMap *)(ptr->data);
	data->flag &= ~1;
	data->flag |= value;
}

int CurveMap_points_length(PointerRNA *ptr)
{
	CurveMap *data = (CurveMap *)(ptr->data);
	return (data->curve == NULL) ? 0 : data->totpoint;
}

static PointerRNA CurveMap_points_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_CurveMapPoint, rna_iterator_array_get(iter));
}

void CurveMap_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	CurveMap *data = (CurveMap *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_CurveMap_points;

	rna_iterator_array_begin(iter, data->curve, sizeof(data->curve[0]), data->totpoint, 0, NULL);

	if (iter->valid)
		iter->ptr = CurveMap_points_get(iter);
}

void CurveMap_points_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = CurveMap_points_get(iter);
}

void CurveMap_points_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int CurveMap_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	CurveMap_points_begin(&iter, ptr);

	if (iter.valid) {
		ArrayIterator *internal = &iter.internal.array;
		if (index < 0 || index >= internal->length) {
#ifdef __GNUC__
			printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
			printf("Array iterator out of range: (index %d)\n", index);
#endif
		}
		else if (internal->skip) {
			while (index-- > 0 && iter.valid) {
				rna_iterator_array_next(&iter);
			}
			found = (index == -1 && iter.valid);
		}
		else {
			internal->ptr += internal->itemsize * index;
			found = 1;
		}
		if (found) *r_ptr = CurveMap_points_get(&iter);
	}

	CurveMap_points_end(&iter);

	return found;
}

static PointerRNA CurveMapPoints_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void CurveMapPoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_CurveMapPoints_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = CurveMapPoints_rna_properties_get(iter);
}

void CurveMapPoints_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = CurveMapPoints_rna_properties_get(iter);
}

void CurveMapPoints_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int CurveMapPoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA CurveMapPoints_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA CurveMapping_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void CurveMapping_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_CurveMapping_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = CurveMapping_rna_properties_get(iter);
}

void CurveMapping_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = CurveMapping_rna_properties_get(iter);
}

void CurveMapping_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int CurveMapping_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA CurveMapping_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int CurveMapping_use_clip_get(PointerRNA *ptr)
{
	CurveMapping *data = (CurveMapping *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void CurveMapping_use_clip_set(PointerRNA *ptr, int value)
{
	rna_CurveMapping_clip_set(ptr, value);
}

float CurveMapping_clip_min_x_get(PointerRNA *ptr)
{
	CurveMapping *data = (CurveMapping *)(ptr->data);
	return (float)(data->clipr.xmin);
}

void CurveMapping_clip_min_x_set(PointerRNA *ptr, float value)
{
	CurveMapping *data = (CurveMapping *)(ptr->data);
	float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
	rna_CurveMapping_clipminx_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
	data->clipr.xmin = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

float CurveMapping_clip_min_y_get(PointerRNA *ptr)
{
	CurveMapping *data = (CurveMapping *)(ptr->data);
	return (float)(data->clipr.ymin);
}

void CurveMapping_clip_min_y_set(PointerRNA *ptr, float value)
{
	CurveMapping *data = (CurveMapping *)(ptr->data);
	float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
	rna_CurveMapping_clipminy_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
	data->clipr.ymin = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

float CurveMapping_clip_max_x_get(PointerRNA *ptr)
{
	CurveMapping *data = (CurveMapping *)(ptr->data);
	return (float)(data->clipr.xmax);
}

void CurveMapping_clip_max_x_set(PointerRNA *ptr, float value)
{
	CurveMapping *data = (CurveMapping *)(ptr->data);
	float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
	rna_CurveMapping_clipmaxx_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
	data->clipr.xmax = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

float CurveMapping_clip_max_y_get(PointerRNA *ptr)
{
	CurveMapping *data = (CurveMapping *)(ptr->data);
	return (float)(data->clipr.ymax);
}

void CurveMapping_clip_max_y_set(PointerRNA *ptr, float value)
{
	CurveMapping *data = (CurveMapping *)(ptr->data);
	float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
	rna_CurveMapping_clipmaxy_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
	data->clipr.ymax = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

static PointerRNA CurveMapping_curves_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_CurveMap, rna_iterator_array_get(iter));
}

void CurveMapping_curves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_CurveMapping_curves;

	rna_CurveMapping_curves_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = CurveMapping_curves_get(iter);
}

void CurveMapping_curves_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = CurveMapping_curves_get(iter);
}

void CurveMapping_curves_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

void CurveMapping_black_level_get(PointerRNA *ptr, float values[3])
{
	CurveMapping *data = (CurveMapping *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->black)[i]);
	}
}

void CurveMapping_black_level_set(PointerRNA *ptr, const float values[3])
{
	rna_CurveMapping_black_level_set(ptr, values);
}

void CurveMapping_white_level_get(PointerRNA *ptr, float values[3])
{
	CurveMapping *data = (CurveMapping *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->white)[i]);
	}
}

void CurveMapping_white_level_set(PointerRNA *ptr, const float values[3])
{
	rna_CurveMapping_white_level_set(ptr, values);
}

static PointerRNA ColorRampElement_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ColorRampElement_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ColorRampElement_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ColorRampElement_rna_properties_get(iter);
}

void ColorRampElement_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ColorRampElement_rna_properties_get(iter);
}

void ColorRampElement_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ColorRampElement_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ColorRampElement_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void ColorRampElement_color_get(PointerRNA *ptr, float values[4])
{
	CBData *data = (CBData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)((&data->r)[i]);
	}
}

void ColorRampElement_color_set(PointerRNA *ptr, const float values[4])
{
	CBData *data = (CBData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		(&data->r)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

float ColorRampElement_alpha_get(PointerRNA *ptr)
{
	CBData *data = (CBData *)(ptr->data);
	return (float)(data->a);
}

void ColorRampElement_alpha_set(PointerRNA *ptr, float value)
{
	CBData *data = (CBData *)(ptr->data);
	data->a = CLAMPIS(value, 0.0f, FLT_MAX);
}

float ColorRampElement_position_get(PointerRNA *ptr)
{
	CBData *data = (CBData *)(ptr->data);
	return (float)(data->pos);
}

void ColorRampElement_position_set(PointerRNA *ptr, float value)
{
	CBData *data = (CBData *)(ptr->data);
	data->pos = CLAMPIS(value, 0.0f, 1.0f);
}

static PointerRNA ColorRamp_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ColorRamp_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ColorRamp_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ColorRamp_rna_properties_get(iter);
}

void ColorRamp_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ColorRamp_rna_properties_get(iter);
}

void ColorRamp_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ColorRamp_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ColorRamp_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int ColorRamp_elements_length(PointerRNA *ptr)
{
	ColorBand *data = (ColorBand *)(ptr->data);
	return (data->data == NULL) ? 0 : data->tot;
}

static PointerRNA ColorRamp_elements_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_ColorRampElement, rna_iterator_array_get(iter));
}

void ColorRamp_elements_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	ColorBand *data = (ColorBand *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ColorRamp_elements;

	rna_iterator_array_begin(iter, data->data, sizeof(data->data[0]), data->tot, 0, NULL);

	if (iter->valid)
		iter->ptr = ColorRamp_elements_get(iter);
}

void ColorRamp_elements_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = ColorRamp_elements_get(iter);
}

void ColorRamp_elements_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int ColorRamp_elements_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	ColorRamp_elements_begin(&iter, ptr);

	if (iter.valid) {
		ArrayIterator *internal = &iter.internal.array;
		if (index < 0 || index >= internal->length) {
#ifdef __GNUC__
			printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
			printf("Array iterator out of range: (index %d)\n", index);
#endif
		}
		else if (internal->skip) {
			while (index-- > 0 && iter.valid) {
				rna_iterator_array_next(&iter);
			}
			found = (index == -1 && iter.valid);
		}
		else {
			internal->ptr += internal->itemsize * index;
			found = 1;
		}
		if (found) *r_ptr = ColorRamp_elements_get(&iter);
	}

	ColorRamp_elements_end(&iter);

	return found;
}

int ColorRamp_interpolation_get(PointerRNA *ptr)
{
	ColorBand *data = (ColorBand *)(ptr->data);
	return (int)(data->ipotype);
}

void ColorRamp_interpolation_set(PointerRNA *ptr, int value)
{
	ColorBand *data = (ColorBand *)(ptr->data);
	data->ipotype = value;
}

int ColorRamp_hue_interpolation_get(PointerRNA *ptr)
{
	ColorBand *data = (ColorBand *)(ptr->data);
	return (int)(data->ipotype_hue);
}

void ColorRamp_hue_interpolation_set(PointerRNA *ptr, int value)
{
	ColorBand *data = (ColorBand *)(ptr->data);
	data->ipotype_hue = value;
}

int ColorRamp_color_mode_get(PointerRNA *ptr)
{
	ColorBand *data = (ColorBand *)(ptr->data);
	return (int)(data->color_mode);
}

void ColorRamp_color_mode_set(PointerRNA *ptr, int value)
{
	ColorBand *data = (ColorBand *)(ptr->data);
	data->color_mode = value;
}

static PointerRNA ColorRampElements_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ColorRampElements_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ColorRampElements_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ColorRampElements_rna_properties_get(iter);
}

void ColorRampElements_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ColorRampElements_rna_properties_get(iter);
}

void ColorRampElements_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ColorRampElements_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ColorRampElements_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA Histogram_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Histogram_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Histogram_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Histogram_rna_properties_get(iter);
}

void Histogram_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Histogram_rna_properties_get(iter);
}

void Histogram_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Histogram_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Histogram_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int Histogram_mode_get(PointerRNA *ptr)
{
	Histogram *data = (Histogram *)(ptr->data);
	return (int)(data->mode);
}

void Histogram_mode_set(PointerRNA *ptr, int value)
{
	Histogram *data = (Histogram *)(ptr->data);
	data->mode = value;
}

int Histogram_show_line_get(PointerRNA *ptr)
{
	Histogram *data = (Histogram *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void Histogram_show_line_set(PointerRNA *ptr, int value)
{
	Histogram *data = (Histogram *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

static PointerRNA Scopes_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Scopes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Scopes_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Scopes_rna_properties_get(iter);
}

void Scopes_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Scopes_rna_properties_get(iter);
}

void Scopes_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Scopes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Scopes_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int Scopes_use_full_resolution_get(PointerRNA *ptr)
{
	Scopes *data = (Scopes *)(ptr->data);
	return (((data->sample_full) & 1) != 0);
}

void Scopes_use_full_resolution_set(PointerRNA *ptr, int value)
{
	Scopes *data = (Scopes *)(ptr->data);
	if (value) data->sample_full |= 1;
	else data->sample_full &= ~1;
}

float Scopes_accuracy_get(PointerRNA *ptr)
{
	Scopes *data = (Scopes *)(ptr->data);
	return (float)(data->accuracy);
}

void Scopes_accuracy_set(PointerRNA *ptr, float value)
{
	Scopes *data = (Scopes *)(ptr->data);
	data->accuracy = CLAMPIS(value, 0.0f, 100.0f);
}

PointerRNA Scopes_histogram_get(PointerRNA *ptr)
{
	Scopes *data = (Scopes *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Histogram, &data->hist);
}

int Scopes_waveform_mode_get(PointerRNA *ptr)
{
	Scopes *data = (Scopes *)(ptr->data);
	return (int)(data->wavefrm_mode);
}

void Scopes_waveform_mode_set(PointerRNA *ptr, int value)
{
	Scopes *data = (Scopes *)(ptr->data);
	data->wavefrm_mode = value;
}

float Scopes_waveform_alpha_get(PointerRNA *ptr)
{
	Scopes *data = (Scopes *)(ptr->data);
	return (float)(data->wavefrm_alpha);
}

void Scopes_waveform_alpha_set(PointerRNA *ptr, float value)
{
	Scopes *data = (Scopes *)(ptr->data);
	data->wavefrm_alpha = CLAMPIS(value, 0.0f, 1.0f);
}

float Scopes_vectorscope_alpha_get(PointerRNA *ptr)
{
	Scopes *data = (Scopes *)(ptr->data);
	return (float)(data->vecscope_alpha);
}

void Scopes_vectorscope_alpha_set(PointerRNA *ptr, float value)
{
	Scopes *data = (Scopes *)(ptr->data);
	data->vecscope_alpha = CLAMPIS(value, 0.0f, 1.0f);
}

static PointerRNA ColorManagedDisplaySettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ColorManagedDisplaySettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ColorManagedDisplaySettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ColorManagedDisplaySettings_rna_properties_get(iter);
}

void ColorManagedDisplaySettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ColorManagedDisplaySettings_rna_properties_get(iter);
}

void ColorManagedDisplaySettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ColorManagedDisplaySettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ColorManagedDisplaySettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int ColorManagedDisplaySettings_display_device_get(PointerRNA *ptr)
{
	return rna_ColorManagedDisplaySettings_display_device_get(ptr);
}

void ColorManagedDisplaySettings_display_device_set(PointerRNA *ptr, int value)
{
	rna_ColorManagedDisplaySettings_display_device_set(ptr, value);
}

static PointerRNA ColorManagedViewSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ColorManagedViewSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ColorManagedViewSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ColorManagedViewSettings_rna_properties_get(iter);
}

void ColorManagedViewSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ColorManagedViewSettings_rna_properties_get(iter);
}

void ColorManagedViewSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ColorManagedViewSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ColorManagedViewSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int ColorManagedViewSettings_look_get(PointerRNA *ptr)
{
	return rna_ColorManagedViewSettings_look_get(ptr);
}

void ColorManagedViewSettings_look_set(PointerRNA *ptr, int value)
{
	rna_ColorManagedViewSettings_look_set(ptr, value);
}

int ColorManagedViewSettings_view_transform_get(PointerRNA *ptr)
{
	return rna_ColorManagedViewSettings_view_transform_get(ptr);
}

void ColorManagedViewSettings_view_transform_set(PointerRNA *ptr, int value)
{
	rna_ColorManagedViewSettings_view_transform_set(ptr, value);
}

float ColorManagedViewSettings_exposure_get(PointerRNA *ptr)
{
	ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
	return (float)(data->exposure);
}

void ColorManagedViewSettings_exposure_set(PointerRNA *ptr, float value)
{
	ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
	data->exposure = CLAMPIS(value, -10.0f, 10.0f);
}

float ColorManagedViewSettings_gamma_get(PointerRNA *ptr)
{
	ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
	return (float)(data->gamma);
}

void ColorManagedViewSettings_gamma_set(PointerRNA *ptr, float value)
{
	ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
	data->gamma = CLAMPIS(value, 0.0f, 5.0f);
}

PointerRNA ColorManagedViewSettings_curve_mapping_get(PointerRNA *ptr)
{
	ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve_mapping);
}

int ColorManagedViewSettings_use_curve_mapping_get(PointerRNA *ptr)
{
	ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void ColorManagedViewSettings_use_curve_mapping_set(PointerRNA *ptr, int value)
{
	rna_ColorManagedViewSettings_use_curves_set(ptr, value);
}

static PointerRNA ColorManagedInputColorspaceSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ColorManagedInputColorspaceSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ColorManagedInputColorspaceSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ColorManagedInputColorspaceSettings_rna_properties_get(iter);
}

void ColorManagedInputColorspaceSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ColorManagedInputColorspaceSettings_rna_properties_get(iter);
}

void ColorManagedInputColorspaceSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ColorManagedInputColorspaceSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ColorManagedInputColorspaceSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int ColorManagedInputColorspaceSettings_name_get(PointerRNA *ptr)
{
	return rna_ColorManagedColorspaceSettings_colorspace_get(ptr);
}

void ColorManagedInputColorspaceSettings_name_set(PointerRNA *ptr, int value)
{
	rna_ColorManagedColorspaceSettings_colorspace_set(ptr, value);
}

static PointerRNA ColorManagedSequencerColorspaceSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ColorManagedSequencerColorspaceSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ColorManagedSequencerColorspaceSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ColorManagedSequencerColorspaceSettings_rna_properties_get(iter);
}

void ColorManagedSequencerColorspaceSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ColorManagedSequencerColorspaceSettings_rna_properties_get(iter);
}

void ColorManagedSequencerColorspaceSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ColorManagedSequencerColorspaceSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ColorManagedSequencerColorspaceSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int ColorManagedSequencerColorspaceSettings_name_get(PointerRNA *ptr)
{
	return rna_ColorManagedColorspaceSettings_colorspace_get(ptr);
}

void ColorManagedSequencerColorspaceSettings_name_set(PointerRNA *ptr, int value)
{
	rna_ColorManagedColorspaceSettings_colorspace_set(ptr, value);
}


float CurveMap_evaluate(struct CurveMap *_self, ReportList *reports, float position)
{
	return rna_CurveMap_evaluateF(_self, reports, position);
}

void CurveMap_evaluate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct CurveMap *_self;
	float position;
	float value;
	char *_data, *_retdata;
	
	_self = (struct CurveMap *)_ptr->data;
	_data = (char *)_parms->data;
	position = *((float *)_data);
	_data += 4;
	_retdata = _data;
	
	value = rna_CurveMap_evaluateF(_self, reports, position);
	*((float *)_retdata) = value;
}

/* Repeated prototypes to detect errors */

float rna_CurveMap_evaluateF(struct CurveMap *_self, ReportList *reports, float position);

struct CurveMapPoint *CurveMapPoints_new(struct CurveMap *_self, float position, float value)
{
	return curvemap_insert(_self, position, value);
}

void CurveMapPoints_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct CurveMap *_self;
	float position;
	float value;
	struct CurveMapPoint *point;
	char *_data, *_retdata;
	
	_self = (struct CurveMap *)_ptr->data;
	_data = (char *)_parms->data;
	position = *((float *)_data);
	_data += 4;
	value = *((float *)_data);
	_data += 4;
	_retdata = _data;
	
	point = curvemap_insert(_self, position, value);
	*((struct CurveMapPoint **)_retdata) = point;
}

void CurveMapPoints_remove(struct CurveMap *_self, ReportList *reports, struct PointerRNA *point)
{
	rna_CurveMap_remove_point(_self, reports, point);
}

void CurveMapPoints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct CurveMap *_self;
	struct PointerRNA *point;
	char *_data;
	
	_self = (struct CurveMap *)_ptr->data;
	_data = (char *)_parms->data;
	point = *((struct PointerRNA **)_data);
	
	rna_CurveMap_remove_point(_self, reports, point);
}

/* Repeated prototypes to detect errors */

struct CurveMapPoint *curvemap_insert(struct CurveMap *_self, float position, float value);
void rna_CurveMap_remove_point(struct CurveMap *_self, ReportList *reports, struct PointerRNA *point);

void CurveMapping_update(struct CurveMapping *_self)
{
	curvemapping_changed_all(_self);
}

void CurveMapping_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct CurveMapping *_self;
	_self = (struct CurveMapping *)_ptr->data;
	
	curvemapping_changed_all(_self);
}

void CurveMapping_initialize(struct CurveMapping *_self)
{
	rna_CurveMap_initialize(_self);
}

void CurveMapping_initialize_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct CurveMapping *_self;
	_self = (struct CurveMapping *)_ptr->data;
	
	rna_CurveMap_initialize(_self);
}

/* Repeated prototypes to detect errors */

void curvemapping_changed_all(struct CurveMapping *_self);
void rna_CurveMap_initialize(struct CurveMapping *_self);


void ColorRamp_evaluate(struct ColorBand *_self, float position, float color[4])
{
	rna_ColorRamp_eval(_self, position, color);
}

void ColorRamp_evaluate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ColorBand *_self;
	float position;
	float *color;
	char *_data;
	
	_self = (struct ColorBand *)_ptr->data;
	_data = (char *)_parms->data;
	position = *((float *)_data);
	_data += 4;
	color = ((float *)_data);
	
	rna_ColorRamp_eval(_self, position, color);
}

/* Repeated prototypes to detect errors */

void rna_ColorRamp_eval(struct ColorBand *_self, float position, float color[4]);

struct CBData *ColorRampElements_new(struct ColorBand *_self, ReportList *reports, float position)
{
	return rna_ColorRampElement_new(_self, reports, position);
}

void ColorRampElements_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ColorBand *_self;
	float position;
	struct CBData *element;
	char *_data, *_retdata;
	
	_self = (struct ColorBand *)_ptr->data;
	_data = (char *)_parms->data;
	position = *((float *)_data);
	_data += 4;
	_retdata = _data;
	
	element = rna_ColorRampElement_new(_self, reports, position);
	*((struct CBData **)_retdata) = element;
}

void ColorRampElements_remove(struct ColorBand *_self, ReportList *reports, struct PointerRNA *element)
{
	rna_ColorRampElement_remove(_self, reports, element);
}

void ColorRampElements_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ColorBand *_self;
	struct PointerRNA *element;
	char *_data;
	
	_self = (struct ColorBand *)_ptr->data;
	_data = (char *)_parms->data;
	element = *((struct PointerRNA **)_data);
	
	rna_ColorRampElement_remove(_self, reports, element);
}

/* Repeated prototypes to detect errors */

struct CBData *rna_ColorRampElement_new(struct ColorBand *_self, ReportList *reports, float position);
void rna_ColorRampElement_remove(struct ColorBand *_self, ReportList *reports, struct PointerRNA *element);







/* CurveMapPoint */
CollectionPropertyRNA rna_CurveMapPoint_rna_properties = {
	{(PropertyRNA *)&rna_CurveMapPoint_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMapPoint_rna_properties_begin, CurveMapPoint_rna_properties_next, CurveMapPoint_rna_properties_end, CurveMapPoint_rna_properties_get, NULL, NULL, CurveMapPoint_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_CurveMapPoint_rna_type = {
	{(PropertyRNA *)&rna_CurveMapPoint_location, (PropertyRNA *)&rna_CurveMapPoint_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMapPoint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_CurveMapPoint_location_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_CurveMapPoint_location = {
	{(PropertyRNA *)&rna_CurveMapPoint_handle_type, (PropertyRNA *)&rna_CurveMapPoint_rna_type,
	-1, "location", 8195, "Location",
	"X/Y coordinates of the curve point",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL,
	offsetof(CurveMapPoint, x), 4, NULL},
	NULL, NULL, CurveMapPoint_location_get, CurveMapPoint_location_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_CurveMapPoint_location_default
};

static EnumPropertyItem rna_CurveMapPoint_handle_type_items[3] = {
	{0, "AUTO", 0, "Auto Handle", ""},
	{2, "VECTOR", 0, "Vector Handle", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_CurveMapPoint_handle_type = {
	{(PropertyRNA *)&rna_CurveMapPoint_select, (PropertyRNA *)&rna_CurveMapPoint_location,
	-1, "handle_type", 3, "Handle Type",
	"Curve interpolation at this point: Bezier or vector",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMapPoint_handle_type_get, CurveMapPoint_handle_type_set, NULL, NULL, NULL, NULL, rna_CurveMapPoint_handle_type_items, 2, 0
};

BoolPropertyRNA rna_CurveMapPoint_select = {
	{NULL, (PropertyRNA *)&rna_CurveMapPoint_handle_type,
	-1, "select", 3, "Select",
	"Selection state of the curve point",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMapPoint_select_get, CurveMapPoint_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_CurveMapPoint = {
	{(ContainerRNA *)&RNA_CurveMap, (ContainerRNA *)&RNA_ClothCollisionSettings,
	NULL,
	{(PropertyRNA *)&rna_CurveMapPoint_rna_properties, (PropertyRNA *)&rna_CurveMapPoint_select}},
	"CurveMapPoint", NULL, NULL, 4, "CurveMapPoint",
	"Point of a curve used for a curve mapping",
	"*", 17,
	NULL, (PropertyRNA *)&rna_CurveMapPoint_rna_properties,
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

/* CurveMap */
CollectionPropertyRNA rna_CurveMap_rna_properties = {
	{(PropertyRNA *)&rna_CurveMap_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMap_rna_properties_begin, CurveMap_rna_properties_next, CurveMap_rna_properties_end, CurveMap_rna_properties_get, NULL, NULL, CurveMap_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_CurveMap_rna_type = {
	{(PropertyRNA *)&rna_CurveMap_extend, (PropertyRNA *)&rna_CurveMap_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMap_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_CurveMap_extend_items[3] = {
	{0, "HORIZONTAL", 0, "Horizontal", ""},
	{1, "EXTRAPOLATED", 0, "Extrapolated", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_CurveMap_extend = {
	{(PropertyRNA *)&rna_CurveMap_points, (PropertyRNA *)&rna_CurveMap_rna_type,
	-1, "extend", 3, "Extend",
	"Extrapolate the curve or extend it horizontally",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMap_extend_get, CurveMap_extend_set, NULL, NULL, NULL, NULL, rna_CurveMap_extend_items, 2, 0
};

CollectionPropertyRNA rna_CurveMap_points = {
	{NULL, (PropertyRNA *)&rna_CurveMap_extend,
	-1, "points", 16384, "Points",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_CurveMapPoints},
	CurveMap_points_begin, CurveMap_points_next, CurveMap_points_end, CurveMap_points_get, CurveMap_points_length, CurveMap_points_lookup_int, NULL, NULL, &RNA_CurveMapPoint
};

FloatPropertyRNA rna_CurveMap_evaluate_position = {
	{(PropertyRNA *)&rna_CurveMap_evaluate_value, NULL,
	-1, "position", 7, "Position",
	"Position to evaluate curve at",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_CurveMap_evaluate_value = {
	{NULL, (PropertyRNA *)&rna_CurveMap_evaluate_position,
	-1, "value", 11, "Value",
	"Value of curve at given location",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FunctionRNA rna_CurveMap_evaluate_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_CurveMap_evaluate_position, (PropertyRNA *)&rna_CurveMap_evaluate_value}},
	"evaluate", 16, "Evaluate curve at given location",
	CurveMap_evaluate_call,
	(PropertyRNA *)&rna_CurveMap_evaluate_value
};

StructRNA RNA_CurveMap = {
	{(ContainerRNA *)&RNA_CurveMapPoints, (ContainerRNA *)&RNA_CurveMapPoint,
	NULL,
	{(PropertyRNA *)&rna_CurveMap_rna_properties, (PropertyRNA *)&rna_CurveMap_points}},
	"CurveMap", NULL, NULL, 4, "CurveMap",
	"Curve in a curve mapping",
	"*", 17,
	NULL, (PropertyRNA *)&rna_CurveMap_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_CurveMap_evaluate_func, (FunctionRNA *)&rna_CurveMap_evaluate_func}
};

/* Curve Map Point */
CollectionPropertyRNA rna_CurveMapPoints_rna_properties = {
	{(PropertyRNA *)&rna_CurveMapPoints_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMapPoints_rna_properties_begin, CurveMapPoints_rna_properties_next, CurveMapPoints_rna_properties_end, CurveMapPoints_rna_properties_get, NULL, NULL, CurveMapPoints_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_CurveMapPoints_rna_type = {
	{NULL, (PropertyRNA *)&rna_CurveMapPoints_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMapPoints_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_CurveMapPoints_new_position = {
	{(PropertyRNA *)&rna_CurveMapPoints_new_value, NULL,
	-1, "position", 7, "Position",
	"Position to add point",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_CurveMapPoints_new_value = {
	{(PropertyRNA *)&rna_CurveMapPoints_new_point, (PropertyRNA *)&rna_CurveMapPoints_new_position,
	-1, "value", 7, "Value",
	"Value of point",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_CurveMapPoints_new_point = {
	{NULL, (PropertyRNA *)&rna_CurveMapPoints_new_value,
	-1, "point", 8388616, "",
	"New point",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_CurveMapPoint
};

FunctionRNA rna_CurveMapPoints_new_func = {
	{(FunctionRNA *)&rna_CurveMapPoints_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_CurveMapPoints_new_position, (PropertyRNA *)&rna_CurveMapPoints_new_point}},
	"new", 0, "Add point to CurveMap",
	CurveMapPoints_new_call,
	(PropertyRNA *)&rna_CurveMapPoints_new_point
};

PointerPropertyRNA rna_CurveMapPoints_remove_point = {
	{NULL, NULL,
	-1, "point", 264196, "",
	"PointElement to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_CurveMapPoint
};

FunctionRNA rna_CurveMapPoints_remove_func = {
	{NULL, (FunctionRNA *)&rna_CurveMapPoints_new_func,
	NULL,
	{(PropertyRNA *)&rna_CurveMapPoints_remove_point, (PropertyRNA *)&rna_CurveMapPoints_remove_point}},
	"remove", 16, "Delete point from CurveMap",
	CurveMapPoints_remove_call,
	NULL
};

StructRNA RNA_CurveMapPoints = {
	{(ContainerRNA *)&RNA_CurveMapping, (ContainerRNA *)&RNA_CurveMap,
	NULL,
	{(PropertyRNA *)&rna_CurveMapPoints_rna_properties, (PropertyRNA *)&rna_CurveMapPoints_rna_type}},
	"CurveMapPoints", NULL, NULL, 4, "Curve Map Point",
	"Collection of Curve Map Points",
	"*", 17,
	NULL, (PropertyRNA *)&rna_CurveMapPoints_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_CurveMapPoints_new_func, (FunctionRNA *)&rna_CurveMapPoints_remove_func}
};

/* CurveMapping */
CollectionPropertyRNA rna_CurveMapping_rna_properties = {
	{(PropertyRNA *)&rna_CurveMapping_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMapping_rna_properties_begin, CurveMapping_rna_properties_next, CurveMapping_rna_properties_end, CurveMapping_rna_properties_get, NULL, NULL, CurveMapping_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_CurveMapping_rna_type = {
	{(PropertyRNA *)&rna_CurveMapping_use_clip, (PropertyRNA *)&rna_CurveMapping_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMapping_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_CurveMapping_use_clip = {
	{(PropertyRNA *)&rna_CurveMapping_clip_min_x, (PropertyRNA *)&rna_CurveMapping_rna_type,
	-1, "use_clip", 3, "Clip",
	"Force the curve view to fit a defined boundary",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMapping_use_clip_get, CurveMapping_use_clip_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_CurveMapping_clip_min_x = {
	{(PropertyRNA *)&rna_CurveMapping_clip_min_y, (PropertyRNA *)&rna_CurveMapping_use_clip,
	-1, "clip_min_x", 8195, "Clip Min X",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(CurveMapping, clipr.xmin), 4, NULL},
	CurveMapping_clip_min_x_get, CurveMapping_clip_min_x_set, NULL, NULL, rna_CurveMapping_clipminx_range, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -100.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_CurveMapping_clip_min_y = {
	{(PropertyRNA *)&rna_CurveMapping_clip_max_x, (PropertyRNA *)&rna_CurveMapping_clip_min_x,
	-1, "clip_min_y", 8195, "Clip Min Y",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(CurveMapping, clipr.ymin), 4, NULL},
	CurveMapping_clip_min_y_get, CurveMapping_clip_min_y_set, NULL, NULL, rna_CurveMapping_clipminy_range, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -100.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_CurveMapping_clip_max_x = {
	{(PropertyRNA *)&rna_CurveMapping_clip_max_y, (PropertyRNA *)&rna_CurveMapping_clip_min_y,
	-1, "clip_max_x", 8195, "Clip Max X",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(CurveMapping, clipr.xmax), 4, NULL},
	CurveMapping_clip_max_x_get, CurveMapping_clip_max_x_set, NULL, NULL, rna_CurveMapping_clipmaxx_range, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -100.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_CurveMapping_clip_max_y = {
	{(PropertyRNA *)&rna_CurveMapping_curves, (PropertyRNA *)&rna_CurveMapping_clip_max_x,
	-1, "clip_max_y", 8195, "Clip Max Y",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(CurveMapping, clipr.ymax), 4, NULL},
	CurveMapping_clip_max_y_get, CurveMapping_clip_max_y_set, NULL, NULL, rna_CurveMapping_clipmaxy_range, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -100.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_CurveMapping_curves = {
	{(PropertyRNA *)&rna_CurveMapping_black_level, (PropertyRNA *)&rna_CurveMapping_clip_max_y,
	-1, "curves", 16384, "Curves",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMapping_curves_begin, CurveMapping_curves_next, CurveMapping_curves_end, CurveMapping_curves_get, rna_CurveMapping_curves_length, NULL, NULL, NULL, &RNA_CurveMap
};

static float rna_CurveMapping_black_level_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_CurveMapping_black_level = {
	{(PropertyRNA *)&rna_CurveMapping_white_level, (PropertyRNA *)&rna_CurveMapping_curves,
	-1, "black_level", 3, "Black Level",
	"For RGB curves, the color that black is mapped to",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, CurveMapping_black_level_get, CurveMapping_black_level_set, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_CurveMapping_black_level_default
};

static float rna_CurveMapping_white_level_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_CurveMapping_white_level = {
	{NULL, (PropertyRNA *)&rna_CurveMapping_black_level,
	-1, "white_level", 3, "White Level",
	"For RGB curves, the color that white is mapped to",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, CurveMapping_white_level_get, CurveMapping_white_level_set, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_CurveMapping_white_level_default
};

FunctionRNA rna_CurveMapping_update_func = {
	{(FunctionRNA *)&rna_CurveMapping_initialize_func, NULL,
	NULL,
	{NULL, NULL}},
	"update", 0, "Update curve mapping after making changes",
	CurveMapping_update_call,
	NULL
};

FunctionRNA rna_CurveMapping_initialize_func = {
	{NULL, (FunctionRNA *)&rna_CurveMapping_update_func,
	NULL,
	{NULL, NULL}},
	"initialize", 0, "Initialize curve",
	CurveMapping_initialize_call,
	NULL
};

StructRNA RNA_CurveMapping = {
	{(ContainerRNA *)&RNA_ColorRampElement, (ContainerRNA *)&RNA_CurveMapPoints,
	NULL,
	{(PropertyRNA *)&rna_CurveMapping_rna_properties, (PropertyRNA *)&rna_CurveMapping_white_level}},
	"CurveMapping", NULL, NULL, 4, "CurveMapping",
	"Curve mapping to map color, vector and scalar values to other values using a user defined curve",
	"*", 17,
	NULL, (PropertyRNA *)&rna_CurveMapping_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_CurveMapping_update_func, (FunctionRNA *)&rna_CurveMapping_initialize_func}
};

/* Color Ramp Element */
CollectionPropertyRNA rna_ColorRampElement_rna_properties = {
	{(PropertyRNA *)&rna_ColorRampElement_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ColorRampElement_rna_properties_begin, ColorRampElement_rna_properties_next, ColorRampElement_rna_properties_end, ColorRampElement_rna_properties_get, NULL, NULL, ColorRampElement_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ColorRampElement_rna_type = {
	{(PropertyRNA *)&rna_ColorRampElement_color, (PropertyRNA *)&rna_ColorRampElement_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ColorRampElement_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_ColorRampElement_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ColorRampElement_color = {
	{(PropertyRNA *)&rna_ColorRampElement_alpha, (PropertyRNA *)&rna_ColorRampElement_rna_type,
	-1, "color", 8195, "Color",
	"Set color of selected color stop",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_ColorRamp_update, 0, NULL, NULL,
	offsetof(CBData, r), 4, NULL},
	NULL, NULL, ColorRampElement_color_get, ColorRampElement_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_ColorRampElement_color_default
};

FloatPropertyRNA rna_ColorRampElement_alpha = {
	{(PropertyRNA *)&rna_ColorRampElement_position, (PropertyRNA *)&rna_ColorRampElement_color,
	-1, "alpha", 8195, "Alpha",
	"Set alpha of selected color stop",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ColorRamp_update, 0, NULL, NULL,
	offsetof(CBData, a), 4, NULL},
	ColorRampElement_alpha_get, ColorRampElement_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ColorRampElement_position = {
	{NULL, (PropertyRNA *)&rna_ColorRampElement_alpha,
	-1, "position", 8195, "Position",
	"Set position of selected color stop",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ColorRamp_update, 0, NULL, NULL,
	offsetof(CBData, pos), 4, NULL},
	ColorRampElement_position_get, ColorRampElement_position_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_ColorRampElement = {
	{(ContainerRNA *)&RNA_ColorRamp, (ContainerRNA *)&RNA_CurveMapping,
	NULL,
	{(PropertyRNA *)&rna_ColorRampElement_rna_properties, (PropertyRNA *)&rna_ColorRampElement_position}},
	"ColorRampElement", NULL, NULL, 4, "Color Ramp Element",
	"Element defining a color at a position in the color ramp",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ColorRampElement_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ColorRampElement_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Color Ramp */
CollectionPropertyRNA rna_ColorRamp_rna_properties = {
	{(PropertyRNA *)&rna_ColorRamp_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ColorRamp_rna_properties_begin, ColorRamp_rna_properties_next, ColorRamp_rna_properties_end, ColorRamp_rna_properties_get, NULL, NULL, ColorRamp_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ColorRamp_rna_type = {
	{(PropertyRNA *)&rna_ColorRamp_elements, (PropertyRNA *)&rna_ColorRamp_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ColorRamp_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_ColorRamp_elements = {
	{(PropertyRNA *)&rna_ColorRamp_interpolation, (PropertyRNA *)&rna_ColorRamp_rna_type,
	-1, "elements", 16384, "Elements",
	"",
	0, "*",
	PROP_COLLECTION, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {32, 0, 0}, 0,
	rna_ColorRamp_update, 0, NULL, NULL,
	0, -1, &RNA_ColorRampElements},
	ColorRamp_elements_begin, ColorRamp_elements_next, ColorRamp_elements_end, ColorRamp_elements_get, ColorRamp_elements_length, ColorRamp_elements_lookup_int, NULL, NULL, &RNA_ColorRampElement
};

static EnumPropertyItem rna_ColorRamp_interpolation_items[6] = {
	{1, "EASE", 0, "Ease", ""},
	{3, "CARDINAL", 0, "Cardinal", ""},
	{0, "LINEAR", 0, "Linear", ""},
	{2, "B_SPLINE", 0, "B-Spline", ""},
	{4, "CONSTANT", 0, "Constant", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ColorRamp_interpolation = {
	{(PropertyRNA *)&rna_ColorRamp_hue_interpolation, (PropertyRNA *)&rna_ColorRamp_elements,
	-1, "interpolation", 3, "Interpolation",
	"Set interpolation between color stops",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ColorRamp_update, 0, NULL, NULL,
	0, -1, NULL},
	ColorRamp_interpolation_get, ColorRamp_interpolation_set, NULL, NULL, NULL, NULL, rna_ColorRamp_interpolation_items, 5, 0
};

static EnumPropertyItem rna_ColorRamp_hue_interpolation_items[5] = {
	{0, "NEAR", 0, "Near", ""},
	{1, "FAR", 0, "Far", ""},
	{2, "CW", 0, "Clockwise", ""},
	{3, "CCW", 0, "Counter-Clockwise", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ColorRamp_hue_interpolation = {
	{(PropertyRNA *)&rna_ColorRamp_color_mode, (PropertyRNA *)&rna_ColorRamp_interpolation,
	-1, "hue_interpolation", 3, "Color Interpolation",
	"Set color interpolation",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ColorRamp_update, 0, NULL, NULL,
	0, -1, NULL},
	ColorRamp_hue_interpolation_get, ColorRamp_hue_interpolation_set, NULL, NULL, NULL, NULL, rna_ColorRamp_hue_interpolation_items, 4, 0
};

static EnumPropertyItem rna_ColorRamp_color_mode_items[4] = {
	{0, "RGB", 0, "RGB", ""},
	{1, "HSV", 0, "HSV", ""},
	{2, "HSL", 0, "HSL", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ColorRamp_color_mode = {
	{NULL, (PropertyRNA *)&rna_ColorRamp_hue_interpolation,
	-1, "color_mode", 3, "Color Mode",
	"Set color mode to use for interpolation",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ColorRamp_update, 0, NULL, NULL,
	0, -1, NULL},
	ColorRamp_color_mode_get, ColorRamp_color_mode_set, NULL, NULL, NULL, NULL, rna_ColorRamp_color_mode_items, 3, 0
};

FloatPropertyRNA rna_ColorRamp_evaluate_position = {
	{(PropertyRNA *)&rna_ColorRamp_evaluate_color, NULL,
	-1, "position", 7, "Position",
	"Evaluate ColorRamp at position",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 1.0f, NULL
};

static float rna_ColorRamp_evaluate_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ColorRamp_evaluate_color = {
	{NULL, (PropertyRNA *)&rna_ColorRamp_evaluate_position,
	-1, "color", 8388619, "Color",
	"Color at given position",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_ColorRamp_evaluate_color_default
};

FunctionRNA rna_ColorRamp_evaluate_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_ColorRamp_evaluate_position, (PropertyRNA *)&rna_ColorRamp_evaluate_color}},
	"evaluate", 0, "Evaluate ColorRamp",
	ColorRamp_evaluate_call,
	NULL
};

StructRNA RNA_ColorRamp = {
	{(ContainerRNA *)&RNA_ColorRampElements, (ContainerRNA *)&RNA_ColorRampElement,
	NULL,
	{(PropertyRNA *)&rna_ColorRamp_rna_properties, (PropertyRNA *)&rna_ColorRamp_color_mode}},
	"ColorRamp", NULL, NULL, 4, "Color Ramp",
	"Color ramp mapping a scalar value to a color",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ColorRamp_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ColorRamp_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_ColorRamp_evaluate_func, (FunctionRNA *)&rna_ColorRamp_evaluate_func}
};

/* Color Ramp Elements */
CollectionPropertyRNA rna_ColorRampElements_rna_properties = {
	{(PropertyRNA *)&rna_ColorRampElements_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ColorRampElements_rna_properties_begin, ColorRampElements_rna_properties_next, ColorRampElements_rna_properties_end, ColorRampElements_rna_properties_get, NULL, NULL, ColorRampElements_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ColorRampElements_rna_type = {
	{NULL, (PropertyRNA *)&rna_ColorRampElements_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ColorRampElements_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_ColorRampElements_new_position = {
	{(PropertyRNA *)&rna_ColorRampElements_new_element, NULL,
	-1, "position", 7, "Position",
	"Position to add element",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_ColorRampElements_new_element = {
	{NULL, (PropertyRNA *)&rna_ColorRampElements_new_position,
	-1, "element", 8388616, "",
	"New element",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ColorRampElement
};

FunctionRNA rna_ColorRampElements_new_func = {
	{(FunctionRNA *)&rna_ColorRampElements_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_ColorRampElements_new_position, (PropertyRNA *)&rna_ColorRampElements_new_element}},
	"new", 16, "Add element to ColorRamp",
	ColorRampElements_new_call,
	(PropertyRNA *)&rna_ColorRampElements_new_element
};

PointerPropertyRNA rna_ColorRampElements_remove_element = {
	{NULL, NULL,
	-1, "element", 264196, "",
	"Element to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ColorRampElement
};

FunctionRNA rna_ColorRampElements_remove_func = {
	{NULL, (FunctionRNA *)&rna_ColorRampElements_new_func,
	NULL,
	{(PropertyRNA *)&rna_ColorRampElements_remove_element, (PropertyRNA *)&rna_ColorRampElements_remove_element}},
	"remove", 16, "Delete element from ColorRamp",
	ColorRampElements_remove_call,
	NULL
};

StructRNA RNA_ColorRampElements = {
	{(ContainerRNA *)&RNA_Histogram, (ContainerRNA *)&RNA_ColorRamp,
	NULL,
	{(PropertyRNA *)&rna_ColorRampElements_rna_properties, (PropertyRNA *)&rna_ColorRampElements_rna_type}},
	"ColorRampElements", NULL, NULL, 4, "Color Ramp Elements",
	"Collection of Color Ramp Elements",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ColorRampElements_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ColorRampElement_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_ColorRampElements_new_func, (FunctionRNA *)&rna_ColorRampElements_remove_func}
};

/* Histogram */
CollectionPropertyRNA rna_Histogram_rna_properties = {
	{(PropertyRNA *)&rna_Histogram_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Histogram_rna_properties_begin, Histogram_rna_properties_next, Histogram_rna_properties_end, Histogram_rna_properties_get, NULL, NULL, Histogram_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Histogram_rna_type = {
	{(PropertyRNA *)&rna_Histogram_mode, (PropertyRNA *)&rna_Histogram_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Histogram_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_Histogram_mode_items[7] = {
	{0, "LUMA", 0, "Luma", "Luma"},
	{1, "RGB", 0, "RGB", "Red Green Blue"},
	{2, "R", 0, "R", "Red"},
	{3, "G", 0, "G", "Green"},
	{4, "B", 0, "B", "Blue"},
	{5, "A", 0, "A", "Alpha"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Histogram_mode = {
	{(PropertyRNA *)&rna_Histogram_show_line, (PropertyRNA *)&rna_Histogram_rna_type,
	-1, "mode", 3, "Mode",
	"Channels to display when drawing the histogram",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Histogram_mode_get, Histogram_mode_set, NULL, NULL, NULL, NULL, rna_Histogram_mode_items, 6, 0
};

BoolPropertyRNA rna_Histogram_show_line = {
	{NULL, (PropertyRNA *)&rna_Histogram_mode,
	-1, "show_line", 3, "Show Line",
	"Display lines rather than filled shapes",
	105, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Histogram_show_line_get, Histogram_show_line_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_Histogram = {
	{(ContainerRNA *)&RNA_Scopes, (ContainerRNA *)&RNA_ColorRampElements,
	NULL,
	{(PropertyRNA *)&rna_Histogram_rna_properties, (PropertyRNA *)&rna_Histogram_show_line}},
	"Histogram", NULL, NULL, 4, "Histogram",
	"Statistical view of the levels of color in an image",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Histogram_rna_properties,
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

/* Scopes */
CollectionPropertyRNA rna_Scopes_rna_properties = {
	{(PropertyRNA *)&rna_Scopes_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Scopes_rna_properties_begin, Scopes_rna_properties_next, Scopes_rna_properties_end, Scopes_rna_properties_get, NULL, NULL, Scopes_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Scopes_rna_type = {
	{(PropertyRNA *)&rna_Scopes_use_full_resolution, (PropertyRNA *)&rna_Scopes_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Scopes_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_Scopes_use_full_resolution = {
	{(PropertyRNA *)&rna_Scopes_accuracy, (PropertyRNA *)&rna_Scopes_rna_type,
	-1, "use_full_resolution", 3, "Full Sample",
	"Sample every pixel of the image",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scopes_update, 0, NULL, NULL,
	0, -1, NULL},
	Scopes_use_full_resolution_get, Scopes_use_full_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Scopes_accuracy = {
	{(PropertyRNA *)&rna_Scopes_histogram, (PropertyRNA *)&rna_Scopes_use_full_resolution,
	-1, "accuracy", 8195, "Accuracy",
	"Proportion of original image source pixel lines to sample",
	0, "*",
	PROP_FLOAT, PROP_PERCENTAGE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scopes_update, 0, NULL, NULL,
	offsetof(Scopes, accuracy), 4, NULL},
	Scopes_accuracy_get, Scopes_accuracy_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 1, 0.0f, NULL
};

PointerPropertyRNA rna_Scopes_histogram = {
	{(PropertyRNA *)&rna_Scopes_waveform_mode, (PropertyRNA *)&rna_Scopes_accuracy,
	-1, "histogram", 8388608, "Histogram",
	"Histogram for viewing image statistics",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Scopes_histogram_get, NULL, NULL, NULL,&RNA_Histogram
};

static EnumPropertyItem rna_Scopes_waveform_mode_items[6] = {
	{0, "LUMA", 54, "Luma", ""},
	{1, "RGB", 54, "Red Green Blue", ""},
	{2, "YCBCR601", 54, "YCbCr (ITU 601)", ""},
	{3, "YCBCR709", 54, "YCbCr (ITU 709)", ""},
	{4, "YCBCRJPG", 54, "YCbCr (Jpeg)", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Scopes_waveform_mode = {
	{(PropertyRNA *)&rna_Scopes_waveform_alpha, (PropertyRNA *)&rna_Scopes_histogram,
	-1, "waveform_mode", 3, "Waveform Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scopes_update, 0, NULL, NULL,
	0, -1, NULL},
	Scopes_waveform_mode_get, Scopes_waveform_mode_set, NULL, NULL, NULL, NULL, rna_Scopes_waveform_mode_items, 5, 0
};

FloatPropertyRNA rna_Scopes_waveform_alpha = {
	{(PropertyRNA *)&rna_Scopes_vectorscope_alpha, (PropertyRNA *)&rna_Scopes_waveform_mode,
	-1, "waveform_alpha", 8195, "Waveform Opacity",
	"Opacity of the points",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Scopes, wavefrm_alpha), 4, NULL},
	Scopes_waveform_alpha_get, Scopes_waveform_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Scopes_vectorscope_alpha = {
	{NULL, (PropertyRNA *)&rna_Scopes_waveform_alpha,
	-1, "vectorscope_alpha", 8195, "Vectorscope Opacity",
	"Opacity of the points",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Scopes, vecscope_alpha), 4, NULL},
	Scopes_vectorscope_alpha_get, Scopes_vectorscope_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_Scopes = {
	{(ContainerRNA *)&RNA_ColorManagedDisplaySettings, (ContainerRNA *)&RNA_Histogram,
	NULL,
	{(PropertyRNA *)&rna_Scopes_rna_properties, (PropertyRNA *)&rna_Scopes_vectorscope_alpha}},
	"Scopes", NULL, NULL, 4, "Scopes",
	"Scopes for statistical view of an image",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Scopes_rna_properties,
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

/* ColorManagedDisplaySettings */
CollectionPropertyRNA rna_ColorManagedDisplaySettings_rna_properties = {
	{(PropertyRNA *)&rna_ColorManagedDisplaySettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ColorManagedDisplaySettings_rna_properties_begin, ColorManagedDisplaySettings_rna_properties_next, ColorManagedDisplaySettings_rna_properties_end, ColorManagedDisplaySettings_rna_properties_get, NULL, NULL, ColorManagedDisplaySettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ColorManagedDisplaySettings_rna_type = {
	{(PropertyRNA *)&rna_ColorManagedDisplaySettings_display_device, (PropertyRNA *)&rna_ColorManagedDisplaySettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ColorManagedDisplaySettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_ColorManagedDisplaySettings_display_device_items[2] = {
	{0, "DEFAULT", 0, "Default", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ColorManagedDisplaySettings_display_device = {
	{NULL, (PropertyRNA *)&rna_ColorManagedDisplaySettings_rna_type,
	-1, "display_device", 3, "Display Device",
	"Display device name",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_ColorManagedDisplaySettings_display_device_update, 33554432, NULL, NULL,
	0, -1, NULL},
	ColorManagedDisplaySettings_display_device_get, ColorManagedDisplaySettings_display_device_set, rna_ColorManagedDisplaySettings_display_device_itemf, NULL, NULL, NULL, rna_ColorManagedDisplaySettings_display_device_items, 1, 0
};

StructRNA RNA_ColorManagedDisplaySettings = {
	{(ContainerRNA *)&RNA_ColorManagedViewSettings, (ContainerRNA *)&RNA_Scopes,
	NULL,
	{(PropertyRNA *)&rna_ColorManagedDisplaySettings_rna_properties, (PropertyRNA *)&rna_ColorManagedDisplaySettings_display_device}},
	"ColorManagedDisplaySettings", NULL, NULL, 4, "ColorManagedDisplaySettings",
	"Color management specific to display device",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ColorManagedDisplaySettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ColorManagedDisplaySettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* ColorManagedViewSettings */
CollectionPropertyRNA rna_ColorManagedViewSettings_rna_properties = {
	{(PropertyRNA *)&rna_ColorManagedViewSettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ColorManagedViewSettings_rna_properties_begin, ColorManagedViewSettings_rna_properties_next, ColorManagedViewSettings_rna_properties_end, ColorManagedViewSettings_rna_properties_get, NULL, NULL, ColorManagedViewSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ColorManagedViewSettings_rna_type = {
	{(PropertyRNA *)&rna_ColorManagedViewSettings_look, (PropertyRNA *)&rna_ColorManagedViewSettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ColorManagedViewSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_ColorManagedViewSettings_look_items[2] = {
	{0, "NONE", 0, "None", "Do not modify image in an artistic manner"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ColorManagedViewSettings_look = {
	{(PropertyRNA *)&rna_ColorManagedViewSettings_view_transform, (PropertyRNA *)&rna_ColorManagedViewSettings_rna_type,
	-1, "look", 3, "Look",
	"Additional transform applied before view transform for an artistic needs",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_ColorManagement_update, 33554432, NULL, NULL,
	0, -1, NULL},
	ColorManagedViewSettings_look_get, ColorManagedViewSettings_look_set, rna_ColorManagedViewSettings_look_itemf, NULL, NULL, NULL, rna_ColorManagedViewSettings_look_items, 1, 0
};

static EnumPropertyItem rna_ColorManagedViewSettings_view_transform_items[2] = {
	{0, "NONE", 0, "None", "Do not perform any color transform on display, use old non-color managed technique for display"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ColorManagedViewSettings_view_transform = {
	{(PropertyRNA *)&rna_ColorManagedViewSettings_exposure, (PropertyRNA *)&rna_ColorManagedViewSettings_look,
	-1, "view_transform", 3, "View Transform",
	"View used when converting image to a display space",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_ColorManagement_update, 33554432, NULL, NULL,
	0, -1, NULL},
	ColorManagedViewSettings_view_transform_get, ColorManagedViewSettings_view_transform_set, rna_ColorManagedViewSettings_view_transform_itemf, NULL, NULL, NULL, rna_ColorManagedViewSettings_view_transform_items, 1, 0
};

FloatPropertyRNA rna_ColorManagedViewSettings_exposure = {
	{(PropertyRNA *)&rna_ColorManagedViewSettings_gamma, (PropertyRNA *)&rna_ColorManagedViewSettings_view_transform,
	-1, "exposure", 8195, "Exposure",
	"Exposure (stops) applied before display transform",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ColorManagement_update, 33554432, NULL, NULL,
	offsetof(ColorManagedViewSettings, exposure), 4, NULL},
	ColorManagedViewSettings_exposure_get, ColorManagedViewSettings_exposure_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10.0f, 10.0f, -10.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ColorManagedViewSettings_gamma = {
	{(PropertyRNA *)&rna_ColorManagedViewSettings_curve_mapping, (PropertyRNA *)&rna_ColorManagedViewSettings_exposure,
	-1, "gamma", 8195, "Gamma",
	"Amount of gamma modification applied after display transform",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ColorManagement_update, 33554432, NULL, NULL,
	offsetof(ColorManagedViewSettings, gamma), 4, NULL},
	ColorManagedViewSettings_gamma_get, ColorManagedViewSettings_gamma_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 5.0f, 0.0f, 5.0f, 10.0f, 3, 1.0f, NULL
};

PointerPropertyRNA rna_ColorManagedViewSettings_curve_mapping = {
	{(PropertyRNA *)&rna_ColorManagedViewSettings_use_curve_mapping, (PropertyRNA *)&rna_ColorManagedViewSettings_gamma,
	-1, "curve_mapping", 8388608, "Curve",
	"Color curve mapping applied before display transform",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ColorManagement_update, 33554432, NULL, NULL,
	0, -1, NULL},
	ColorManagedViewSettings_curve_mapping_get, NULL, NULL, NULL,&RNA_CurveMapping
};

BoolPropertyRNA rna_ColorManagedViewSettings_use_curve_mapping = {
	{NULL, (PropertyRNA *)&rna_ColorManagedViewSettings_curve_mapping,
	-1, "use_curve_mapping", 3, "Use Curves",
	"Use RGB curved for pre-display transformation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ColorManagement_update, 33554432, NULL, NULL,
	0, -1, NULL},
	ColorManagedViewSettings_use_curve_mapping_get, ColorManagedViewSettings_use_curve_mapping_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_ColorManagedViewSettings = {
	{(ContainerRNA *)&RNA_ColorManagedInputColorspaceSettings, (ContainerRNA *)&RNA_ColorManagedDisplaySettings,
	NULL,
	{(PropertyRNA *)&rna_ColorManagedViewSettings_rna_properties, (PropertyRNA *)&rna_ColorManagedViewSettings_use_curve_mapping}},
	"ColorManagedViewSettings", NULL, NULL, 4, "ColorManagedViewSettings",
	"Color management settings used for displaying images on the display",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ColorManagedViewSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ColorManagedViewSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* ColorManagedInputColorspaceSettings */
CollectionPropertyRNA rna_ColorManagedInputColorspaceSettings_rna_properties = {
	{(PropertyRNA *)&rna_ColorManagedInputColorspaceSettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ColorManagedInputColorspaceSettings_rna_properties_begin, ColorManagedInputColorspaceSettings_rna_properties_next, ColorManagedInputColorspaceSettings_rna_properties_end, ColorManagedInputColorspaceSettings_rna_properties_get, NULL, NULL, ColorManagedInputColorspaceSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ColorManagedInputColorspaceSettings_rna_type = {
	{(PropertyRNA *)&rna_ColorManagedInputColorspaceSettings_name, (PropertyRNA *)&rna_ColorManagedInputColorspaceSettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ColorManagedInputColorspaceSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_ColorManagedInputColorspaceSettings_name_items[2] = {
	{0, "NONE", 0, "None", "Do not perform any color transform on load, treat colors as in scene linear space already"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ColorManagedInputColorspaceSettings_name = {
	{NULL, (PropertyRNA *)&rna_ColorManagedInputColorspaceSettings_rna_type,
	-1, "name", 16777219, "Input Color Space",
	"Color space of the image or movie on disk",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ColorManagedColorspaceSettings_reload_update, 33554432, NULL, NULL,
	0, -1, NULL},
	ColorManagedInputColorspaceSettings_name_get, ColorManagedInputColorspaceSettings_name_set, rna_ColorManagedColorspaceSettings_colorspace_itemf, NULL, NULL, NULL, rna_ColorManagedInputColorspaceSettings_name_items, 1, 0
};

StructRNA RNA_ColorManagedInputColorspaceSettings = {
	{(ContainerRNA *)&RNA_ColorManagedSequencerColorspaceSettings, (ContainerRNA *)&RNA_ColorManagedViewSettings,
	NULL,
	{(PropertyRNA *)&rna_ColorManagedInputColorspaceSettings_rna_properties, (PropertyRNA *)&rna_ColorManagedInputColorspaceSettings_name}},
	"ColorManagedInputColorspaceSettings", NULL, NULL, 4, "ColorManagedInputColorspaceSettings",
	"Input color space settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ColorManagedInputColorspaceSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ColorManagedInputColorspaceSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* ColorManagedSequencerColorspaceSettings */
CollectionPropertyRNA rna_ColorManagedSequencerColorspaceSettings_rna_properties = {
	{(PropertyRNA *)&rna_ColorManagedSequencerColorspaceSettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ColorManagedSequencerColorspaceSettings_rna_properties_begin, ColorManagedSequencerColorspaceSettings_rna_properties_next, ColorManagedSequencerColorspaceSettings_rna_properties_end, ColorManagedSequencerColorspaceSettings_rna_properties_get, NULL, NULL, ColorManagedSequencerColorspaceSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ColorManagedSequencerColorspaceSettings_rna_type = {
	{(PropertyRNA *)&rna_ColorManagedSequencerColorspaceSettings_name, (PropertyRNA *)&rna_ColorManagedSequencerColorspaceSettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ColorManagedSequencerColorspaceSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_ColorManagedSequencerColorspaceSettings_name_items[2] = {
	{0, "NONE", 0, "None", "Do not perform any color transform on load, treat colors as in scene linear space already"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ColorManagedSequencerColorspaceSettings_name = {
	{NULL, (PropertyRNA *)&rna_ColorManagedSequencerColorspaceSettings_rna_type,
	-1, "name", 16777219, "Color Space",
	"Color space that the sequencer operates in",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ColorManagedColorspaceSettings_reload_update, 33554432, NULL, NULL,
	0, -1, NULL},
	ColorManagedSequencerColorspaceSettings_name_get, ColorManagedSequencerColorspaceSettings_name_set, rna_ColorManagedColorspaceSettings_colorspace_itemf, NULL, NULL, NULL, rna_ColorManagedSequencerColorspaceSettings_name_items, 1, 0
};

StructRNA RNA_ColorManagedSequencerColorspaceSettings = {
	{(ContainerRNA *)&RNA_Constraint, (ContainerRNA *)&RNA_ColorManagedInputColorspaceSettings,
	NULL,
	{(PropertyRNA *)&rna_ColorManagedSequencerColorspaceSettings_rna_properties, (PropertyRNA *)&rna_ColorManagedSequencerColorspaceSettings_name}},
	"ColorManagedSequencerColorspaceSettings", NULL, NULL, 4, "ColorManagedSequencerColorspaceSettings",
	"Input color space settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ColorManagedSequencerColorspaceSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ColorManagedSequencerColorspaceSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

