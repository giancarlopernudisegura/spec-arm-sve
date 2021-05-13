
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

#include "rna_sculpt_paint.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_PaletteColor_rna_properties;
PointerPropertyRNA rna_PaletteColor_rna_type;
FloatPropertyRNA rna_PaletteColor_color;
FloatPropertyRNA rna_PaletteColor_strength;
FloatPropertyRNA rna_PaletteColor_weight;


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

CollectionPropertyRNA rna_Palette_colors;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



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

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



CollectionPropertyRNA rna_Paint_rna_properties;
PointerPropertyRNA rna_Paint_rna_type;
PointerPropertyRNA rna_Paint_brush;
PointerPropertyRNA rna_Paint_palette;
BoolPropertyRNA rna_Paint_show_brush;
BoolPropertyRNA rna_Paint_show_brush_on_surface;
BoolPropertyRNA rna_Paint_show_low_resolution;
IntPropertyRNA rna_Paint_input_samples;
BoolPropertyRNA rna_Paint_use_symmetry_x;
BoolPropertyRNA rna_Paint_use_symmetry_y;
BoolPropertyRNA rna_Paint_use_symmetry_z;
BoolPropertyRNA rna_Paint_use_symmetry_feather;


extern CollectionPropertyRNA rna_Paint_rna_properties;
extern PointerPropertyRNA rna_Paint_rna_type;
extern PointerPropertyRNA rna_Paint_brush;
extern PointerPropertyRNA rna_Paint_palette;
extern BoolPropertyRNA rna_Paint_show_brush;
extern BoolPropertyRNA rna_Paint_show_brush_on_surface;
extern BoolPropertyRNA rna_Paint_show_low_resolution;
extern IntPropertyRNA rna_Paint_input_samples;
extern BoolPropertyRNA rna_Paint_use_symmetry_x;
extern BoolPropertyRNA rna_Paint_use_symmetry_y;
extern BoolPropertyRNA rna_Paint_use_symmetry_z;
extern BoolPropertyRNA rna_Paint_use_symmetry_feather;

IntPropertyRNA rna_Sculpt_radial_symmetry;
BoolPropertyRNA rna_Sculpt_lock_x;
BoolPropertyRNA rna_Sculpt_lock_y;
BoolPropertyRNA rna_Sculpt_lock_z;
BoolPropertyRNA rna_Sculpt_use_threaded;
BoolPropertyRNA rna_Sculpt_use_deform_only;
BoolPropertyRNA rna_Sculpt_show_diffuse_color;
FloatPropertyRNA rna_Sculpt_detail_size;
FloatPropertyRNA rna_Sculpt_constant_detail;
BoolPropertyRNA rna_Sculpt_use_smooth_shading;
EnumPropertyRNA rna_Sculpt_symmetrize_direction;
EnumPropertyRNA rna_Sculpt_detail_refine_method;
EnumPropertyRNA rna_Sculpt_detail_type_method;
FloatPropertyRNA rna_Sculpt_gravity;
PointerPropertyRNA rna_Sculpt_gravity_object;


extern CollectionPropertyRNA rna_Paint_rna_properties;
extern PointerPropertyRNA rna_Paint_rna_type;
extern PointerPropertyRNA rna_Paint_brush;
extern PointerPropertyRNA rna_Paint_palette;
extern BoolPropertyRNA rna_Paint_show_brush;
extern BoolPropertyRNA rna_Paint_show_brush_on_surface;
extern BoolPropertyRNA rna_Paint_show_low_resolution;
extern IntPropertyRNA rna_Paint_input_samples;
extern BoolPropertyRNA rna_Paint_use_symmetry_x;
extern BoolPropertyRNA rna_Paint_use_symmetry_y;
extern BoolPropertyRNA rna_Paint_use_symmetry_z;
extern BoolPropertyRNA rna_Paint_use_symmetry_feather;


extern CollectionPropertyRNA rna_Paint_rna_properties;
extern PointerPropertyRNA rna_Paint_rna_type;
extern PointerPropertyRNA rna_Paint_brush;
extern PointerPropertyRNA rna_Paint_palette;
extern BoolPropertyRNA rna_Paint_show_brush;
extern BoolPropertyRNA rna_Paint_show_brush_on_surface;
extern BoolPropertyRNA rna_Paint_show_low_resolution;
extern IntPropertyRNA rna_Paint_input_samples;
extern BoolPropertyRNA rna_Paint_use_symmetry_x;
extern BoolPropertyRNA rna_Paint_use_symmetry_y;
extern BoolPropertyRNA rna_Paint_use_symmetry_z;
extern BoolPropertyRNA rna_Paint_use_symmetry_feather;

BoolPropertyRNA rna_VertexPaint_use_normal;
BoolPropertyRNA rna_VertexPaint_use_spray;
BoolPropertyRNA rna_VertexPaint_use_group_restrict;


extern CollectionPropertyRNA rna_Paint_rna_properties;
extern PointerPropertyRNA rna_Paint_rna_type;
extern PointerPropertyRNA rna_Paint_brush;
extern PointerPropertyRNA rna_Paint_palette;
extern BoolPropertyRNA rna_Paint_show_brush;
extern BoolPropertyRNA rna_Paint_show_brush_on_surface;
extern BoolPropertyRNA rna_Paint_show_low_resolution;
extern IntPropertyRNA rna_Paint_input_samples;
extern BoolPropertyRNA rna_Paint_use_symmetry_x;
extern BoolPropertyRNA rna_Paint_use_symmetry_y;
extern BoolPropertyRNA rna_Paint_use_symmetry_z;
extern BoolPropertyRNA rna_Paint_use_symmetry_feather;

BoolPropertyRNA rna_ImagePaint_use_occlude;
BoolPropertyRNA rna_ImagePaint_use_backface_culling;
BoolPropertyRNA rna_ImagePaint_use_normal_falloff;
BoolPropertyRNA rna_ImagePaint_use_stencil_layer;
BoolPropertyRNA rna_ImagePaint_invert_stencil;
PointerPropertyRNA rna_ImagePaint_stencil_image;
PointerPropertyRNA rna_ImagePaint_canvas;
PointerPropertyRNA rna_ImagePaint_clone_image;
FloatPropertyRNA rna_ImagePaint_stencil_color;
BoolPropertyRNA rna_ImagePaint_use_clone_layer;
IntPropertyRNA rna_ImagePaint_seam_bleed;
IntPropertyRNA rna_ImagePaint_normal_angle;
IntPropertyRNA rna_ImagePaint_screen_grab_size;
EnumPropertyRNA rna_ImagePaint_mode;
BoolPropertyRNA rna_ImagePaint_missing_uvs;
BoolPropertyRNA rna_ImagePaint_missing_materials;
BoolPropertyRNA rna_ImagePaint_missing_stencil;
BoolPropertyRNA rna_ImagePaint_missing_texture;

extern FunctionRNA rna_ImagePaint_detect_data_func;
extern BoolPropertyRNA rna_ImagePaint_detect_data_ok;



CollectionPropertyRNA rna_ParticleEdit_rna_properties;
PointerPropertyRNA rna_ParticleEdit_rna_type;
EnumPropertyRNA rna_ParticleEdit_tool;
EnumPropertyRNA rna_ParticleEdit_select_mode;
BoolPropertyRNA rna_ParticleEdit_use_preserve_length;
BoolPropertyRNA rna_ParticleEdit_use_preserve_root;
BoolPropertyRNA rna_ParticleEdit_use_emitter_deflect;
FloatPropertyRNA rna_ParticleEdit_emitter_distance;
BoolPropertyRNA rna_ParticleEdit_use_fade_time;
BoolPropertyRNA rna_ParticleEdit_use_auto_velocity;
BoolPropertyRNA rna_ParticleEdit_show_particles;
BoolPropertyRNA rna_ParticleEdit_use_default_interpolate;
IntPropertyRNA rna_ParticleEdit_default_key_count;
PointerPropertyRNA rna_ParticleEdit_brush;
IntPropertyRNA rna_ParticleEdit_draw_step;
IntPropertyRNA rna_ParticleEdit_fade_frames;
EnumPropertyRNA rna_ParticleEdit_type;
BoolPropertyRNA rna_ParticleEdit_is_editable;
BoolPropertyRNA rna_ParticleEdit_is_hair;
PointerPropertyRNA rna_ParticleEdit_object;


CollectionPropertyRNA rna_ParticleBrush_rna_properties;
PointerPropertyRNA rna_ParticleBrush_rna_type;
IntPropertyRNA rna_ParticleBrush_size;
FloatPropertyRNA rna_ParticleBrush_strength;
IntPropertyRNA rna_ParticleBrush_count;
IntPropertyRNA rna_ParticleBrush_steps;
EnumPropertyRNA rna_ParticleBrush_puff_mode;
BoolPropertyRNA rna_ParticleBrush_use_puff_volume;
EnumPropertyRNA rna_ParticleBrush_length_mode;
PointerPropertyRNA rna_ParticleBrush_curve;

static PointerRNA PaletteColor_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void PaletteColor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_PaletteColor_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = PaletteColor_rna_properties_get(iter);
}

void PaletteColor_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = PaletteColor_rna_properties_get(iter);
}

void PaletteColor_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int PaletteColor_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA PaletteColor_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void PaletteColor_color_get(PointerRNA *ptr, float values[3])
{
	PaletteColor *data = (PaletteColor *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->rgb)[i]);
	}
}

void PaletteColor_color_set(PointerRNA *ptr, const float values[3])
{
	PaletteColor *data = (PaletteColor *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->rgb)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
	}
}

float PaletteColor_strength_get(PointerRNA *ptr)
{
	PaletteColor *data = (PaletteColor *)(ptr->data);
	return (float)(data->value);
}

void PaletteColor_strength_set(PointerRNA *ptr, float value)
{
	PaletteColor *data = (PaletteColor *)(ptr->data);
	data->value = CLAMPIS(value, 0.0f, 1.0f);
}

float PaletteColor_weight_get(PointerRNA *ptr)
{
	PaletteColor *data = (PaletteColor *)(ptr->data);
	return (float)(data->value);
}

void PaletteColor_weight_set(PointerRNA *ptr, float value)
{
	PaletteColor *data = (PaletteColor *)(ptr->data);
	data->value = CLAMPIS(value, 0.0f, 1.0f);
}

static PointerRNA Palette_colors_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_PaletteColor, rna_iterator_listbase_get(iter));
}

void Palette_colors_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Palette *data = (Palette *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Palette_colors;

	rna_iterator_listbase_begin(iter, &data->colors, NULL);

	if (iter->valid)
		iter->ptr = Palette_colors_get(iter);
}

void Palette_colors_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = Palette_colors_get(iter);
}

void Palette_colors_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Palette_colors_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Palette_colors_begin(&iter, ptr);

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
		if (found) *r_ptr = Palette_colors_get(&iter);
	}

	Palette_colors_end(&iter);

	return found;
}

static PointerRNA Paint_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Paint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Paint_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Paint_rna_properties_get(iter);
}

void Paint_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Paint_rna_properties_get(iter);
}

void Paint_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Paint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Paint_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA Paint_brush_get(PointerRNA *ptr)
{
	Paint *data = (Paint *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Brush, data->brush);
}

void Paint_brush_set(PointerRNA *ptr, PointerRNA value)
{
	Paint *data = (Paint *)(ptr->data);

	if (data->brush)
		id_us_min((ID *)data->brush);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->brush = value.data;
}

PointerRNA Paint_palette_get(PointerRNA *ptr)
{
	Paint *data = (Paint *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Palette, data->palette);
}

void Paint_palette_set(PointerRNA *ptr, PointerRNA value)
{
	Paint *data = (Paint *)(ptr->data);

	if (data->palette)
		id_us_min((ID *)data->palette);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->palette = value.data;
}

int Paint_show_brush_get(PointerRNA *ptr)
{
	Paint *data = (Paint *)(ptr->data);
	return (((data->flags) & 1) != 0);
}

void Paint_show_brush_set(PointerRNA *ptr, int value)
{
	Paint *data = (Paint *)(ptr->data);
	if (value) data->flags |= 1;
	else data->flags &= ~1;
}

int Paint_show_brush_on_surface_get(PointerRNA *ptr)
{
	Paint *data = (Paint *)(ptr->data);
	return (((data->flags) & 4) != 0);
}

void Paint_show_brush_on_surface_set(PointerRNA *ptr, int value)
{
	Paint *data = (Paint *)(ptr->data);
	if (value) data->flags |= 4;
	else data->flags &= ~4;
}

int Paint_show_low_resolution_get(PointerRNA *ptr)
{
	Paint *data = (Paint *)(ptr->data);
	return (((data->flags) & 2) != 0);
}

void Paint_show_low_resolution_set(PointerRNA *ptr, int value)
{
	Paint *data = (Paint *)(ptr->data);
	if (value) data->flags |= 2;
	else data->flags &= ~2;
}

int Paint_input_samples_get(PointerRNA *ptr)
{
	Paint *data = (Paint *)(ptr->data);
	return (int)(data->num_input_samples);
}

void Paint_input_samples_set(PointerRNA *ptr, int value)
{
	Paint *data = (Paint *)(ptr->data);
	data->num_input_samples = CLAMPIS(value, 0, INT_MAX);
}

int Paint_use_symmetry_x_get(PointerRNA *ptr)
{
	Paint *data = (Paint *)(ptr->data);
	return (((data->symmetry_flags) & 1) != 0);
}

void Paint_use_symmetry_x_set(PointerRNA *ptr, int value)
{
	Paint *data = (Paint *)(ptr->data);
	if (value) data->symmetry_flags |= 1;
	else data->symmetry_flags &= ~1;
}

int Paint_use_symmetry_y_get(PointerRNA *ptr)
{
	Paint *data = (Paint *)(ptr->data);
	return (((data->symmetry_flags) & 2) != 0);
}

void Paint_use_symmetry_y_set(PointerRNA *ptr, int value)
{
	Paint *data = (Paint *)(ptr->data);
	if (value) data->symmetry_flags |= 2;
	else data->symmetry_flags &= ~2;
}

int Paint_use_symmetry_z_get(PointerRNA *ptr)
{
	Paint *data = (Paint *)(ptr->data);
	return (((data->symmetry_flags) & 4) != 0);
}

void Paint_use_symmetry_z_set(PointerRNA *ptr, int value)
{
	Paint *data = (Paint *)(ptr->data);
	if (value) data->symmetry_flags |= 4;
	else data->symmetry_flags &= ~4;
}

int Paint_use_symmetry_feather_get(PointerRNA *ptr)
{
	Paint *data = (Paint *)(ptr->data);
	return (((data->symmetry_flags) & 8) != 0);
}

void Paint_use_symmetry_feather_set(PointerRNA *ptr, int value)
{
	Paint *data = (Paint *)(ptr->data);
	if (value) data->symmetry_flags |= 8;
	else data->symmetry_flags &= ~8;
}

void Sculpt_radial_symmetry_get(PointerRNA *ptr, int values[3])
{
	Sculpt *data = (Sculpt *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (int)(((int *)data->radial_symm)[i]);
	}
}

void Sculpt_radial_symmetry_set(PointerRNA *ptr, const int values[3])
{
	Sculpt *data = (Sculpt *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((int *)data->radial_symm)[i] = CLAMPIS(values[i], 1, 64);
	}
}

int Sculpt_lock_x_get(PointerRNA *ptr)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	return (((data->flags) & 8) != 0);
}

void Sculpt_lock_x_set(PointerRNA *ptr, int value)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	if (value) data->flags |= 8;
	else data->flags &= ~8;
}

int Sculpt_lock_y_get(PointerRNA *ptr)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	return (((data->flags) & 16) != 0);
}

void Sculpt_lock_y_set(PointerRNA *ptr, int value)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	if (value) data->flags |= 16;
	else data->flags &= ~16;
}

int Sculpt_lock_z_get(PointerRNA *ptr)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	return (((data->flags) & 32) != 0);
}

void Sculpt_lock_z_set(PointerRNA *ptr, int value)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	if (value) data->flags |= 32;
	else data->flags &= ~32;
}

int Sculpt_use_threaded_get(PointerRNA *ptr)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	return (((data->flags) & 128) != 0);
}

void Sculpt_use_threaded_set(PointerRNA *ptr, int value)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	if (value) data->flags |= 128;
	else data->flags &= ~128;
}

int Sculpt_use_deform_only_get(PointerRNA *ptr)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	return (((data->flags) & 256) != 0);
}

void Sculpt_use_deform_only_set(PointerRNA *ptr, int value)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	if (value) data->flags |= 256;
	else data->flags &= ~256;
}

int Sculpt_show_diffuse_color_get(PointerRNA *ptr)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	return (((data->flags) & 512) != 0);
}

void Sculpt_show_diffuse_color_set(PointerRNA *ptr, int value)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	if (value) data->flags |= 512;
	else data->flags &= ~512;
}

float Sculpt_detail_size_get(PointerRNA *ptr)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	return (float)(data->detail_size);
}

void Sculpt_detail_size_set(PointerRNA *ptr, float value)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	data->detail_size = value;
}

float Sculpt_constant_detail_get(PointerRNA *ptr)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	return (float)(data->constant_detail);
}

void Sculpt_constant_detail_set(PointerRNA *ptr, float value)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	data->constant_detail = CLAMPIS(value, 0.0010000000f, 10000.0f);
}

int Sculpt_use_smooth_shading_get(PointerRNA *ptr)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	return (((data->flags) & 1024) != 0);
}

void Sculpt_use_smooth_shading_set(PointerRNA *ptr, int value)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	if (value) data->flags |= 1024;
	else data->flags &= ~1024;
}

int Sculpt_symmetrize_direction_get(PointerRNA *ptr)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	return (int)(data->symmetrize_direction);
}

void Sculpt_symmetrize_direction_set(PointerRNA *ptr, int value)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	data->symmetrize_direction = value;
}

int Sculpt_detail_refine_method_get(PointerRNA *ptr)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	return ((data->flags) & 6144);
}

void Sculpt_detail_refine_method_set(PointerRNA *ptr, int value)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	data->flags &= ~6144;
	data->flags |= value;
}

int Sculpt_detail_type_method_get(PointerRNA *ptr)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	return ((data->flags) & 8192);
}

void Sculpt_detail_type_method_set(PointerRNA *ptr, int value)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	data->flags &= ~8192;
	data->flags |= value;
}

float Sculpt_gravity_get(PointerRNA *ptr)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	return (float)(data->gravity_factor);
}

void Sculpt_gravity_set(PointerRNA *ptr, float value)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	data->gravity_factor = CLAMPIS(value, 0.0f, 1.0f);
}

PointerRNA Sculpt_gravity_object_get(PointerRNA *ptr)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->gravity_object);
}

void Sculpt_gravity_object_set(PointerRNA *ptr, PointerRNA value)
{
	Sculpt *data = (Sculpt *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->gravity_object = value.data;
}

int VertexPaint_use_normal_get(PointerRNA *ptr)
{
	VPaint *data = (VPaint *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void VertexPaint_use_normal_set(PointerRNA *ptr, int value)
{
	VPaint *data = (VPaint *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int VertexPaint_use_spray_get(PointerRNA *ptr)
{
	VPaint *data = (VPaint *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void VertexPaint_use_spray_set(PointerRNA *ptr, int value)
{
	VPaint *data = (VPaint *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int VertexPaint_use_group_restrict_get(PointerRNA *ptr)
{
	VPaint *data = (VPaint *)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void VertexPaint_use_group_restrict_set(PointerRNA *ptr, int value)
{
	VPaint *data = (VPaint *)(ptr->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

int ImagePaint_use_occlude_get(PointerRNA *ptr)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	return !(((data->flag) & 16) != 0);
}

void ImagePaint_use_occlude_set(PointerRNA *ptr, int value)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	if (!value) data->flag |= 16;
	else data->flag &= ~16;
}

int ImagePaint_use_backface_culling_get(PointerRNA *ptr)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	return !(((data->flag) & 32) != 0);
}

void ImagePaint_use_backface_culling_set(PointerRNA *ptr, int value)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	if (!value) data->flag |= 32;
	else data->flag &= ~32;
}

int ImagePaint_use_normal_falloff_get(PointerRNA *ptr)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	return !(((data->flag) & 64) != 0);
}

void ImagePaint_use_normal_falloff_set(PointerRNA *ptr, int value)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	if (!value) data->flag |= 64;
	else data->flag &= ~64;
}

int ImagePaint_use_stencil_layer_get(PointerRNA *ptr)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	return (((data->flag) & 256) != 0);
}

void ImagePaint_use_stencil_layer_set(PointerRNA *ptr, int value)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	if (value) data->flag |= 256;
	else data->flag &= ~256;
}

int ImagePaint_invert_stencil_get(PointerRNA *ptr)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	return (((data->flag) & 512) != 0);
}

void ImagePaint_invert_stencil_set(PointerRNA *ptr, int value)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	if (value) data->flag |= 512;
	else data->flag &= ~512;
}

PointerRNA ImagePaint_stencil_image_get(PointerRNA *ptr)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Image, data->stencil);
}

void ImagePaint_stencil_image_set(PointerRNA *ptr, PointerRNA value)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);

	if (data->stencil)
		id_us_min((ID *)data->stencil);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->stencil = value.data;
}

PointerRNA ImagePaint_canvas_get(PointerRNA *ptr)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Image, data->canvas);
}

void ImagePaint_canvas_set(PointerRNA *ptr, PointerRNA value)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);

	if (data->canvas)
		id_us_min((ID *)data->canvas);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->canvas = value.data;
}

PointerRNA ImagePaint_clone_image_get(PointerRNA *ptr)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Image, data->clone);
}

void ImagePaint_clone_image_set(PointerRNA *ptr, PointerRNA value)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);

	if (data->clone)
		id_us_min((ID *)data->clone);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->clone = value.data;
}

void ImagePaint_stencil_color_get(PointerRNA *ptr, float values[3])
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->stencil_col)[i]);
	}
}

void ImagePaint_stencil_color_set(PointerRNA *ptr, const float values[3])
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->stencil_col)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
	}
}

int ImagePaint_use_clone_layer_get(PointerRNA *ptr)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void ImagePaint_use_clone_layer_set(PointerRNA *ptr, int value)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

int ImagePaint_seam_bleed_get(PointerRNA *ptr)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	return (int)(data->seam_bleed);
}

void ImagePaint_seam_bleed_set(PointerRNA *ptr, int value)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	data->seam_bleed = CLAMPIS(value, -32768, 32767);
}

int ImagePaint_normal_angle_get(PointerRNA *ptr)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	return (int)(data->normal_angle);
}

void ImagePaint_normal_angle_set(PointerRNA *ptr, int value)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	data->normal_angle = CLAMPIS(value, 0, 90);
}

void ImagePaint_screen_grab_size_get(PointerRNA *ptr, int values[2])
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		values[i] = (int)(((short *)data->screen_grab_size)[i]);
	}
}

void ImagePaint_screen_grab_size_set(PointerRNA *ptr, const int values[2])
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		((short *)data->screen_grab_size)[i] = CLAMPIS(values[i], 512, 16384);
	}
}

int ImagePaint_mode_get(PointerRNA *ptr)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	return (int)(data->mode);
}

void ImagePaint_mode_set(PointerRNA *ptr, int value)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	data->mode = value;
}

int ImagePaint_missing_uvs_get(PointerRNA *ptr)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	return (((data->missing_data) & 1) != 0);
}

int ImagePaint_missing_materials_get(PointerRNA *ptr)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	return (((data->missing_data) & 2) != 0);
}

int ImagePaint_missing_stencil_get(PointerRNA *ptr)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	return (((data->missing_data) & 8) != 0);
}

int ImagePaint_missing_texture_get(PointerRNA *ptr)
{
	ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
	return (((data->missing_data) & 4) != 0);
}

static PointerRNA ParticleEdit_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ParticleEdit_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ParticleEdit_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ParticleEdit_rna_properties_get(iter);
}

void ParticleEdit_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ParticleEdit_rna_properties_get(iter);
}

void ParticleEdit_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ParticleEdit_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ParticleEdit_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int ParticleEdit_tool_get(PointerRNA *ptr)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	return (int)(data->brushtype);
}

void ParticleEdit_tool_set(PointerRNA *ptr, int value)
{
	rna_ParticleEdit_tool_set(ptr, value);
}

int ParticleEdit_select_mode_get(PointerRNA *ptr)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	return ((data->selectmode) & 7);
}

void ParticleEdit_select_mode_set(PointerRNA *ptr, int value)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	data->selectmode &= ~7;
	data->selectmode |= value;
}

int ParticleEdit_use_preserve_length_get(PointerRNA *ptr)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void ParticleEdit_use_preserve_length_set(PointerRNA *ptr, int value)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int ParticleEdit_use_preserve_root_get(PointerRNA *ptr)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void ParticleEdit_use_preserve_root_set(PointerRNA *ptr, int value)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int ParticleEdit_use_emitter_deflect_get(PointerRNA *ptr)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void ParticleEdit_use_emitter_deflect_set(PointerRNA *ptr, int value)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

float ParticleEdit_emitter_distance_get(PointerRNA *ptr)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	return (float)(data->emitterdist);
}

void ParticleEdit_emitter_distance_set(PointerRNA *ptr, float value)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	data->emitterdist = CLAMPIS(value, 0.0f, FLT_MAX);
}

int ParticleEdit_use_fade_time_get(PointerRNA *ptr)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void ParticleEdit_use_fade_time_set(PointerRNA *ptr, int value)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

int ParticleEdit_use_auto_velocity_get(PointerRNA *ptr)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	return (((data->flag) & 256) != 0);
}

void ParticleEdit_use_auto_velocity_set(PointerRNA *ptr, int value)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	if (value) data->flag |= 256;
	else data->flag &= ~256;
}

int ParticleEdit_show_particles_get(PointerRNA *ptr)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void ParticleEdit_show_particles_set(PointerRNA *ptr, int value)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int ParticleEdit_use_default_interpolate_get(PointerRNA *ptr)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void ParticleEdit_use_default_interpolate_set(PointerRNA *ptr, int value)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int ParticleEdit_default_key_count_get(PointerRNA *ptr)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	return (int)(data->totaddkey);
}

void ParticleEdit_default_key_count_set(PointerRNA *ptr, int value)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	data->totaddkey = CLAMPIS(value, 2, 32767);
}

PointerRNA ParticleEdit_brush_get(PointerRNA *ptr)
{
	return rna_ParticleEdit_brush_get(ptr);
}

int ParticleEdit_draw_step_get(PointerRNA *ptr)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	return (int)(data->draw_step);
}

void ParticleEdit_draw_step_set(PointerRNA *ptr, int value)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	data->draw_step = CLAMPIS(value, 1, 10);
}

int ParticleEdit_fade_frames_get(PointerRNA *ptr)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	return (int)(data->fade_frames);
}

void ParticleEdit_fade_frames_set(PointerRNA *ptr, int value)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	data->fade_frames = CLAMPIS(value, 1, 100);
}

int ParticleEdit_type_get(PointerRNA *ptr)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	return (int)(data->edittype);
}

void ParticleEdit_type_set(PointerRNA *ptr, int value)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	data->edittype = value;
}

int ParticleEdit_is_editable_get(PointerRNA *ptr)
{
	return rna_ParticleEdit_editable_get(ptr);
}

int ParticleEdit_is_hair_get(PointerRNA *ptr)
{
	return rna_ParticleEdit_hair_get(ptr);
}

PointerRNA ParticleEdit_object_get(PointerRNA *ptr)
{
	ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

static PointerRNA ParticleBrush_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ParticleBrush_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ParticleBrush_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ParticleBrush_rna_properties_get(iter);
}

void ParticleBrush_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ParticleBrush_rna_properties_get(iter);
}

void ParticleBrush_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ParticleBrush_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ParticleBrush_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int ParticleBrush_size_get(PointerRNA *ptr)
{
	ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
	return (int)(data->size);
}

void ParticleBrush_size_set(PointerRNA *ptr, int value)
{
	ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
	data->size = CLAMPIS(value, 1, 32767);
}

float ParticleBrush_strength_get(PointerRNA *ptr)
{
	ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
	return (float)(data->strength);
}

void ParticleBrush_strength_set(PointerRNA *ptr, float value)
{
	ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
	data->strength = CLAMPIS(value, 0.0010000000f, 1.0f);
}

int ParticleBrush_count_get(PointerRNA *ptr)
{
	ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
	return (int)(data->count);
}

void ParticleBrush_count_set(PointerRNA *ptr, int value)
{
	ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
	data->count = CLAMPIS(value, 1, 1000);
}

int ParticleBrush_steps_get(PointerRNA *ptr)
{
	ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
	return (int)(data->step);
}

void ParticleBrush_steps_set(PointerRNA *ptr, int value)
{
	ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
	data->step = CLAMPIS(value, 1, 32767);
}

int ParticleBrush_puff_mode_get(PointerRNA *ptr)
{
	ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
	return (int)(data->invert);
}

void ParticleBrush_puff_mode_set(PointerRNA *ptr, int value)
{
	ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
	data->invert = value;
}

int ParticleBrush_use_puff_volume_get(PointerRNA *ptr)
{
	ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void ParticleBrush_use_puff_volume_set(PointerRNA *ptr, int value)
{
	ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int ParticleBrush_length_mode_get(PointerRNA *ptr)
{
	ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
	return (int)(data->invert);
}

void ParticleBrush_length_mode_set(PointerRNA *ptr, int value)
{
	ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
	data->invert = value;
}

PointerRNA ParticleBrush_curve_get(PointerRNA *ptr)
{
	return rna_ParticleBrush_curve_get(ptr);
}








int ImagePaint_detect_data(struct ImagePaintSettings *_self)
{
	return rna_ImaPaint_detect_data(_self);
}

void ImagePaint_detect_data_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ImagePaintSettings *_self;
	int ok;
	char *_data, *_retdata;
	
	_self = (struct ImagePaintSettings *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	ok = rna_ImaPaint_detect_data(_self);
	*((int *)_retdata) = ok;
}

/* Repeated prototypes to detect errors */

int rna_ImaPaint_detect_data(struct ImagePaintSettings *_self);



/* Palette Color */
CollectionPropertyRNA rna_PaletteColor_rna_properties = {
	{(PropertyRNA *)&rna_PaletteColor_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PaletteColor_rna_properties_begin, PaletteColor_rna_properties_next, PaletteColor_rna_properties_end, PaletteColor_rna_properties_get, NULL, NULL, PaletteColor_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_PaletteColor_rna_type = {
	{(PropertyRNA *)&rna_PaletteColor_color, (PropertyRNA *)&rna_PaletteColor_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PaletteColor_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_PaletteColor_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PaletteColor_color = {
	{(PropertyRNA *)&rna_PaletteColor_strength, (PropertyRNA *)&rna_PaletteColor_rna_type,
	-1, "color", 8193, "Color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 68091904, NULL, NULL,
	offsetof(PaletteColor, rgb), 4, NULL},
	NULL, NULL, PaletteColor_color_get, PaletteColor_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_PaletteColor_color_default
};

FloatPropertyRNA rna_PaletteColor_strength = {
	{(PropertyRNA *)&rna_PaletteColor_weight, (PropertyRNA *)&rna_PaletteColor_color,
	-1, "strength", 8193, "Value",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	offsetof(PaletteColor, value), 4, NULL},
	PaletteColor_strength_get, PaletteColor_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PaletteColor_weight = {
	{NULL, (PropertyRNA *)&rna_PaletteColor_strength,
	-1, "weight", 8193, "Weight",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	offsetof(PaletteColor, value), 4, NULL},
	PaletteColor_weight_get, PaletteColor_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_PaletteColor = {
	{(ContainerRNA *)&RNA_Palette, (ContainerRNA *)&RNA_View2D,
	NULL,
	{(PropertyRNA *)&rna_PaletteColor_rna_properties, (PropertyRNA *)&rna_PaletteColor_weight}},
	"PaletteColor", NULL, NULL, 4, "Palette Color",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_PaletteColor_rna_properties,
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

/* Palette */
CollectionPropertyRNA rna_Palette_colors = {
	{NULL, NULL,
	-1, "colors", 0, "Palette Color",
	"Colors that are part of this palette",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	Palette_colors_begin, Palette_colors_next, Palette_colors_end, Palette_colors_get, NULL, Palette_colors_lookup_int, NULL, NULL, &RNA_PaletteColor
};

StructRNA RNA_Palette = {
	{(ContainerRNA *)&RNA_PaintCurve, (ContainerRNA *)&RNA_PaletteColor,
	NULL,
	{(PropertyRNA *)&rna_Palette_colors, (PropertyRNA *)&rna_Palette_colors}},
	"Palette", NULL, NULL, 7, "Palette",
	"",
	"*", 54,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Paint Curve */
StructRNA RNA_PaintCurve = {
	{(ContainerRNA *)&RNA_Paint, (ContainerRNA *)&RNA_Palette,
	NULL,
	{NULL, NULL}},
	"PaintCurve", NULL, NULL, 7, "Paint Curve",
	"",
	"*", 321,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Paint */
CollectionPropertyRNA rna_Paint_rna_properties = {
	{(PropertyRNA *)&rna_Paint_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Paint_rna_properties_begin, Paint_rna_properties_next, Paint_rna_properties_end, Paint_rna_properties_get, NULL, NULL, Paint_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Paint_rna_type = {
	{(PropertyRNA *)&rna_Paint_brush, (PropertyRNA *)&rna_Paint_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Paint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_Paint_brush = {
	{(PropertyRNA *)&rna_Paint_palette, (PropertyRNA *)&rna_Paint_rna_type,
	-1, "brush", 8388673, "Brush",
	"Active Brush",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Paint_brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Paint_brush_get, Paint_brush_set, NULL, rna_Brush_mode_poll,&RNA_Brush
};

PointerPropertyRNA rna_Paint_palette = {
	{(PropertyRNA *)&rna_Paint_show_brush, (PropertyRNA *)&rna_Paint_brush,
	-1, "palette", 8388673, "Palette",
	"Active Palette",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Paint_palette_get, Paint_palette_set, NULL, NULL,&RNA_Palette
};

BoolPropertyRNA rna_Paint_show_brush = {
	{(PropertyRNA *)&rna_Paint_show_brush_on_surface, (PropertyRNA *)&rna_Paint_palette,
	-1, "show_brush", 1, "Show Brush",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	Paint_show_brush_get, Paint_show_brush_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Paint_show_brush_on_surface = {
	{(PropertyRNA *)&rna_Paint_show_low_resolution, (PropertyRNA *)&rna_Paint_show_brush,
	-1, "show_brush_on_surface", 1, "Show Brush On Surface",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	Paint_show_brush_on_surface_get, Paint_show_brush_on_surface_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Paint_show_low_resolution = {
	{(PropertyRNA *)&rna_Paint_input_samples, (PropertyRNA *)&rna_Paint_show_brush_on_surface,
	-1, "show_low_resolution", 1, "Fast Navigate",
	"For multires, show low resolution while navigating the view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	Paint_show_low_resolution_get, Paint_show_low_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Paint_input_samples = {
	{(PropertyRNA *)&rna_Paint_use_symmetry_x, (PropertyRNA *)&rna_Paint_show_low_resolution,
	-1, "input_samples", 8193, "Input Samples",
	"Average multiple input samples together to smooth the brush stroke",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	offsetof(Paint, num_input_samples), 0, NULL},
	Paint_input_samples_get, Paint_input_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 64, 0, INT_MAX, 0, 0, NULL
};

BoolPropertyRNA rna_Paint_use_symmetry_x = {
	{(PropertyRNA *)&rna_Paint_use_symmetry_y, (PropertyRNA *)&rna_Paint_input_samples,
	-1, "use_symmetry_x", 1, "Symmetry X",
	"Mirror brush across the X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	Paint_use_symmetry_x_get, Paint_use_symmetry_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Paint_use_symmetry_y = {
	{(PropertyRNA *)&rna_Paint_use_symmetry_z, (PropertyRNA *)&rna_Paint_use_symmetry_x,
	-1, "use_symmetry_y", 1, "Symmetry Y",
	"Mirror brush across the Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	Paint_use_symmetry_y_get, Paint_use_symmetry_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Paint_use_symmetry_z = {
	{(PropertyRNA *)&rna_Paint_use_symmetry_feather, (PropertyRNA *)&rna_Paint_use_symmetry_y,
	-1, "use_symmetry_z", 1, "Symmetry Z",
	"Mirror brush across the Z axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	Paint_use_symmetry_z_get, Paint_use_symmetry_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Paint_use_symmetry_feather = {
	{NULL, (PropertyRNA *)&rna_Paint_use_symmetry_z,
	-1, "use_symmetry_feather", 1, "Symmetry Feathering",
	"Reduce the strength of the brush where it overlaps symmetrical daubs",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	Paint_use_symmetry_feather_get, Paint_use_symmetry_feather_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_Paint = {
	{(ContainerRNA *)&RNA_Sculpt, (ContainerRNA *)&RNA_PaintCurve,
	NULL,
	{(PropertyRNA *)&rna_Paint_rna_properties, (PropertyRNA *)&rna_Paint_use_symmetry_feather}},
	"Paint", NULL, NULL, 4, "Paint",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Paint_rna_properties,
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

/* Sculpt */
static int rna_Sculpt_radial_symmetry_default[3] = {
	1,
	1,
	1
};

IntPropertyRNA rna_Sculpt_radial_symmetry = {
	{(PropertyRNA *)&rna_Sculpt_lock_x, NULL,
	-1, "radial_symmetry", 8193, "Radial Symmetry Count X Axis",
	"Number of times to copy strokes across the surface",
	0, "*",
	PROP_INT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(Sculpt, radial_symm), 0, NULL},
	NULL, NULL, Sculpt_radial_symmetry_get, Sculpt_radial_symmetry_set, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 32, 1, 64, 1, 1, rna_Sculpt_radial_symmetry_default
};

BoolPropertyRNA rna_Sculpt_lock_x = {
	{(PropertyRNA *)&rna_Sculpt_lock_y, (PropertyRNA *)&rna_Sculpt_radial_symmetry,
	-1, "lock_x", 1, "Lock X",
	"Disallow changes to the X axis of vertices",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	Sculpt_lock_x_get, Sculpt_lock_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Sculpt_lock_y = {
	{(PropertyRNA *)&rna_Sculpt_lock_z, (PropertyRNA *)&rna_Sculpt_lock_x,
	-1, "lock_y", 1, "Lock Y",
	"Disallow changes to the Y axis of vertices",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	Sculpt_lock_y_get, Sculpt_lock_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Sculpt_lock_z = {
	{(PropertyRNA *)&rna_Sculpt_use_threaded, (PropertyRNA *)&rna_Sculpt_lock_y,
	-1, "lock_z", 1, "Lock Z",
	"Disallow changes to the Z axis of vertices",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	Sculpt_lock_z_get, Sculpt_lock_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Sculpt_use_threaded = {
	{(PropertyRNA *)&rna_Sculpt_use_deform_only, (PropertyRNA *)&rna_Sculpt_lock_z,
	-1, "use_threaded", 1, "Use OpenMP",
	"Take advantage of multiple CPU cores to improve sculpting performance",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	Sculpt_use_threaded_get, Sculpt_use_threaded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Sculpt_use_deform_only = {
	{(PropertyRNA *)&rna_Sculpt_show_diffuse_color, (PropertyRNA *)&rna_Sculpt_use_threaded,
	-1, "use_deform_only", 1, "Use Deform Only",
	"Use only deformation modifiers (temporary disable all constructive modifiers except multi-resolution)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sculpt_update, 85393408, NULL, NULL,
	0, -1, NULL},
	Sculpt_use_deform_only_get, Sculpt_use_deform_only_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Sculpt_show_diffuse_color = {
	{(PropertyRNA *)&rna_Sculpt_detail_size, (PropertyRNA *)&rna_Sculpt_use_deform_only,
	-1, "show_diffuse_color", 1, "Show Diffuse Color",
	"Show diffuse color of object and overlay sculpt mask on top of it",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sculpt_ShowDiffuseColor_update, 85393408, NULL, NULL,
	0, -1, NULL},
	Sculpt_show_diffuse_color_get, Sculpt_show_diffuse_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Sculpt_detail_size = {
	{(PropertyRNA *)&rna_Sculpt_constant_detail, (PropertyRNA *)&rna_Sculpt_show_diffuse_color,
	-1, "detail_size", 8193, "Detail Size",
	"Maximum edge length for dynamic topology sculpting (in pixels)",
	0, "*",
	PROP_FLOAT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	offsetof(Sculpt, detail_size), 4, NULL},
	Sculpt_detail_size_get, Sculpt_detail_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.5000000000f, 40.0f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_Sculpt_constant_detail = {
	{(PropertyRNA *)&rna_Sculpt_use_smooth_shading, (PropertyRNA *)&rna_Sculpt_detail_size,
	-1, "constant_detail", 8193, "Detail Size",
	"Maximum edge length for dynamic topology sculpting (as percentage of blender unit)",
	0, "*",
	PROP_FLOAT, PROP_PERCENTAGE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	offsetof(Sculpt, constant_detail), 4, NULL},
	Sculpt_constant_detail_get, Sculpt_constant_detail_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 100.0f, 0.0010000000f, 10000.0f, 10.0f, 2, 0.0f, NULL
};

BoolPropertyRNA rna_Sculpt_use_smooth_shading = {
	{(PropertyRNA *)&rna_Sculpt_symmetrize_direction, (PropertyRNA *)&rna_Sculpt_constant_detail,
	-1, "use_smooth_shading", 1, "Smooth Shading",
	"Show faces in dynamic-topology mode with smooth shading rather than flat shaded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sculpt_update, 85393408, NULL, NULL,
	0, -1, NULL},
	Sculpt_use_smooth_shading_get, Sculpt_use_smooth_shading_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Sculpt_symmetrize_direction_items[7] = {
	{0, "NEGATIVE_X", 0, "-X to +X", ""},
	{3, "POSITIVE_X", 0, "+X to -X", ""},
	{1, "NEGATIVE_Y", 0, "-Y to +Y", ""},
	{4, "POSITIVE_Y", 0, "+Y to -Y", ""},
	{2, "NEGATIVE_Z", 0, "-Z to +Z", ""},
	{5, "POSITIVE_Z", 0, "+Z to -Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Sculpt_symmetrize_direction = {
	{(PropertyRNA *)&rna_Sculpt_detail_refine_method, (PropertyRNA *)&rna_Sculpt_use_smooth_shading,
	-1, "symmetrize_direction", 1, "Direction",
	"Source and destination for symmetrize operator",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Sculpt_symmetrize_direction_get, Sculpt_symmetrize_direction_set, NULL, NULL, NULL, NULL, rna_Sculpt_symmetrize_direction_items, 6, 0
};

static EnumPropertyItem rna_Sculpt_detail_refine_method_items[4] = {
	{4096, "SUBDIVIDE", 0, "Subdivide Edges", "Subdivide long edges to add mesh detail where needed"},
	{2048, "COLLAPSE", 0, "Collapse Edges", "Collapse short edges to remove mesh detail where possible"},
	{6144, "SUBDIVIDE_COLLAPSE", 0, "Subdivide Collapse", "Both subdivide long edges and collapse short edges to refine mesh detail"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Sculpt_detail_refine_method = {
	{(PropertyRNA *)&rna_Sculpt_detail_type_method, (PropertyRNA *)&rna_Sculpt_symmetrize_direction,
	-1, "detail_refine_method", 1, "Detail Refine Method",
	"In dynamic-topology mode, how to add or remove mesh detail",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	Sculpt_detail_refine_method_get, Sculpt_detail_refine_method_set, NULL, NULL, NULL, NULL, rna_Sculpt_detail_refine_method_items, 3, 4096
};

static EnumPropertyItem rna_Sculpt_detail_type_method_items[3] = {
	{0, "RELATIVE", 0, "Relative Detail", "Mesh detail is relative to the brush size and detail size"},
	{8192, "CONSTANT", 0, "Constant Detail", "Mesh detail is constant in object space according to detail size"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Sculpt_detail_type_method = {
	{(PropertyRNA *)&rna_Sculpt_gravity, (PropertyRNA *)&rna_Sculpt_detail_refine_method,
	-1, "detail_type_method", 1, "Detail Type Method",
	"In dynamic-topology mode, how mesh detail size is calculated",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	Sculpt_detail_type_method_get, Sculpt_detail_type_method_set, NULL, NULL, NULL, NULL, rna_Sculpt_detail_type_method_items, 2, 0
};

FloatPropertyRNA rna_Sculpt_gravity = {
	{(PropertyRNA *)&rna_Sculpt_gravity_object, (PropertyRNA *)&rna_Sculpt_detail_type_method,
	-1, "gravity", 8193, "Gravity",
	"Amount of gravity after each dab",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	offsetof(Sculpt, gravity_factor), 4, NULL},
	Sculpt_gravity_get, Sculpt_gravity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_Sculpt_gravity_object = {
	{NULL, (PropertyRNA *)&rna_Sculpt_gravity,
	-1, "gravity_object", 8388609, "Orientation",
	"Object whose Z axis defines orientation of gravity",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	Sculpt_gravity_object_get, Sculpt_gravity_object_set, NULL, NULL,&RNA_Object
};

StructRNA RNA_Sculpt = {
	{(ContainerRNA *)&RNA_UvSculpt, (ContainerRNA *)&RNA_Paint,
	NULL,
	{(PropertyRNA *)&rna_Sculpt_radial_symmetry, (PropertyRNA *)&rna_Sculpt_gravity_object}},
	"Sculpt", NULL, NULL, 4, "Sculpt",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Paint_rna_properties,
	&RNA_Paint,
	NULL,
	NULL,
	rna_Sculpt_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* UV Sculpting */
StructRNA RNA_UvSculpt = {
	{(ContainerRNA *)&RNA_VertexPaint, (ContainerRNA *)&RNA_Sculpt,
	NULL,
	{NULL, NULL}},
	"UvSculpt", NULL, NULL, 4, "UV Sculpting",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Paint_rna_properties,
	&RNA_Paint,
	NULL,
	NULL,
	rna_UvSculpt_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Vertex Paint */
BoolPropertyRNA rna_VertexPaint_use_normal = {
	{(PropertyRNA *)&rna_VertexPaint_use_spray, NULL,
	-1, "use_normal", 1, "Normals",
	"Apply the vertex normal before painting",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	VertexPaint_use_normal_get, VertexPaint_use_normal_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_VertexPaint_use_spray = {
	{(PropertyRNA *)&rna_VertexPaint_use_group_restrict, (PropertyRNA *)&rna_VertexPaint_use_normal,
	-1, "use_spray", 1, "Spray",
	"Keep applying paint effect while holding mouse",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	VertexPaint_use_spray_get, VertexPaint_use_spray_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_VertexPaint_use_group_restrict = {
	{NULL, (PropertyRNA *)&rna_VertexPaint_use_spray,
	-1, "use_group_restrict", 1, "Restrict",
	"Restrict painting to vertices in the group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	VertexPaint_use_group_restrict_get, VertexPaint_use_group_restrict_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_VertexPaint = {
	{(ContainerRNA *)&RNA_ImagePaint, (ContainerRNA *)&RNA_UvSculpt,
	NULL,
	{(PropertyRNA *)&rna_VertexPaint_use_normal, (PropertyRNA *)&rna_VertexPaint_use_group_restrict}},
	"VertexPaint", NULL, NULL, 4, "Vertex Paint",
	"Properties of vertex and weight paint mode",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Paint_rna_properties,
	&RNA_Paint,
	NULL,
	NULL,
	rna_VertexPaint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Image Paint */
BoolPropertyRNA rna_ImagePaint_use_occlude = {
	{(PropertyRNA *)&rna_ImagePaint_use_backface_culling, NULL,
	-1, "use_occlude", 1, "Occlude",
	"Only paint onto the faces directly under the brush (slower)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	ImagePaint_use_occlude_get, ImagePaint_use_occlude_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImagePaint_use_backface_culling = {
	{(PropertyRNA *)&rna_ImagePaint_use_normal_falloff, (PropertyRNA *)&rna_ImagePaint_use_occlude,
	-1, "use_backface_culling", 1, "Cull",
	"Ignore faces pointing away from the view (faster)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	ImagePaint_use_backface_culling_get, ImagePaint_use_backface_culling_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImagePaint_use_normal_falloff = {
	{(PropertyRNA *)&rna_ImagePaint_use_stencil_layer, (PropertyRNA *)&rna_ImagePaint_use_backface_culling,
	-1, "use_normal_falloff", 1, "Normal",
	"Paint most on faces pointing towards the view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	ImagePaint_use_normal_falloff_get, ImagePaint_use_normal_falloff_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImagePaint_use_stencil_layer = {
	{(PropertyRNA *)&rna_ImagePaint_invert_stencil, (PropertyRNA *)&rna_ImagePaint_use_normal_falloff,
	-1, "use_stencil_layer", 1, "Stencil Layer",
	"Set the mask layer from the UV map buttons",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ImaPaint_viewport_update, 68091904, NULL, NULL,
	0, -1, NULL},
	ImagePaint_use_stencil_layer_get, ImagePaint_use_stencil_layer_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImagePaint_invert_stencil = {
	{(PropertyRNA *)&rna_ImagePaint_stencil_image, (PropertyRNA *)&rna_ImagePaint_use_stencil_layer,
	-1, "invert_stencil", 1, "Invert",
	"Invert the stencil layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ImaPaint_viewport_update, 68091904, NULL, NULL,
	0, -1, NULL},
	ImagePaint_invert_stencil_get, ImagePaint_invert_stencil_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ImagePaint_stencil_image = {
	{(PropertyRNA *)&rna_ImagePaint_canvas, (PropertyRNA *)&rna_ImagePaint_invert_stencil,
	-1, "stencil_image", 8388673, "Stencil Image",
	"Image used as stencil",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ImaPaint_stencil_update, 68091904, NULL, NULL,
	0, -1, NULL},
	ImagePaint_stencil_image_get, ImagePaint_stencil_image_set, NULL, NULL,&RNA_Image
};

PointerPropertyRNA rna_ImagePaint_canvas = {
	{(PropertyRNA *)&rna_ImagePaint_clone_image, (PropertyRNA *)&rna_ImagePaint_stencil_image,
	-1, "canvas", 8388673, "Canvas",
	"Image used as canvas",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ImaPaint_canvas_update, 68091904, NULL, NULL,
	0, -1, NULL},
	ImagePaint_canvas_get, ImagePaint_canvas_set, NULL, NULL,&RNA_Image
};

PointerPropertyRNA rna_ImagePaint_clone_image = {
	{(PropertyRNA *)&rna_ImagePaint_stencil_color, (PropertyRNA *)&rna_ImagePaint_canvas,
	-1, "clone_image", 8388673, "Clone Image",
	"Image used as clone source",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	ImagePaint_clone_image_get, ImagePaint_clone_image_set, NULL, NULL,&RNA_Image
};

static float rna_ImagePaint_stencil_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ImagePaint_stencil_color = {
	{(PropertyRNA *)&rna_ImagePaint_use_clone_layer, (PropertyRNA *)&rna_ImagePaint_clone_image,
	-1, "stencil_color", 8193, "Stencil Color",
	"Stencil color in the viewport",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_ImaPaint_viewport_update, 68091904, NULL, NULL,
	offsetof(ImagePaintSettings, stencil_col), 4, NULL},
	NULL, NULL, ImagePaint_stencil_color_get, ImagePaint_stencil_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ImagePaint_stencil_color_default
};

BoolPropertyRNA rna_ImagePaint_use_clone_layer = {
	{(PropertyRNA *)&rna_ImagePaint_seam_bleed, (PropertyRNA *)&rna_ImagePaint_stencil_color,
	-1, "use_clone_layer", 1, "Clone Map",
	"Use another UV map as clone source, otherwise use the 3D cursor as the source",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	ImagePaint_use_clone_layer_get, ImagePaint_use_clone_layer_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_ImagePaint_seam_bleed = {
	{(PropertyRNA *)&rna_ImagePaint_normal_angle, (PropertyRNA *)&rna_ImagePaint_use_clone_layer,
	-1, "seam_bleed", 8193, "Bleed",
	"Extend paint beyond the faces UVs to reduce seams (in pixels, slower)",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ImagePaintSettings, seam_bleed), 1, NULL},
	ImagePaint_seam_bleed_get, ImagePaint_seam_bleed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 8, -32768, 32767, 0, 0, NULL
};

IntPropertyRNA rna_ImagePaint_normal_angle = {
	{(PropertyRNA *)&rna_ImagePaint_screen_grab_size, (PropertyRNA *)&rna_ImagePaint_seam_bleed,
	-1, "normal_angle", 8193, "Angle",
	"Paint most on faces pointing towards the view according to this angle",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ImagePaintSettings, normal_angle), 1, NULL},
	ImagePaint_normal_angle_get, ImagePaint_normal_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 90, 0, 90, 1, 0, NULL
};

static int rna_ImagePaint_screen_grab_size_default[2] = {
	0,
	0
};

IntPropertyRNA rna_ImagePaint_screen_grab_size = {
	{(PropertyRNA *)&rna_ImagePaint_mode, (PropertyRNA *)&rna_ImagePaint_normal_angle,
	-1, "screen_grab_size", 8193, "screen_grab_size",
	"Size to capture the image for re-projecting",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL,
	offsetof(ImagePaintSettings, screen_grab_size), 1, NULL},
	NULL, NULL, ImagePaint_screen_grab_size_get, ImagePaint_screen_grab_size_set, NULL, NULL, NULL, NULL, NULL, NULL,
	512, 16384, 512, 16384, 1, 0, rna_ImagePaint_screen_grab_size_default
};

static EnumPropertyItem rna_ImagePaint_mode_items[3] = {
	{0, "MATERIAL", 0, "Material", "Detect image slots from the material"},
	{1, "IMAGE", 0, "Image", "Set image for texture painting directly"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ImagePaint_mode = {
	{(PropertyRNA *)&rna_ImagePaint_missing_uvs, (PropertyRNA *)&rna_ImagePaint_screen_grab_size,
	-1, "mode", 1, "Mode",
	"Mode of operation for projection painting",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ImaPaint_mode_update, 68091904, NULL, NULL,
	0, -1, NULL},
	ImagePaint_mode_get, ImagePaint_mode_set, NULL, NULL, NULL, NULL, rna_ImagePaint_mode_items, 2, 0
};

BoolPropertyRNA rna_ImagePaint_missing_uvs = {
	{(PropertyRNA *)&rna_ImagePaint_missing_materials, (PropertyRNA *)&rna_ImagePaint_mode,
	-1, "missing_uvs", 0, "Missing UVs",
	"A UV layer is missing on the mesh",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImagePaint_missing_uvs_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImagePaint_missing_materials = {
	{(PropertyRNA *)&rna_ImagePaint_missing_stencil, (PropertyRNA *)&rna_ImagePaint_missing_uvs,
	-1, "missing_materials", 0, "Missing Materials",
	"The mesh is missing materials",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImagePaint_missing_materials_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImagePaint_missing_stencil = {
	{(PropertyRNA *)&rna_ImagePaint_missing_texture, (PropertyRNA *)&rna_ImagePaint_missing_materials,
	-1, "missing_stencil", 0, "Missing Stencil",
	"Image Painting does not have a stencil",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImagePaint_missing_stencil_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImagePaint_missing_texture = {
	{NULL, (PropertyRNA *)&rna_ImagePaint_missing_stencil,
	-1, "missing_texture", 0, "Missing Texture",
	"Image Painting does not have a texture to paint on",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImagePaint_missing_texture_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImagePaint_detect_data_ok = {
	{NULL, NULL,
	-1, "ok", 9, "",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

FunctionRNA rna_ImagePaint_detect_data_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_ImagePaint_detect_data_ok, (PropertyRNA *)&rna_ImagePaint_detect_data_ok}},
	"detect_data", 0, "Check if required texpaint data exist",
	ImagePaint_detect_data_call,
	(PropertyRNA *)&rna_ImagePaint_detect_data_ok
};

StructRNA RNA_ImagePaint = {
	{(ContainerRNA *)&RNA_ParticleEdit, (ContainerRNA *)&RNA_VertexPaint,
	NULL,
	{(PropertyRNA *)&rna_ImagePaint_use_occlude, (PropertyRNA *)&rna_ImagePaint_missing_texture}},
	"ImagePaint", NULL, NULL, 4, "Image Paint",
	"Properties of image and texture painting mode",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Paint_rna_properties,
	&RNA_Paint,
	NULL,
	NULL,
	rna_ImagePaintSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_ImagePaint_detect_data_func, (FunctionRNA *)&rna_ImagePaint_detect_data_func}
};

/* Particle Edit */
CollectionPropertyRNA rna_ParticleEdit_rna_properties = {
	{(PropertyRNA *)&rna_ParticleEdit_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_rna_properties_begin, ParticleEdit_rna_properties_next, ParticleEdit_rna_properties_end, ParticleEdit_rna_properties_get, NULL, NULL, ParticleEdit_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ParticleEdit_rna_type = {
	{(PropertyRNA *)&rna_ParticleEdit_tool, (PropertyRNA *)&rna_ParticleEdit_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_ParticleEdit_tool_items[9] = {
	{-1, "NONE", 0, "None", "Don\'t use any brush"},
	{0, "COMB", 0, "Comb", "Comb hairs"},
	{5, "SMOOTH", 0, "Smooth", "Smooth hairs"},
	{4, "ADD", 0, "Add", "Add hairs"},
	{2, "LENGTH", 0, "Length", "Make hairs longer or shorter"},
	{3, "PUFF", 0, "Puff", "Make hairs stand up"},
	{1, "CUT", 0, "Cut", "Cut hairs"},
	{6, "WEIGHT", 0, "Weight", "Weight hair particles"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleEdit_tool = {
	{(PropertyRNA *)&rna_ParticleEdit_select_mode, (PropertyRNA *)&rna_ParticleEdit_rna_type,
	-1, "tool", 1, "Tool",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_tool_get, ParticleEdit_tool_set, rna_ParticleEdit_tool_itemf, NULL, NULL, NULL, rna_ParticleEdit_tool_items, 8, 0
};

static EnumPropertyItem rna_ParticleEdit_select_mode_items[4] = {
	{1, "PATH", 571, "Path", "Path edit mode"},
	{2, "POINT", 569, "Point", "Point select mode"},
	{4, "TIP", 570, "Tip", "Tip select mode"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleEdit_select_mode = {
	{(PropertyRNA *)&rna_ParticleEdit_use_preserve_length, (PropertyRNA *)&rna_ParticleEdit_tool,
	-1, "select_mode", 1, "Selection Mode",
	"Particle select and display mode",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ParticleEdit_update, 85393408, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_select_mode_get, ParticleEdit_select_mode_set, NULL, NULL, NULL, NULL, rna_ParticleEdit_select_mode_items, 3, 1
};

BoolPropertyRNA rna_ParticleEdit_use_preserve_length = {
	{(PropertyRNA *)&rna_ParticleEdit_use_preserve_root, (PropertyRNA *)&rna_ParticleEdit_select_mode,
	-1, "use_preserve_length", 1, "Keep Lengths",
	"Keep path lengths constant",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_use_preserve_length_get, ParticleEdit_use_preserve_length_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleEdit_use_preserve_root = {
	{(PropertyRNA *)&rna_ParticleEdit_use_emitter_deflect, (PropertyRNA *)&rna_ParticleEdit_use_preserve_length,
	-1, "use_preserve_root", 1, "Keep Root",
	"Keep root keys unmodified",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_use_preserve_root_get, ParticleEdit_use_preserve_root_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleEdit_use_emitter_deflect = {
	{(PropertyRNA *)&rna_ParticleEdit_emitter_distance, (PropertyRNA *)&rna_ParticleEdit_use_preserve_root,
	-1, "use_emitter_deflect", 1, "Deflect Emitter",
	"Keep paths from intersecting the emitter",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_use_emitter_deflect_get, ParticleEdit_use_emitter_deflect_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_ParticleEdit_emitter_distance = {
	{(PropertyRNA *)&rna_ParticleEdit_use_fade_time, (PropertyRNA *)&rna_ParticleEdit_use_emitter_deflect,
	-1, "emitter_distance", 8193, "Emitter Distance",
	"Distance to keep particles away from the emitter",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleEditSettings, emitterdist), 4, NULL},
	ParticleEdit_emitter_distance_get, ParticleEdit_emitter_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_ParticleEdit_use_fade_time = {
	{(PropertyRNA *)&rna_ParticleEdit_use_auto_velocity, (PropertyRNA *)&rna_ParticleEdit_emitter_distance,
	-1, "use_fade_time", 1, "Fade Time",
	"Fade paths and keys further away from current frame",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ParticleEdit_update, 85393408, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_use_fade_time_get, ParticleEdit_use_fade_time_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleEdit_use_auto_velocity = {
	{(PropertyRNA *)&rna_ParticleEdit_show_particles, (PropertyRNA *)&rna_ParticleEdit_use_fade_time,
	-1, "use_auto_velocity", 1, "Auto Velocity",
	"Calculate point velocities automatically",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_use_auto_velocity_get, ParticleEdit_use_auto_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleEdit_show_particles = {
	{(PropertyRNA *)&rna_ParticleEdit_use_default_interpolate, (PropertyRNA *)&rna_ParticleEdit_use_auto_velocity,
	-1, "show_particles", 1, "Draw Particles",
	"Draw actual particles",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ParticleEdit_redo, 85393408, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_show_particles_get, ParticleEdit_show_particles_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleEdit_use_default_interpolate = {
	{(PropertyRNA *)&rna_ParticleEdit_default_key_count, (PropertyRNA *)&rna_ParticleEdit_show_particles,
	-1, "use_default_interpolate", 1, "Interpolate",
	"Interpolate new particles from the existing ones",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_use_default_interpolate_get, ParticleEdit_use_default_interpolate_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_ParticleEdit_default_key_count = {
	{(PropertyRNA *)&rna_ParticleEdit_brush, (PropertyRNA *)&rna_ParticleEdit_use_default_interpolate,
	-1, "default_key_count", 8193, "Keys",
	"How many keys to make new particles with",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleEditSettings, totaddkey), 1, NULL},
	ParticleEdit_default_key_count_get, ParticleEdit_default_key_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	2, 20, 2, 32767, 10, 0, NULL
};

PointerPropertyRNA rna_ParticleEdit_brush = {
	{(PropertyRNA *)&rna_ParticleEdit_draw_step, (PropertyRNA *)&rna_ParticleEdit_default_key_count,
	-1, "brush", 8388608, "Brush",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {7, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_brush_get, NULL, NULL, NULL,&RNA_ParticleBrush
};

IntPropertyRNA rna_ParticleEdit_draw_step = {
	{(PropertyRNA *)&rna_ParticleEdit_fade_frames, (PropertyRNA *)&rna_ParticleEdit_brush,
	-1, "draw_step", 8193, "Steps",
	"How many steps to draw the path with",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ParticleEdit_redo, 85393408, NULL, NULL,
	offsetof(ParticleEditSettings, draw_step), 0, NULL},
	ParticleEdit_draw_step_get, ParticleEdit_draw_step_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 10, 1, 10, 1, 0, NULL
};

IntPropertyRNA rna_ParticleEdit_fade_frames = {
	{(PropertyRNA *)&rna_ParticleEdit_type, (PropertyRNA *)&rna_ParticleEdit_draw_step,
	-1, "fade_frames", 8193, "Frames",
	"How many frames to fade",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ParticleEdit_update, 85393408, NULL, NULL,
	offsetof(ParticleEditSettings, fade_frames), 0, NULL},
	ParticleEdit_fade_frames_get, ParticleEdit_fade_frames_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 100, 1, 100, 1, 0, NULL
};

static EnumPropertyItem rna_ParticleEdit_type_items[4] = {
	{0, "PARTICLES", 0, "Particles", ""},
	{1, "SOFT_BODY", 0, "Soft body", ""},
	{2, "CLOTH", 0, "Cloth", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleEdit_type = {
	{(PropertyRNA *)&rna_ParticleEdit_is_editable, (PropertyRNA *)&rna_ParticleEdit_fade_frames,
	-1, "type", 1, "Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ParticleEdit_redo, 85393408, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_type_get, ParticleEdit_type_set, NULL, NULL, NULL, NULL, rna_ParticleEdit_type_items, 3, 0
};

BoolPropertyRNA rna_ParticleEdit_is_editable = {
	{(PropertyRNA *)&rna_ParticleEdit_is_hair, (PropertyRNA *)&rna_ParticleEdit_type,
	-1, "is_editable", 0, "Editable",
	"A valid edit mode exists",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_is_editable_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleEdit_is_hair = {
	{(PropertyRNA *)&rna_ParticleEdit_object, (PropertyRNA *)&rna_ParticleEdit_is_editable,
	-1, "is_hair", 0, "Hair",
	"Editing hair",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_is_hair_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ParticleEdit_object = {
	{NULL, (PropertyRNA *)&rna_ParticleEdit_is_hair,
	-1, "object", 8388608, "Object",
	"The edited object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_object_get, NULL, NULL, NULL,&RNA_Object
};

StructRNA RNA_ParticleEdit = {
	{(ContainerRNA *)&RNA_ParticleBrush, (ContainerRNA *)&RNA_ImagePaint,
	NULL,
	{(PropertyRNA *)&rna_ParticleEdit_rna_properties, (PropertyRNA *)&rna_ParticleEdit_object}},
	"ParticleEdit", NULL, NULL, 4, "Particle Edit",
	"Properties of particle editing mode",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ParticleEdit_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ParticleEdit_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Particle Brush */
CollectionPropertyRNA rna_ParticleBrush_rna_properties = {
	{(PropertyRNA *)&rna_ParticleBrush_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleBrush_rna_properties_begin, ParticleBrush_rna_properties_next, ParticleBrush_rna_properties_end, ParticleBrush_rna_properties_get, NULL, NULL, ParticleBrush_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ParticleBrush_rna_type = {
	{(PropertyRNA *)&rna_ParticleBrush_size, (PropertyRNA *)&rna_ParticleBrush_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleBrush_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_ParticleBrush_size = {
	{(PropertyRNA *)&rna_ParticleBrush_strength, (PropertyRNA *)&rna_ParticleBrush_rna_type,
	-1, "size", 8193, "Radius",
	"Radius of the brush in pixels",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleBrushData, size), 1, NULL},
	ParticleBrush_size_get, ParticleBrush_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 100, 1, 32767, 10, 0, NULL
};

FloatPropertyRNA rna_ParticleBrush_strength = {
	{(PropertyRNA *)&rna_ParticleBrush_count, (PropertyRNA *)&rna_ParticleBrush_size,
	-1, "strength", 8193, "Strength",
	"Brush strength",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleBrushData, strength), 4, NULL},
	ParticleBrush_strength_get, ParticleBrush_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_ParticleBrush_count = {
	{(PropertyRNA *)&rna_ParticleBrush_steps, (PropertyRNA *)&rna_ParticleBrush_strength,
	-1, "count", 8193, "Count",
	"Particle count",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleBrushData, count), 1, NULL},
	ParticleBrush_count_get, ParticleBrush_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 100, 1, 1000, 10, 0, NULL
};

IntPropertyRNA rna_ParticleBrush_steps = {
	{(PropertyRNA *)&rna_ParticleBrush_puff_mode, (PropertyRNA *)&rna_ParticleBrush_count,
	-1, "steps", 8193, "Steps",
	"Brush steps",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleBrushData, step), 1, NULL},
	ParticleBrush_steps_get, ParticleBrush_steps_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 50, 1, 32767, 10, 0, NULL
};

static EnumPropertyItem rna_ParticleBrush_puff_mode_items[3] = {
	{0, "ADD", 0, "Add", "Make hairs more puffy"},
	{1, "SUB", 0, "Sub", "Make hairs less puffy"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleBrush_puff_mode = {
	{(PropertyRNA *)&rna_ParticleBrush_use_puff_volume, (PropertyRNA *)&rna_ParticleBrush_steps,
	-1, "puff_mode", 1, "Puff Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleBrush_puff_mode_get, ParticleBrush_puff_mode_set, NULL, NULL, NULL, NULL, rna_ParticleBrush_puff_mode_items, 2, 0
};

BoolPropertyRNA rna_ParticleBrush_use_puff_volume = {
	{(PropertyRNA *)&rna_ParticleBrush_length_mode, (PropertyRNA *)&rna_ParticleBrush_puff_mode,
	-1, "use_puff_volume", 1, "Puff Volume",
	"Apply puff to unselected end-points (helps maintain hair volume when puffing root)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleBrush_use_puff_volume_get, ParticleBrush_use_puff_volume_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_ParticleBrush_length_mode_items[3] = {
	{0, "GROW", 0, "Grow", "Make hairs longer"},
	{1, "SHRINK", 0, "Shrink", "Make hairs shorter"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleBrush_length_mode = {
	{(PropertyRNA *)&rna_ParticleBrush_curve, (PropertyRNA *)&rna_ParticleBrush_use_puff_volume,
	-1, "length_mode", 1, "Length Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleBrush_length_mode_get, ParticleBrush_length_mode_set, NULL, NULL, NULL, NULL, rna_ParticleBrush_length_mode_items, 2, 0
};

PointerPropertyRNA rna_ParticleBrush_curve = {
	{NULL, (PropertyRNA *)&rna_ParticleBrush_length_mode,
	-1, "curve", 8388608, "Curve",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleBrush_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

StructRNA RNA_ParticleBrush = {
	{(ContainerRNA *)&RNA_Sensor, (ContainerRNA *)&RNA_ParticleEdit,
	NULL,
	{(PropertyRNA *)&rna_ParticleBrush_rna_properties, (PropertyRNA *)&rna_ParticleBrush_curve}},
	"ParticleBrush", NULL, NULL, 4, "Particle Brush",
	"Particle editing brush",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ParticleBrush_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ParticleBrush_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

